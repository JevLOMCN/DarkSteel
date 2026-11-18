// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 8

// EmplaceByHash<TKeyInitializer<TSubclassOf<ULiveLinkRole>_const_&>_> @ 14d090a20

FSetElementId __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TSubclassOf<ULiveLinkRole>_const_&>_>
          (TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TSubclassOf<ULiveLinkRole>_const_&> *param_2,
          bool *param_3)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined1 *puVar11;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar8 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar8;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    *(uint *)(puVar11 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar8 & 0x1f));
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_> *
      )0x0) {
    pUVar3 = (UObject *)**(undefined8 **)param_3;
    *(UObject **)local_38.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
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
      uVar8 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
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

// FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_> @ 14d090c00

int __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
          (TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSubclassOf<ULiveLinkRole_const_> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x18 + 0x10 + *(longlong *)&this->Elements))
    {
      pUVar5 = (param_2->Class).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar6 = *(UClass **)((longlong)iVar1 * 0x18 + *(longlong *)&this->Elements);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UClass *)0x0) goto LAB_14d090c9d;
LAB_14d090ccb:
        pUVar6 = (UClass *)0x0;
      }
      else {
        if (pUVar6 == (UClass *)0x0) goto LAB_14d090ccb;
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d090c9d:
        pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        if (pUVar4 == (UClass *)0x0) goto LAB_14d090ccb;
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090ccb;
      }
      if ((pUVar5 == (UClass *)0x0) ||
         (pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar4 == (UClass *)0x0)) {
LAB_14d090d00:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090d00;
      }
      if (pUVar6 == pUVar5) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_> @ 14d090d40

int __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
          (TSet<TTuple<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TSubclassOf<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSubclassOf<ULiveLinkRole_const_> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x18 + 0x10 + *(longlong *)&this->Elements))
    {
      pUVar5 = (param_2->Class).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar6 = *(UClass **)((longlong)iVar1 * 0x18 + *(longlong *)&this->Elements);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UClass *)0x0) goto LAB_14d090ddd;
LAB_14d090e0b:
        pUVar6 = (UClass *)0x0;
      }
      else {
        if (pUVar6 == (UClass *)0x0) goto LAB_14d090e0b;
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d090ddd:
        pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        if (pUVar4 == (UClass *)0x0) goto LAB_14d090e0b;
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090e0b;
      }
      if ((pUVar5 == (UClass *)0x0) ||
         (pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar4 == (UClass *)0x0)) {
LAB_14d090e40:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090e40;
      }
      if (pUVar6 == pUVar5) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TSubclassOf<ULiveLinkRole>_> @ 14d090e80

int __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSubclassOf<ULiveLinkRole>_>
          (TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSubclassOf<ULiveLinkRole> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x18 + 0x10 + *(longlong *)&this->Elements))
    {
      pUVar5 = (param_2->Class).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar6 = *(UClass **)((longlong)iVar1 * 0x18 + *(longlong *)&this->Elements);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UClass *)0x0) goto LAB_14d090f1d;
LAB_14d090f4b:
        pUVar6 = (UClass *)0x0;
      }
      else {
        if (pUVar6 == (UClass *)0x0) goto LAB_14d090f4b;
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d090f1d:
        pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        if (pUVar4 == (UClass *)0x0) goto LAB_14d090f4b;
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar6->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090f4b;
      }
      if ((pUVar5 == (UClass *)0x0) ||
         (pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar4 == (UClass *)0x0)) {
LAB_14d090f80:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar2 = (int)pUVar4->_padding_;
        if (((int)pUVar5->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14d090f80;
      }
      if (pUVar6 == pUVar5) {
        return iVar1;
      }
    }
  }
  return -1;
}

// Empty @ 14d092d40

void __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::Empty(TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
        *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Rehash @ 14d094c70

void __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  UObject *pUVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar7 = this->HashSize;
  uVar12 = (ulonglong)uVar7;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar11 = 0;
  if ((uVar7 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar7,4), 0 < (int)uVar7)) {
    uVar9 = uVar11;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      uVar6 = uVar9 & (longlong)(int)uVar7 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(this->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_40.Array;
      }
      uVar2 = *puVar13;
      uVar12 = uVar11;
      while (uVar2 == 0) {
        iVar10 = (int)uVar11;
        uStack_50 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_50;
        local_68 = iVar10 + 1;
        uVar11 = (ulonglong)local_68;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14d094dab;
        uVar2 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar12 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_54 = (int)lVar5 + -1 + uStack_50;
      uVar11 = (ulonglong)uStack_54;
      if ((int)uVar7 < (int)uStack_54) {
LAB_14d094dab:
        uVar11 = (ulonglong)uVar7;
        uStack_54 = uVar7;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar11 < (int)uVar7) {
      do {
        iVar10 = (int)uVar11;
        pUVar4 = *(UObject **)(*(longlong *)&this->Elements + (longlong)iVar10 * 0x18);
        lVar5 = *(longlong *)&this->Elements + (longlong)iVar10 * 0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        uVar7 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar12 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar12 * 4);
        *(int *)((longlong)FVar8 + uVar12 * 4) = iVar10;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar11 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// TryReplaceExisting @ 14d096290

bool __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>
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
  TObjectPtr<UClass>_u_0 local_res8;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar10 = FindIndexByHash<TSubclassOf<ULiveLinkRole_const_>_>
                       (this,param_1,(TSubclassOf<ULiveLinkRole_const_> *)&local_res8.ObjectPtr);
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

// UnhashElements @ 14d096480

void __thiscall
TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d09657b;
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
LAB_14d09657b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d096670;
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
LAB_14d096670:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

