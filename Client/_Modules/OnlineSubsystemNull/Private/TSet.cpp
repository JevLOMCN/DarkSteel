// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 32

// Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>_> @ 14ed0bce0

FSetElementId __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>_>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  FSharedReferencer<1> _Src;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  int iVar12;
  bool bVar13;
  FUniqueNetId *local_48;
  FSharedReferencer<1> local_40;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar12 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar7);
  _Src.ReferenceController = local_40.ReferenceController;
  if ((TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
       *)local_40.ReferenceController !=
      (TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
    ::
    operator<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
              ((TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
                *)param_2,
               (TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
                *)local_40.ReferenceController);
    *(undefined4 *)(_Src.ReferenceController + 2) = 0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
  iVar12 = (int)local_48;
  plVar4 = (longlong *)(_Src.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = (**(code **)(*plVar4 + 0x40))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
               **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FUniqueNetId *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
                   *)0x0) {
      LOCK();
      *(atomic<int> *)&pTVar5->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pTVar5->field_0x8 + 1);
      UNLOCK();
    }
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pTVar5;
    iVar7 = FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>
                      (this,uVar6,(TSharedRef<FUniqueNetId_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar5);
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
      DestructItems<FOnlineAchievement,int>
                (*(FOnlineAchievement **)((longlong)_Dst + 0x10),
                 *(int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar7 * 0x28));
      if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x10));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar12,1);
      iVar12 = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)(&((TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
                   *)(_Src.ReferenceController + 2))->field_0x0 + 4) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src.ReferenceController + 2) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar12;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar12;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TSharedPtr<FUniqueNetId_const_,1>_&&>_> @ 14ed0bf20

FSetElementId __thiscall
TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,TSharedPtr<FUniqueNetId_const_,1>_&&>_>
          (TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TSharedPtr<FUniqueNetId_const_,1>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
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
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = puVar3[1];
    puVar3[1] = 0;
    *puVar3 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar9 = *(uint *)local_48.Pointer;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x20 + lVar2) == uVar9) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
      } while (iVar8 != -1);
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
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar9;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(uint *)((longlong)local_48.Pointer + 0x18) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&>_> @ 14ed0c160

