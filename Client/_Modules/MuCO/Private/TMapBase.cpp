// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 39

// Emplace<FRigidBodyIndexPair_const_&,bool_const_&> @ 14abb0420

bool * __thiscall
TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
::Emplace<FRigidBodyIndexPair_const_&,bool_const_&>
          (TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
           *this,FRigidBodyIndexPair *param_1,bool *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&(this->Pairs).Elements;
    iVar5 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar5;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar5 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar2);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1->Indices;
    *(bool *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  iVar5 = (int)*(undefined8 *)local_28.Pointer;
  uVar7 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 + iVar5;
  if ((iVar6 - iVar2 != 1) && (iVar6 != iVar2)) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = (longlong)iVar6;
        if ((*(int *)(lVar1 + lVar3 * 0x14) == iVar5) &&
           (*(int *)(lVar1 + 4 + lVar3 * 0x14) == *(int *)((longlong)local_28.Pointer + 4))) {
          if (iVar6 != -1) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x14),local_28.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14abb05a7;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc + lVar3 * 0x14);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14abb05a7:
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar6 * 0x14 + 8);
}

// Emplace<FRigidBodyIndexPair,bool_const_&> @ 14abb05e0

bool * __thiscall
TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
::Emplace<FRigidBodyIndexPair,bool_const_&>
          (TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
           *this,FRigidBodyIndexPair *param_1,bool *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&(this->Pairs).Elements;
    iVar5 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar5;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar5 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar2);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1->Indices;
    *(bool *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  iVar5 = (int)*(undefined8 *)local_28.Pointer;
  uVar7 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 + iVar5;
  if ((iVar6 - iVar2 != 1) && (iVar6 != iVar2)) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = (longlong)iVar6;
        if ((*(int *)(lVar1 + lVar3 * 0x14) == iVar5) &&
           (*(int *)(lVar1 + 4 + lVar3 * 0x14) == *(int *)((longlong)local_28.Pointer + 4))) {
          if (iVar6 != -1) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x14),local_28.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14abb0767;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc + lVar3 * 0x14);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14abb0767:
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar6 * 0x14 + 8);
}

// Emplace<FRigidBodyIndexPair,bool> @ 14abb07a0

bool * __thiscall
TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
::Emplace<FRigidBodyIndexPair,bool>
          (TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
           *this,FRigidBodyIndexPair *param_1,bool *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&(this->Pairs).Elements;
    iVar5 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar5;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar5 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar2);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1->Indices;
    *(bool *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  iVar5 = (int)*(undefined8 *)local_28.Pointer;
  uVar7 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 + iVar5;
  if ((iVar6 - iVar2 != 1) && (iVar6 != iVar2)) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = (longlong)iVar6;
        if ((*(int *)(lVar1 + lVar3 * 0x14) == iVar5) &&
           (*(int *)(lVar1 + 4 + lVar3 * 0x14) == *(int *)((longlong)local_28.Pointer + 4))) {
          if (iVar6 != -1) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x14),local_28.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14abb0927;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc + lVar3 * 0x14);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14abb0927:
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar6 * 0x14 + 8);
}

// FindByHash<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>_> @ 14abb4a40

/* WARNING: Type propagation algorithm not settling */

uint * __thiscall
TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
::
FindByHash<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>_>
          (TMapBase<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FKeyContainer,unsigned_int,0>_>
           *this,uint param_1,
          TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  FHandle *pFVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&(this->Pairs).Elements)) {
      iVar2 = param_2->ArrayNum;
      pFVar3 = (FHandle *)(param_2->AllocatorInstance).Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = iVar2;
      if (iVar2 == 0) {
        local_1c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,&local_28,iVar2,&local_1c);
        ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                  (local_28.Data,pFVar3,iVar2);
      }
      puVar4 = *(undefined8 **)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      iVar2 = *(int *)(puVar4 + 1);
      if ((iVar2 == local_20) &&
         (bVar5 = CompareItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                            ((FHandle *)*puVar4,(FHandle *)local_28.Data,iVar2), bVar5)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
                ((FHandle *)local_28.Data,local_20);
      if ((FHandle *)local_28.Data != (FHandle *)0x0) {
        FMemory::Free(local_28.Data);
      }
      if (bVar5) {
        if (iVar1 == -1) {
          return (uint *)0x0;
        }
        lVar6 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
        if (lVar6 != 0) {
          return (uint *)(lVar6 + 0x10);
        }
        return (uint *)0x0;
      }
    }
  }
  return (uint *)0x0;
}

