// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 9

// Emplace<FName_const_&,TSharedPtr<FGeneratedToolMenuWidgets,1>_const_&> @ 142c32be0

TSharedPtr<FGeneratedToolMenuWidgets,1> * __thiscall
TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
::Emplace<FName_const_&,TSharedPtr<FGeneratedToolMenuWidgets,1>_const_&>
          (TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
           *this,FName *param_1,TSharedPtr<FGeneratedToolMenuWidgets,1> *param_2)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(FGeneratedToolMenuWidgets **)((longlong)local_28.Pointer + 8) = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_28.Pointer + 0x10) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = uVar7 + (int)((ulonglong)uVar4 >> 0x20);
  bVar5 = TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (TSharedPtr<FGeneratedToolMenuWidgets,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar8 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 142c33720

TSharedPtr<FGeneratedToolMenuWidgets,1> * __thiscall
TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar5);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_> *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_> *)0x0;
  }
  else {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (TSharedPtr<FGeneratedToolMenuWidgets,1> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x20);
}

// FindOrAddImpl<FName_const_&> @ 142c33dd0

FToolMenuProfileMap * __thiscall
TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FToolMenuProfileMap *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FToolMenuProfileMap>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FToolMenuProfileMap *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 142c33e80

TSharedPtr<FGeneratedToolMenuWidgets,1> * __thiscall
TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TSharedPtr<FGeneratedToolMenuWidgets,1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSharedPtr<FGeneratedToolMenuWidgets,1> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<TWeakPtr<FMultiBox,1>_> @ 142c33f00

TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TWeakPtr<FMultiBox,1>_>
          (TMapBase<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TWeakPtr<FMultiBox,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  ForElementType<FSetElementId> FVar9;
  int local_res8 [2];
  TWeakPtr<FMultiBox,1> *local_res20;
  TWeakPtr<FMultiBox,1> local_58;
  TWeakPtr<FMultiBox_const_,1> local_48;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar9 = (this->Pairs).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar9 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar3 != -1) {
      pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
      local_58.Object = param_2->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      lVar8 = (longlong)iVar3 * 0x28;
      lVar5 = *(longlong *)&(this->Pairs).Elements;
      pTVar6 = *(TReferenceControllerBase<1> **)(lVar5 + 8 + lVar8);
      local_48.Object = *(FMultiBox **)(lVar5 + lVar8);
      local_58.WeakReferenceCount.ReferenceController = pTVar4;
      local_48.WeakReferenceCount.ReferenceController = pTVar6;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = TWeakPtr<FMultiBox_const_,1>::UEOpEquals<FMultiBox>(&local_48,&local_58);
      }
      else {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
        bVar7 = TWeakPtr<FMultiBox_const_,1>::UEOpEquals<FMultiBox>(&local_48,&local_58);
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (bVar7 != false) {
        if ((iVar3 != -1) && (lVar8 = *(longlong *)&(this->Pairs).Elements + lVar8, lVar8 != 0))
        goto LAB_142c3405d;
        break;
      }
      iVar3 = *(int *)(lVar8 + 0x20 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakPtr<FMultiBox,1>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TWeakPtr<FMultiBox,1>_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_142c3405d:
  return (TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10);
}

// Find @ 142c59890

TObjectPtr<UToolMenu> * __thiscall
TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
::Find(TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UToolMenu> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TObjectPtr<UToolMenu> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UToolMenu> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UToolMenu> *)0x0;
}

// Find @ 142c59930

FCustomizedToolMenuNameArray * __thiscall
TMapBase<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
::Find(TMapBase<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FCustomizedToolMenuNameArray *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCustomizedToolMenuNameArray *)0x0;
}

// Find @ 142c599d0

FToolMenuProfile * __thiscall
TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
::Find(TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FToolMenuProfile *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1b8 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FToolMenuProfile *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FToolMenuProfile *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x36].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FToolMenuProfile *)0x0;
}

// Find @ 142c59a70

FToolMenuProfileMap * __thiscall
TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
::Find(TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FName *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = pFVar4 + 1;
          }
          return (FToolMenuProfileMap *)pFVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FToolMenuProfileMap *)0x0;
}