FSetElementId __thiscall
TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&>_>
          (TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TWeakPtr<FTSTicker::FElement,1>_const_&> *param_1,
          bool *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar3);
    iVar11 = iVar11 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (uint *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar4;
    lVar3 = puVar4[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar12 = *(uint *)local_48.Pointer;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar12) * 4);
    if (iVar11 != -1) {
      do {
        if (*(uint *)((longlong)iVar11 * 0x20 + *(longlong *)&this->Elements) == uVar12) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar11 * 0x20);
            plVar5 = *(longlong **)((longlong)_Dst + 0x10);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
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
      uVar12 = this->HashSize - 1U & uVar12;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar12;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(uint *)((longlong)local_48.Pointer + 0x18) = *(uint *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_const_&,TSharedRef<FUserOnlineAccountNull,1>_&&>_> @ 14ed0c3c0

FSetElementId __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_const_&,TSharedRef<FUserOnlineAccountNull,1>_&&>_>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_const_&,TSharedRef<FUserOnlineAccountNull,1>_&&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FUniqueNetId *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar7);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    plVar4 = *(longlong **)(param_2 + 8);
    (local_40.ReferenceController)->_padding_ = *plVar3;
    lVar2 = plVar3[1];
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_40.ReferenceController[1]._padding_ = *plVar4;
    lVar2 = plVar4[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  plVar3 = (longlong *)(local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = &(this->Elements).field_0x8;
  uVar6 = (**(code **)(*plVar3 + 0x40))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FUniqueNetId *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar7 = FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>
                      (this,uVar6,(TSharedRef<FUniqueNetId_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar7 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
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
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>_> @ 14ed0c640

FSetElementId __thiscall
TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>_>
          (TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_> *pTVar11;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x60 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  pTVar11 = (TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_> *)0x0;
  iVar10 = 0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_> *)0x0) {
    TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>::
    operator<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>
              ((TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x58) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)pTVar11;
    iVar10 = *(int *)&pTVar11->field_0x8 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar8);
  bVar3 = TryReplaceExisting(this,uVar5,pTVar11,local_res8,in_R9);
  if (!bVar3) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar12 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&pTVar11->field_0x5c = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&pTVar11->field_0x58 = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FOnlineAchievementDesc_const_&>_> @ 14ed0c7f0

FSetElementId __thiscall
TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FOnlineAchievementDesc_const_&>_>
          (TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FOnlineAchievementDesc_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FOnlineAchievementDesc *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_> *pTVar12;
  bool *in_R9;
  int iVar13;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x58 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x58 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  pTVar12 = (TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_> *)0x0;
  iVar13 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_> *)0x0) {
    pFVar3 = *(FOnlineAchievementDesc **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    FOnlineAchievementDesc::FOnlineAchievementDesc
              ((FOnlineAchievementDesc *)((longlong)local_38.Pointer + 0x10),pFVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0x50) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar12->field_0x8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)pTVar12;
    iVar13 = *(int *)&pTVar12->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar9);
  bVar4 = TryReplaceExisting(this,uVar6,pTVar12,local_res8,in_R9);
  if (!bVar4) {
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
      *(uint *)&pTVar12->field_0x54 = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar12->field_0x50 = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TSharedRef<FOnlineStoreOffer,1>_const_&>_> @ 14ed0c9b0

FSetElementId __thiscall
TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,TSharedRef<FOnlineStoreOffer,1>_const_&>_>
          (TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TSharedRef<FOnlineStoreOffer,1>_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FString *_Src;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar7 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar3;
    lVar2 = puVar3[1];
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = (int)lVar2;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayMax =
         (int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&(((FString *)((longlong)local_48.Pointer + 0x20))->Data).AllocatorInstance.Data
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar5 = (_Src->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar7 = iVar5 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,_Src);
    bVar13 = iVar7 != -1;
    if (bVar13) {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar7 * 0x28));
      pvVar4 = (void *)*puVar3;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar3,_Src,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src[2].Data.AllocatorInstance.Data + 4) = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src[2].Data.AllocatorInstance.Data =
           *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FUniqueNetIdNull_const_&>_> @ 14ed0cbe0

FSetElementId __thiscall
TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FUniqueNetIdNull_const_&>_>
          (TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FUniqueNetIdNull_const_&> *param_2,bool *param_3)

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
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    TKeyInitializer<FUniqueNetIdNull_const_&>::
    operator<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
              ((TKeyInitializer<FUniqueNetIdNull_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
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
      *(uint *)((longlong)local_38.Pointer + 0x44) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x40) =
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

// FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_> @ 14ed0cd70

int __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FUniqueNetId_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetId *pFVar4;
  char cVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar4 = *(FUniqueNetId **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == param_2->Object) ||
         (cVar5 = (*(code *)**(undefined8 **)pFVar4)(), cVar5 != '\0')) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return iVar2;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_> @ 14ed0ce40

int __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FUniqueNetId_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetId *pFVar4;
  char cVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar4 = *(FUniqueNetId **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == param_2->Object) ||
         (cVar5 = (*(code *)**(undefined8 **)pFVar4)(), cVar5 != '\0')) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return iVar2;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ed0cf10

int __thiscall
TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0x60;
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
      iVar1 = *(int *)(lVar4 + 0x58 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ed0cfd0

int __thiscall
TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0x58;
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
      iVar1 = *(int *)(lVar4 + 0x50 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ed0d090

int __thiscall
TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
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

// FindIndexByHash<FUniqueNetIdNull> @ 14ed0d160

int __thiscall
TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FUniqueNetIdNull>
          (TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FUniqueNetIdNull *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x48 + 0x40 + *(longlong *)&this->Elements))
    {
      puVar3 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x48);
      cVar2 = (**(code **)*puVar3)(puVar3,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}

// RemoveImpl<int> @ 14ed0d8c0

int __thiscall
TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ed0d9a1;
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
LAB_14ed0d9a1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<int> @ 14ed0da60

int __thiscall
TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14ed0db41;
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
LAB_14ed0db41:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<TSharedRef<FUniqueNetId_const_,1>_> @ 14ed0dc00

int __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
::RemoveImpl<TSharedRef<FUniqueNetId_const_,1>_>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FUniqueNetId_const_,1> *param_2)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetId *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  
  FVar10 = (this->Hash).SecondaryData;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar11 = *(uint *)((longlong)FVar10 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar9 = (longlong)(int)uVar11;
    lVar2 = *(longlong *)&this->Elements;
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + lVar9 * 0x28);
    pFVar4 = *(FUniqueNetId **)(lVar2 + lVar9 * 0x28);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == param_2->Object) || (cVar6 = (*(code *)**(undefined8 **)pFVar4)(), cVar6 != '\0')
       ) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar11 = *(uint *)(lVar2 + lVar9 * 0x28 + 0x20);
    if (uVar11 == 0xffffffff) {
      return 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->Elements).field_0x28)) {
    if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) != 0) goto LAB_14ed0dd3b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