// FindOrAddImpl<int_const_&> @ 14abb5860

FPerClothAssetData * __thiscall
TMapBase<int,`BuildOrCopyClothingData'::__l2::FPerClothAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,`BuildOrCopyClothingData'::__l2::FPerClothAssetData,0>_>
::FindOrAddImpl<int_const_&>(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x1c0 + *(longlong *)this);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FPerClothAssetData *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x6e];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,`BuildOrCopyClothingData'::__l2::FPerClothAssetData>,TDefaultMapHashableKeyFuncs<int,`BuildOrCopyClothingData'::__l2::FPerClothAssetData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FPerClothAssetData *)(*(longlong *)this + (longlong)local_res8[0] * 0x1c0 + 8);
}

// FindOrAddImpl<int_const_&> @ 14abb5910

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<TSubclassOf<UAnimInstance>_const_&> @ 14abb59c0

FAnimBpGeneratedPhysicsAssets * __thiscall
TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
::FindOrAddImpl<TSubclassOf<UAnimInstance>_const_&>
          (TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
           *this,uint param_1,TSubclassOf<UAnimInstance> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TSubclassOf<UAnimInstance> *local_res20;
  
  iVar1 = TSet<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UAnimInstance>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FAnimBpGeneratedPhysicsAssets *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSubclassOf<UAnimInstance>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSubclassOf<UAnimInstance>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAnimBpGeneratedPhysicsAssets *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&,unsigned_char> @ 14abb5a50

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::FindOrAddImpl<FName_const_&,unsigned_char>
          (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           *this,uint param_1,FName *param_2,uchar *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FName *local_18;
  uchar *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_14abb5ae7;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,unsigned_char_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,unsigned_char_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14abb5ae7:
  return (uchar *)(lVar3 + 8);
}

// FindOrAddImpl<TObjectPtr<UCustomizableObjectInstance>_> @ 14abb5b00

FLODTracker * __thiscall
TMapBase<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,0>_>
::FindOrAddImpl<TObjectPtr<UCustomizableObjectInstance>_>
          (void *this,uint param_1,TObjectPtr<UCustomizableObjectInstance> *param_2)

{
  int iVar1;
  UCustomizableObjectInstance *pUVar2;
  UCustomizableObjectInstance *pUVar3;
  longlong lVar4;
  int local_res8 [2];
  TObjectPtr<UCustomizableObjectInstance> *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UCustomizableObjectInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0xb8;
      pUVar3 = *(UCustomizableObjectInstance **)(lVar4 + *(longlong *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UCustomizableObjectInstance *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (*(longlong *)this + lVar4 != 0)) {
          return (FLODTracker *)(*(longlong *)this + lVar4 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar4 + 0xb0 + *(longlong *)this);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker>,TDefaultMapHashableKeyFuncs<TObjectPtr<UCustomizableObjectInstance>,`UCustomizableInstanceLODManagement::UpdateInstanceDistsAndLODs'::__l84::FLODTracker,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UCustomizableObjectInstance>_&&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UCustomizableObjectInstance>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FLODTracker *)(*(longlong *)this + (longlong)local_res8[0] * 0xb8 + 8);
}

// Find @ 14abd73b0

uint * __thiscall
TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>::
Find(TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
     *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          puVar3 = (uint *)0x0;
          if (piVar2 != (int *)0x0) {
            puVar3 = (uint *)(piVar2 + 1);
          }
          return puVar3;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  return (uint *)0x0;
}

// Find @ 14abd7410

FMutableMeshMetadata * __thiscall
TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
::Find(TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
       *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FMutableMeshMetadata *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FMutableMeshMetadata *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FMutableMeshMetadata *)(lVar1 + 4);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FMutableMeshMetadata *)0x0;
}

// Find @ 14abd7480

FMutableSurfaceMetadata * __thiscall
TMapBase<unsigned_int,FMutableSurfaceMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableSurfaceMetadata,0>_>
::Find(TMapBase<unsigned_int,FMutableSurfaceMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableSurfaceMetadata,0>_>
       *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FMutableSurfaceMetadata *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FMutableSurfaceMetadata *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FMutableSurfaceMetadata *)(lVar1 + 4);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FMutableSurfaceMetadata *)0x0;
}

// Find @ 14abd74f0

FMutableUpdateCandidate * __thiscall
TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
::Find(TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
       *this,UCustomizableObjectInstance *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FMutableUpdateCandidate *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x118 + *(longlong *)&(this->Pairs).Elements);
        if ((UCustomizableObjectInstance *)*plVar2 == param_1) {
          pFVar4 = (FMutableUpdateCandidate *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FMutableUpdateCandidate *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0x22];
      } while (iVar1 != -1);
    }
  }
  return (FMutableUpdateCandidate *)0x0;
}

// Find @ 14abd75a0

TTuple<FName,unsigned_short> * __thiscall
TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
::Find(TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
       *this,FBoneName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  TTuple<FName,unsigned_short> *pTVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Id) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1->Id) {
          pTVar5 = (TTuple<FName,unsigned_short> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TTuple<FName,unsigned_short> *)(lVar1 + 4);
          }
          return pTVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TTuple<FName,unsigned_short> *)0x0;
}

// Find @ 14abd7610

FAnimBpGeneratedPhysicsAssets * __thiscall
TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
::Find(TMapBase<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>_>
       *this,TSubclassOf<UAnimInstance_const_> param_1)

{
  TObjectPtr<UClass>_u_0 TVar1;
  int iVar2;
  FAnimBpGeneratedPhysicsAssets *pFVar3;
  uint uVar4;
  longlong lVar5;
  TObjectPtr<UClass>_u_0 local_res8;
  
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  local_res8 = TVar1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar1.DebugPtr != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
  }
  uVar4 = ((uint)((ulonglong)TVar1.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar1.DebugPtr >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = TSet<TTuple<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets>,TDefaultMapHashableKeyFuncs<TSubclassOf<UAnimInstance>,FAnimBpGeneratedPhysicsAssets,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSubclassOf<UAnimInstance_const_>_>
                    (&this->Pairs,uVar4 >> 0x10 ^ uVar4,
                     (TSubclassOf<UAnimInstance_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar3 = (FAnimBpGeneratedPhysicsAssets *)0x0;
    if (lVar5 != 0) {
      pFVar3 = (FAnimBpGeneratedPhysicsAssets *)(lVar5 + 8);
    }
    return pFVar3;
  }
  return (FAnimBpGeneratedPhysicsAssets *)0x0;
}

// Find @ 14abd76c0

TObjectPtr<UMaterialInterface> * __thiscall
TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
::Find(TMapBase<FName,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMaterialInterface>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UMaterialInterface> *pTVar5;
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
          pTVar5 = (TObjectPtr<UMaterialInterface> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UMaterialInterface> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UMaterialInterface> *)0x0;
}

// Find @ 14abd7760

TObjectPtr<UTexture> * __thiscall
TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
::Find(TMapBase<FName,TObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UTexture>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UTexture> *pTVar5;
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
          pTVar5 = (TObjectPtr<UTexture> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TObjectPtr<UTexture> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TObjectPtr<UTexture> *)0x0;
}

// Find @ 14abd7800

TSoftClassPtr<UAnimInstance> * __thiscall
TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
::Find(TMapBase<FName,TSoftClassPtr<UAnimInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftClassPtr<UAnimInstance>,0>_>
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FName *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = pFVar4 + 1;
          }
          return (TSoftClassPtr<UAnimInstance> *)pFVar2;
        }
        uVar1 = pFVar4[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSoftClassPtr<UAnimInstance> *)0x0;
}

// Find @ 14abd78a0

FBoneName * __thiscall
TMapBase<FString,UE::Mutable::Private::FBoneName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>_>
::Find(TMapBase<FString,UE::Mutable::Private::FBoneName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FBoneName *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FBoneName *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FBoneName *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FBoneName *)0x0;
}

// Find @ 14abd7930

FIntegerParameterUIData * __thiscall
TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
::Find(TMapBase<FString,FIntegerParameterUIData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIntegerParameterUIData,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = (param_1->Data).ArrayNum;
      lVar6 = (longlong)iVar4 * 0x130;
      iVar4 = *(int *)(lVar2 + 8 + lVar6);
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_14abd79ff;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar6),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar1 == 1;
      }
      if (bVar8) {
LAB_14abd79ff:
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FIntegerParameterUIData *)(lVar6 + 0x10);
        }
        return (FIntegerParameterUIData *)0x0;
      }
      iVar4 = *(int *)(lVar6 + 0x128 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FIntegerParameterUIData *)0x0;
}

// Find @ 14abd7a20

FMutableParameterData * __thiscall
TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
::Find(TMapBase<FString,FMutableParameterData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterData,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = (param_1->Data).ArrayNum;
      lVar6 = (longlong)iVar4 * 400;
      iVar4 = *(int *)(lVar2 + 8 + lVar6);
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_14abd7aef;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar6),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar1 == 1;
      }
      if (bVar8) {
LAB_14abd7aef:
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FMutableParameterData *)(lVar6 + 0x10);
        }
        return (FMutableParameterData *)0x0;
      }
      iVar4 = *(int *)(lVar6 + 0x188 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FMutableParameterData *)0x0;
}

// Find @ 14abd7b10

FMutableParameterIndex * __thiscall
TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
::Find(TMapBase<FString,FMutableParameterIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FMutableParameterIndex *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FMutableParameterIndex>,TDefaultMapHashableKeyFuncs<FString,FMutableParameterIndex,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FMutableParameterIndex *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FMutableParameterIndex *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FMutableParameterIndex *)0x0;
}

// Find @ 14abd7ba0

FMutableStateData * __thiscall
TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
::Find(TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
       *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = (param_1->Data).ArrayNum;
      lVar6 = (longlong)iVar4 * 0x160;
      iVar4 = *(int *)(lVar2 + 8 + lVar6);
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_14abd7c6f;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar6),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar1 == 1;
      }
      if (bVar8) {
LAB_14abd7c6f:
        lVar6 = *(longlong *)&(this->Pairs).Elements + lVar6;
        if (lVar6 != 0) {
          return (FMutableStateData *)(lVar6 + 0x10);
        }
        return (FMutableStateData *)0x0;
      }
      iVar4 = *(int *)(lVar6 + 0x158 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FMutableStateData *)0x0;
}

// FindChecked @ 14abd7f10

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14abd7fb0

FMutableMeshMetadata * __thiscall
TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
::FindChecked(TMapBase<unsigned_int,FMutableMeshMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableMeshMetadata,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMutableMeshMetadata *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FMutableMeshMetadata *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (FMutableMeshMetadata *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FMutableMeshMetadata *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14abd8050

TTuple<FName,unsigned_short> * __thiscall
TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
              *this,FBoneName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FName,unsigned_short> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Id) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1->Id) {
          if (lVar1 != 0) {
            return (TTuple<FName,unsigned_short> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TTuple<FName,unsigned_short> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TTuple<FName,unsigned_short> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14abd80f0

TTuple<FName,unsigned_short> * __thiscall
TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FBoneName,TTuple<FName,unsigned_short>,0>_>
              *this,FBoneName *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FName,unsigned_short> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1->Id) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1->Id) {
          if (lVar1 != 0) {
            return (TTuple<FName,unsigned_short> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (TTuple<FName,unsigned_short> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TTuple<FName,unsigned_short> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14abd8190

FTexturePlatformData ** __thiscall
TMapBase<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>_>
::FindChecked(TMapBase<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>_>
              *this,FHandle *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTexturePlatformData **ppFVar6;
  
  uVar4 = ::GetTypeHash(param_1);
  iVar5 = TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle>
                    (&this->Pairs,uVar4,param_1);
  if ((iVar5 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar5 * 0x28, lVar1 != 0)) {
    return (FTexturePlatformData **)(lVar1 + 0x18);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (FTexturePlatformData **)&DAT_00000018;
  }
  pcVar2 = (code *)swi(3);
  ppFVar6 = (FTexturePlatformData **)(*pcVar2)();
  return ppFVar6;
}

// FindChecked @ 14abd8220

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::FindChecked(TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,unsigned_char> *pTVar3;
  uchar *puVar4;
  
  pTVar3 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FName,unsigned_char> *)0x0) {
    return &pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar1)();
    return puVar4;
  }
  return &DAT_00000008;
}

// FindChecked @ 14abd8280

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::FindChecked(TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,unsigned_char> *pTVar3;
  uchar *puVar4;
  
  pTVar3 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FName,unsigned_char> *)0x0) {
    return &pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar1)();
    return puVar4;
  }
  return &DAT_00000008;
}

// FindChecked @ 14abd82e0

TObjectPtr<USkeletalMesh> * __thiscall
TMapBase<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
::FindChecked(TMapBase<FName,TObjectPtr<USkeletalMesh>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TObjectPtr<USkeletalMesh>_> *pTVar3;
  TObjectPtr<USkeletalMesh> *pTVar4;
  
  pTVar3 = TSet<TTuple<FName,TObjectPtr<USkeletalMesh>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<USkeletalMesh>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FName,TObjectPtr<USkeletalMesh>_> *)0x0) {
    return (TObjectPtr<USkeletalMesh> *)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TObjectPtr<USkeletalMesh> *)(*pcVar1)();
    return pTVar4;
  }
  return (TObjectPtr<USkeletalMesh> *)&DAT_00000008;
}

// OrderIndependentCompareEqual @ 14abeb4b0

bool __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::OrderIndependentCompareEqual
          (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           *this,TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FName,unsigned_char> *pTVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  char *pcVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    pcVar12 = (char *)0x0;
    uVar2 = *(uint *)&(this->Pairs).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_48 = 0;
    uStack_44 = 1;
    pcVar7 = pcVar12;
    local_30 = uStack_48;
    if (uVar2 != 0) {
      puVar11 = *(uint **)&(this->Pairs).Elements.field_0x20;
      pcVar7 = (char *)(ulonglong)uVar2;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_70.Array;
      }
      uVar5 = *puVar11;
      pcVar8 = pcVar12;
      pcVar10 = pcVar12;
      local_30 = 0;
      uStack_48 = 0;
      while (uVar5 == 0) {
        iVar9 = (int)pcVar8;
        local_30 = (int)pcVar10 + 0x20;
        pcVar10 = (char *)(ulonglong)local_30;
        uStack_48 = iVar9 + 1;
        pcVar8 = (char *)(ulonglong)uStack_48;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
        goto LAB_14abeb56a;
        uVar5 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_44 = -uVar5 & uVar5;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar5 = (local_30 - 1) + (int)lVar3;
      if ((int)uVar2 < (int)uVar5) {
        uVar5 = uVar2;
      }
      pcVar7 = (char *)(ulonglong)uVar5;
    }
LAB_14abeb56a:
    uStack_38 = 0xffffffff;
    uStack_34 = (uint)pcVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = this;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = uStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = uStack_34;
    if ((int)uStack_34 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        pTVar6 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                 ::Find(&param_1->Pairs,
                        *(FName *)(*(longlong *)&(this->Pairs).Elements +
                                  (longlong)(int)pcVar7 * 0x14));
        pcVar8 = &pTVar6->field_0x8;
        if (pTVar6 == (TTuple<FName,unsigned_char> *)0x0) {
          pcVar8 = pcVar12;
        }
        if ((pcVar8 == (char *)0x0) ||
           (*pcVar8 !=
            *(char *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)pcVar7 * 0x14)))
        goto LAB_14abeb636;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        pcVar7 = (char *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_14abeb636:
    bVar4 = false;
  }
  return bVar4;
}

// Remove @ 14abee8a0

int __thiscall
TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
::Remove(TMapBase<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>_>
         *this,UCustomizableObjectInstance *param_1)

{
  int iVar1;
  uint uVar2;
  UCustomizableObjectInstance *local_res8 [4];
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    local_res8[0] = param_1;
    iVar1 = TSet<TTuple<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate>,TDefaultMapHashableKeyFuncs<UCustomizableObjectInstance_const_*,FMutableUpdateCandidate,0>,FDefaultSetAllocator>
            ::RemoveImpl<UCustomizableObjectInstance_const_*>
                      (&this->Pairs,uVar2 >> 0x10 ^ uVar2,local_res8);
    return iVar1;
  }
  return 0;
}

// FindOrAddImpl<unsigned_int> @ 14ac06e90

FMorphTargetMeshData * __thiscall
TMapBase<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
::FindOrAddImpl<unsigned_int>
          (TMapBase<unsigned_int,FMorphTargetMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FMorphTargetMeshData *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FMorphTargetMeshData>,TDefaultMapHashableKeyFuncs<unsigned_int,FMorphTargetMeshData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<unsigned_int_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMorphTargetMeshData *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindChecked @ 14ac1ac30

FClothingStreamable * __thiscall
TMapBase<unsigned_int,FClothingStreamable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingStreamable,0>_>
::FindChecked(TMapBase<unsigned_int,FClothingStreamable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FClothingStreamable,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FClothingStreamable *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FClothingStreamable *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xc];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FClothingStreamable *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FClothingStreamable *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ac1acd0

FMutableStreamableBlock * __thiscall
TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
::FindChecked(TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMutableStreamableBlock *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FMutableStreamableBlock *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FMutableStreamableBlock *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FMutableStreamableBlock *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ac1ad70

FRealTimeMorphStreamable * __thiscall
TMapBase<unsigned_int,FRealTimeMorphStreamable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRealTimeMorphStreamable,0>_>
::FindChecked(TMapBase<unsigned_int,FRealTimeMorphStreamable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRealTimeMorphStreamable,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRealTimeMorphStreamable *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FRealTimeMorphStreamable *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[0xc];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FRealTimeMorphStreamable *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FRealTimeMorphStreamable *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<unsigned_int_const_&> @ 14ac4fa90

TSharedPtr<IAsyncReadFileHandle,1> * __thiscall
TMapBase<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (TSharedPtr<IAsyncReadFileHandle,1> *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<IAsyncReadFileHandle,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TSharedPtr<IAsyncReadFileHandle,1> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14ac5c280

FMutableStreamableBlock * __thiscall
TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
::Find(TMapBase<unsigned_int,FMutableStreamableBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FMutableStreamableBlock,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  FMutableStreamableBlock *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pFVar3 = (FMutableStreamableBlock *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar3 = (FMutableStreamableBlock *)(puVar2 + 2);
          }
          return pFVar3;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FMutableStreamableBlock *)0x0;
}