LAB_14ed0dd3b:
  lVar2 = *(longlong *)&this->Elements + (longlong)(int)uVar11 * 0x28;
  FVar10 = (this->Hash).SecondaryData;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar12 = (uint *)((longlong)FVar10 + (longlong)*(int *)(lVar2 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar12;
    if ((uVar1 == 0xffffffff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar7)) break;
    if (uVar1 == uVar11) {
      *puVar12 = *(uint *)(lVar2 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar11,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar11,1);
      return 1;
    }
    puVar12 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar5 = (code *)swi(3);
  iVar8 = (*pcVar5)();
  return iVar8;
}

// TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator> @ 14ed10950

TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
::
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
          (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
           *this,TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator> @ 14ed10a80

TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
::
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Rehash @ 14ed2d490

void __thiscall
TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ed2d56c;
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
LAB_14ed2d56c:
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

// Rehash @ 14ed2d620

void __thiscall
TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TWeakPtr<FTSTicker::FElement,1>_>,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FTSTicker::FElement,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ed2d6fc;
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
LAB_14ed2d6fc:
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

// Rehash @ 14ed2d7b0

void __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar7 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2d887;
        uVar7 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ed2d887:
        iStack_54 = iVar2;
      }
    }
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        lVar8 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar8 * 0x28);
        lVar9 = lVar3 + lVar8 * 0x28;
        plVar5 = *(longlong **)(lVar3 + lVar8 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = (**(code **)(*plVar5 + 0x40))();
        uVar7 = *piVar1 - 1U & uVar7;
        *(uint *)(lVar9 + 0x24) = uVar7;
        FVar6 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar6;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((longlong)FVar11 + uVar10 * 4);
        *(int *)((longlong)FVar11 + uVar10 * 4) = iVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ed2d970

void __thiscall
TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar7 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2da47;
        uVar7 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ed2da47:
        iStack_54 = iVar2;
      }
    }
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        lVar8 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar8 * 0x28);
        lVar9 = lVar3 + lVar8 * 0x28;
        plVar5 = *(longlong **)(lVar3 + lVar8 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = (**(code **)(*plVar5 + 0x40))();
        uVar7 = *piVar1 - 1U & uVar7;
        *(uint *)(lVar9 + 0x24) = uVar7;
        FVar6 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar6;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((longlong)FVar11 + uVar10 * 4);
        *(int *)((longlong)FVar11 + uVar10 * 4) = iVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ed2db30

void __thiscall
TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2dc07;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ed2dc07:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x60);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x5c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ed2dce0

void __thiscall
TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
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
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2ddb7;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ed2ddb7:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x58);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x54) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 10) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ed2de90

void __thiscall
TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2df67;
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
LAB_14ed2df67:
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

// Rehash @ 14ed2e040

void __thiscall
TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
    iVar6 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar8 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ed2e117;
        uVar5 = puVar11[lVar8 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_54 = (int)lVar8 + -1 + iStack_50;
      if (iVar6 < iStack_54) {
LAB_14ed2e117:
        iStack_54 = iVar6;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar6) {
      do {
        iVar4 = local_40.CurrentBitIndex;
        lVar8 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48;
        iVar2 = *(int *)(*(longlong *)&this->Elements + 0x20 +
                        (longlong)local_40.CurrentBitIndex * 0x48);
        iVar6 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar9 = L"";
          iVar6 = 0;
        }
        else {
          pwVar9 = *(wchar_t **)(lVar8 + 0x18);
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)(lVar8 + 0x44) = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
        *(int *)((longlong)FVar10 + uVar7 * 4) = iVar4;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14ed31c50

bool __thiscall
TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_> *param_2,
          int *param_3,bool *param_4)

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
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0x60 + *(longlong *)&this->Elements);
      FOnlineLeaderboardRead::~FOnlineLeaderboardRead((FOnlineLeaderboardRead *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0x58);
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
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x60 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x60 + lVar4);
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

// TryReplaceExisting @ 14ed31e50

bool __thiscall
TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_> *param_2,
          int *param_3,bool *param_4)

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
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0x58 + *(longlong *)&this->Elements);
      if ((longlong *)_Dst[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)_Dst[6] + 0x10))();
      }
      if ((longlong *)_Dst[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)_Dst[4] + 0x10))();
      }
      if ((longlong *)_Dst[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)_Dst[2] + 0x10))();
      }
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0x50);
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
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x58 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x58 + lVar4);
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

// TryReplaceExisting @ 14ed32050

bool __thiscall
TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FString,FVariantData>_> *param_2,int *param_3
          ,bool *param_4)

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
  undefined8 *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0x38 + *(longlong *)&this->Elements);
      FVariantData::Empty((FVariantData *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0x30);
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
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x38 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x38 + lVar4);
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

// TryReplaceExisting @ 14ed32230

bool __thiscall
TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
  *this_00;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  bool bVar17;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar17 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar5 != 1) && (iVar4 != iVar5)) {
    FVar15 = (this->Hash).SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar4 = *(int *)((longlong)FVar15 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar4 != -1; iVar4 = *(int *)((longlong)iVar4 * 0x48 + 0x40 + *(longlong *)&this->Elements))
    {
      puVar14 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x48);
      cVar9 = (**(code **)*puVar14)(puVar14,param_2);
      if (cVar9 != '\0') {
        bVar17 = iVar4 != -1;
        if (bVar17) {
          this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
                     *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x48);
          UE::Core::Private::Tuple::
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
          ::
          ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>
                    (this_00);
          memmove(this_00,param_2,0x40);
          iVar5 = *param_3;
          puVar1 = &(this->Elements).field_0x10;
          lVar6 = *(longlong *)&this->Elements;
          bVar8 = (byte)iVar5 & 0x1f;
          uVar16 = 1 << bVar8 | 1U >> 0x20 - bVar8;
          if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar3 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = puVar1;
          }
          if (((*(uint *)(puVar13 + lVar3) & uVar16) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)(lVar6 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x48) = iVar5;
          }
          puVar2 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x48);
          uVar12 = 0xffffffff;
          *puVar2 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar12 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar2[1] = uVar12;
          puVar13 = &(this->Elements).field_0x34;
          *(int *)puVar13 = *(int *)puVar13 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar5;
          if (((iVar5 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar5)) &&
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
          *(uint *)(puVar13 + lVar3) = *(uint *)(puVar13 + lVar3) & ~uVar16;
          *param_3 = iVar4;
        }
        break;
      }
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar17;
  }
  return bVar17;
}

// UnhashElements @ 14ed32460

void __thiscall
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14ed3255b;
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
LAB_14ed3255b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ed32650;
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
LAB_14ed32650:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

