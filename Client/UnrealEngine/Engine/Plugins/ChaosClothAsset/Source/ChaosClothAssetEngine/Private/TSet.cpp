// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 23

// Emplace<unsigned_short> @ 14dc2c870

FSetElementId __thiscall
TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Emplace<unsigned_short>
          (TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *this,
          ushort *param_1,bool *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<unsigned_short> *)0x0) {
    *(undefined2 *)local_38.Pointer = *(undefined2 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar7 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar1 = *(ushort *)local_38.Pointer;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + ((ulonglong)(this->HashSize - 1) & (ulonglong)uVar1) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(ushort *)(lVar3 + (longlong)iVar6 * 0xc) == uVar1) {
          bVar7 = iVar6 != -1;
          if (bVar7) {
            *(ushort *)(lVar3 + (longlong)iVar6 * 0xc) = uVar1;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,(uint)uVar1,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14dc2ca00

FSetElementId __thiscall
TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  longlong *_Src;
  char *in_R9;
  void *_Dst;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
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
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  lVar2 = *_Src;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
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
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)_Src + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FName_const_&>_> @ 14dc2cc50

FSetElementId __thiscall
TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FName_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  longlong *_Src;
  char *in_R9;
  void *_Dst;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
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
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = 0;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  lVar2 = *_Src;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
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
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)_Src + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_&&>_> @ 14dc2cea0

FSetElementId __thiscall
TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_&&,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_&&>_>
          (TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar3;
    *plVar3 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar6 = uVar6 + (int)((ulonglong)lVar2 >> 0x20);
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar10 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            puVar4 = *(undefined8 **)(lVar2 + 8 + (longlong)iVar10 * 0x18);
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
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
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>_> @ 14dc2d0f0

FSetElementId __thiscall
TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>_>
          (TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*_&&>
                 *param_1,bool *param_2)

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
  undefined8 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  _Src = (FString *)0x0;
  iVar7 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar13 = *(undefined8 **)param_2;
    puVar3 = *(undefined8 **)(param_2 + 8);
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    ((local_48.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)*puVar13;
    *puVar13 = 0;
    (local_48.Pointer)->ArrayNum = *(int *)(puVar13 + 1);
    (local_48.Pointer)->ArrayMax = *(int *)((longlong)puVar13 + 0xc);
    puVar13[1] = 0;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar3;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
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
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FString>(this,uVar6,_Src);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      puVar13 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements);
      pvVar4 = (void *)*puVar13;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(puVar13,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
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
      _Src[1].Data.ArrayMax = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar11 + uVar8 * 4);
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

// Emplace<TPairInitializer<FString_&&,TArrayView<int_const_,int>_&&>_> @ 14dc2d320

FSetElementId __thiscall
TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,TArrayView<int_const_,int>_&&>_>
          (TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,TArrayView<int_const_,int>_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_> *pTVar14;
  int iVar15;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar15 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar15 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar15 = iVar15 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  pTVar14 = (TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_> *)0x0;
  iVar15 = 0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    pTVar14 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar14->field_0x8 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)pTVar14;
    iVar15 = *(int *)&pTVar14->field_0x8 + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar11);
  bVar6 = TryReplaceExisting(this,uVar8,pTVar14,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)&pTVar14->field_0x24 = uVar8;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar14->field_0x20 = *(undefined4 *)((longlong)FVar12 + uVar9 * 4);
      *(int *)((longlong)FVar12 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_&&,UChaosClothAssetSKMClothingInteractor_*_const_&>_> @ 14dc2d4e0

FSetElementId __thiscall
TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&&,UChaosClothAssetSKMClothingInteractor_*_const_&>_>
          (TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&&,UChaosClothAssetSKMClothingInteractor_*_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  FName FVar2;
  int iVar3;
  uint uVar4;
  FName *pFVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  FName *pFVar10;
  char *in_R9;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  FName local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar7 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  pFVar10 = (FName *)0x0;
  if (local_48.Pointer != (FName *)0x0) {
    pFVar10 = *(FName **)(param_2 + 8);
    iVar3 = *(int *)(*(undefined8 **)param_2 + 1);
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res8,iVar7,(wchar_t *)**(undefined8 **)param_2,FNAME_Add);
    *(FName *)local_48.Pointer = *pFVar5;
    FVar2 = *pFVar10;
    *(FName *)((longlong)local_48.Pointer + 8) = FVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    (((FName *)((longlong)local_48.Pointer + 0x10))->ComparisonIndex).Value = 0xffffffff;
    pFVar10 = local_48.Pointer;
  }
  FVar2 = *pFVar10;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar7 = *(int *)puVar12;
  bVar13 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  local_res8.ComparisonIndex.Value = uVar4 + FVar2.Number;
  iVar11 = local_48.Index;
  if ((iVar7 - iVar3 != 1) && (iVar7 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar8 +
                    (ulonglong)(this->HashSize - 1U & local_res8.ComparisonIndex.Value) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar7 * 0x18) == *pFVar10) {
          bVar13 = iVar7 != -1;
          if (bVar13) {
            memmove((void *)(lVar1 + (longlong)iVar7 * 0x18),pFVar10,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar11 = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar4 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar4) {
      uVar6 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & local_res8.ComparisonIndex.Value;
      pFVar10[2].Number = uVar4;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      pFVar10[2].ComparisonIndex.Value = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar11;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar11;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<int> @ 14dc2d870

int __thiscall
TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
::FindIndexByHash<int>
          (TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar2 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x110 + *(longlong *)&this->Elements) == *param_2) {
          return iVar1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x110 + 0x100 + *(longlong *)&this->Elements);
      } while (iVar1 != -1);
    }
  }
  return -1;
}

// Move<TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_> @ 14dc30590

void __cdecl
TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
::
Move<TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_>
          (TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
           *param_1,
          TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
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

// Array @ 14dc38e20

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Array
          (TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar12 = 1;
  iVar13 = iVar11;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dc38ef5;
      uVar5 = puVar14[lVar10 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14dc38ef5:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->Elements + (longlong)TStack_40.CurrentBitIndex * 0xc);
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar9;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(undefined2 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 2) =
           *(undefined2 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 14dc44a20

TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> * __thiscall
TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::Difference
          (TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *this,
          TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,
          TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *param_1)

{
  ushort uVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  int iVar12;
  undefined1 *puVar13;
  ForElementType<FSetElementId> FVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ushort *puVar17;
  uint uVar18;
  undefined1 *this_00;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  FSparseArrayAllocationInfo local_d8;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  uint local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined4 local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  
  uVar21 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar18 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar19 = 0;
  if (uVar18 == 0) goto LAB_14dc44c79;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar18);
  if (uVar18 < 4) {
    uVar18 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar18 <= __return_storage_ptr__->HashSize))
  goto LAB_14dc44c79;
  __return_storage_ptr__->HashSize = uVar18;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar18 != 0) {
    uVar6 = uVar18;
    if (uVar18 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar6 = 0;
        goto LAB_14dc44afb;
      }
    }
    else {
LAB_14dc44afb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar6,4);
    }
    if (0 < (int)uVar18) {
      uVar20 = (ulonglong)uVar18;
      uVar16 = uVar21;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        uVar10 = uVar16 & (longlong)(int)uVar18 - 1U;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)FVar14 + uVar10 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar18 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_d8.Pointer = &(__return_storage_ptr__->Elements).field_0x10;
    local_d8._4_4_ = 1;
    local_d8.Index = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uVar16 = uVar21;
    if (uVar18 != 0) {
      puVar22 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = local_d8.Pointer;
      }
      uVar6 = *puVar22;
      uVar20 = uVar21;
      while (uVar6 == 0) {
        uStack_c0 = (int)uVar20 + 0x20;
        uVar20 = (ulonglong)uStack_c0;
        iVar12 = (int)uVar16;
        local_d8.Index = iVar12 + 1;
        uVar16 = (ulonglong)(uint)local_d8.Index;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < local_d8.Index)
        goto LAB_14dc44be9;
        uVar6 = puVar22[(longlong)iVar12 + 1];
      }
      local_d8._4_4_ = -uVar6 & uVar6;
      uVar16 = (ulonglong)(uint)local_d8._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_c4 = (int)lVar5 + -1 + uStack_c0;
      uVar16 = (ulonglong)uStack_c4;
      if ((int)uVar18 < (int)uStack_c4) {
LAB_14dc44be9:
        uVar16 = (ulonglong)uVar18;
        uStack_c4 = uVar18;
      }
    }
    local_c8 = 0xffffffff;
    TStack_b0._padding_._0_4_ = local_d8.Index;
    TStack_b0._padding_._4_4_ = local_d8._4_4_;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0.CurrentBitIndex = uStack_c4;
    TStack_b0._28_4_ = uStack_bc;
    TStack_b0.BaseBitIndex = uStack_c0;
    local_b8 = __return_storage_ptr__;
    TStack_b0.Array = local_d8.Pointer;
    if ((int)uVar16 < (int)uVar18) {
      do {
        iVar12 = (int)uVar16;
        lVar5 = *(longlong *)&local_b8->Elements + (longlong)iVar12 * 0xc;
        uVar18 = __return_storage_ptr__->HashSize - 1U &
                 (uint)*(ushort *)(*(longlong *)&local_b8->Elements + (longlong)iVar12 * 0xc);
        *(uint *)(lVar5 + 8) = uVar18;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (ulonglong)uVar18;
        *(undefined4 *)(lVar5 + 4) = *(undefined4 *)((longlong)FVar14 + uVar16 * 4);
        *(int *)((longlong)FVar14 + uVar16 * 4) = iVar12;
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        uVar16 = (ulonglong)(uint)TStack_b0.CurrentBitIndex;
      } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
    }
  }
LAB_14dc44c79:
  uVar18 = *(uint *)&(this->Elements).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_68._padding_._4_4_ = 1;
  uVar16 = uVar21;
  TStack_68.BaseBitIndex = uVar19;
  if (uVar18 != 0) {
    puVar22 = *(uint **)&(this->Elements).field_0x20;
    uVar16 = (ulonglong)uVar18;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)TStack_b0.Array;
    }
    uVar6 = *puVar22;
    uVar20 = uVar21;
    TStack_68.BaseBitIndex = 0;
    uVar19 = 0;
    while (uVar6 == 0) {
      iVar12 = (int)uVar21;
      TStack_68.BaseBitIndex = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)(uint)TStack_68.BaseBitIndex;
      uVar19 = iVar12 + 1;
      uVar21 = (ulonglong)uVar19;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14dc44cfb;
      uVar6 = puVar22[(longlong)iVar12 + 1];
    }
    TStack_68._padding_._4_4_ = -uVar6 & uVar6;
    uVar21 = (ulonglong)TStack_68._padding_._4_4_ * 2 + 1;
    lVar5 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar6 = (TStack_68.BaseBitIndex - 1U) + (int)lVar5;
    if ((int)uVar18 < (int)uVar6) {
      uVar6 = uVar18;
    }
    uVar16 = (ulonglong)uVar6;
  }
LAB_14dc44cfb:
  TStack_68.CurrentBitIndex = (int)uVar16;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._28_4_ = uStack_74;
  TStack_b0.BaseBitIndex = TStack_68.BaseBitIndex;
  TStack_b0._28_4_ = uStack_74;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  local_b8 = this;
  local_70 = this;
  TStack_68.Array = TStack_b0.Array;
  TStack_68._padding_._0_4_ = uVar19;
  TStack_b0._padding_._0_4_ = uVar19;
  TStack_b0._padding_._4_4_ = TStack_68._padding_._4_4_;
  TStack_b0.CurrentBitIndex = TStack_68.CurrentBitIndex;
  if (TStack_68.CurrentBitIndex < (int)uVar18) {
    do {
      iVar12 = TStack_b0.CurrentBitIndex;
      lVar5 = *(longlong *)&local_b8->Elements;
      uVar1 = *(ushort *)(lVar5 + (longlong)(int)uVar16 * 0xc);
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar2 = (param_1->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar14 +
                        ((ulonglong)(param_1->HashSize - 1) & (ulonglong)uVar1) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ushort *)(*(longlong *)&param_1->Elements + (longlong)iVar7 * 0xc) == uVar1)
            goto LAB_14dc4523f;
            iVar7 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar7 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)__return_storage_ptr__,
                           (int *)&(__return_storage_ptr__->Elements).field_0x8,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar24 = (int)((iVar7 >> 0x1f & 0x1fU) + iVar7) >> 5;
        if ((iVar7 == 0) || (iVar24 != (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x2c;
          if (iVar9 < iVar7 + 1) {
            uVar19 = iVar9 + 0x1fU >> 5;
            uVar18 = iVar7 + 0x20U >> 5;
            if (uVar18 < 5) {
              iVar9 = 4;
            }
            else {
              uVar21 = (ulonglong)uVar18;
              if (uVar19 < 5) {
                uVar19 = 0;
              }
              if (uVar19 == 0) {
                uVar16 = 4;
                if (4 < uVar21) {
                  uVar16 = uVar21;
                }
              }
              else {
                uVar16 = ((ulonglong)uVar18 * 3 >> 3) + 0x10 + uVar21;
              }
              uVar11 = FMemory::QuantizeSize(uVar16 * 4,0);
              iVar9 = (int)(uVar11 >> 2);
              if (iVar9 < (int)uVar18) {
                iVar9 = 0x7fffffff;
              }
            }
            *(int *)&(__return_storage_ptr__->Elements).field_0x2c = iVar9 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       *(int *)&(__return_storage_ptr__->Elements).field_0x28);
          }
          puVar4 = &(__return_storage_ptr__->Elements).field_0x28;
          *(int *)puVar4 = *(int *)puVar4 + 1;
          iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
          uVar18 = iVar9 >> 0x1f & 0x1f;
          uVar19 = iVar9 + uVar18;
          iVar9 = (uVar19 & 0x1f) - uVar18;
          if (iVar9 != 0) {
            puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar13 = this_00;
            if (puVar4 != (undefined1 *)0x0) {
              puVar13 = puVar4;
            }
            *(uint *)(puVar13 + (longlong)((int)uVar19 >> 5) * 4) =
                 *(uint *)(puVar13 + (longlong)((int)uVar19 >> 5) * 4) &
                 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
          }
        }
        else {
          *(int *)&(__return_storage_ptr__->Elements).field_0x28 = iVar7 + 1;
        }
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this_00 = puVar4;
        }
        *(uint *)(this_00 + (longlong)iVar24 * 4) =
             *(uint *)(this_00 + (longlong)iVar24 * 4) & ~(1 << ((byte)iVar7 & 0x1f));
      }
      else {
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar7 = iVar7 + -1;
        lVar3 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar24 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0xc);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar24;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(lVar3 + (longlong)iVar24 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_d8,iVar8);
      puVar15 = (ushort *)0x0;
      puVar17 = puVar15;
      if (local_d8.Pointer != (ushort *)0x0) {
        *(ushort *)local_d8.Pointer = *(ushort *)(lVar5 + (longlong)iVar12 * 0xc);
        ((ushort *)((longlong)local_d8.Pointer + 4))[0] = 0xffff;
        ((ushort *)((longlong)local_d8.Pointer + 4))[1] = 0xffff;
        puVar17 = local_d8.Pointer;
      }
      iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
      iVar7 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar1 = *puVar17;
      if ((iVar12 - iVar7 != 1) && (iVar12 != iVar7)) {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        iVar12 = *(int *)((longlong)FVar14 +
                         ((ulonglong)(__return_storage_ptr__->HashSize - 1) & (ulonglong)uVar1) * 4)
        ;
        if (iVar12 != -1) {
          lVar5 = *(longlong *)&__return_storage_ptr__->Elements;
          do {
            if (*(ushort *)(lVar5 + (longlong)iVar12 * 0xc) == uVar1) {
              if (iVar12 != -1) {
                *(ushort *)(lVar5 + (longlong)iVar12 * 0xc) = uVar1;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)__return_storage_ptr__,local_d8.Index,1);
                goto LAB_14dc4523f;
              }
              break;
            }
            iVar12 = *(int *)(lVar5 + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      uVar18 = 1;
      uVar19 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
               *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (3 < uVar19) {
        uVar21 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar18 <= __return_storage_ptr__->HashSize)) {
        uVar19 = __return_storage_ptr__->HashSize - 1U & (uint)uVar1;
        *(uint *)(puVar17 + 4) = uVar19;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar2;
        }
        uVar21 = (longlong)__return_storage_ptr__->HashSize - 1U & (ulonglong)uVar19;
        *(undefined4 *)(puVar17 + 2) = *(undefined4 *)((longlong)FVar14 + uVar21 * 4);
        *(int *)((longlong)FVar14 + uVar21 * 4) = local_d8.Index;
      }
      else {
        __return_storage_ptr__->HashSize = uVar18;
        if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
        }
        if (uVar18 != 0) {
          uVar19 = uVar18;
          if (uVar18 < 2) {
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              uVar19 = 0;
              goto LAB_14dc4507b;
            }
          }
          else {
LAB_14dc4507b:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar19,4
                      );
          }
          if (0 < (int)uVar18) {
            uVar21 = (ulonglong)uVar18;
            puVar17 = puVar15;
            do {
              FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar2;
              }
              uVar16 = (ulonglong)puVar17 & (longlong)(int)uVar18 - 1U;
              puVar17 = (ushort *)((longlong)puVar17 + 1);
              *(undefined4 *)((longlong)FVar14 + uVar16 * 4) = 0xffffffff;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        if (__return_storage_ptr__->HashSize != 0) {
          uVar19 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
          puStack_88 = &(__return_storage_ptr__->Elements).field_0x10;
          uStack_8c = 1;
          local_90 = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          if (uVar19 != 0) {
            puVar22 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
            puVar23 = (uint *)puStack_88;
            if (puVar22 != (uint *)0x0) {
              puVar23 = puVar22;
            }
            uVar18 = *puVar23;
            puVar17 = puVar15;
            while (uVar18 == 0) {
              uStack_78 = (int)puVar17 + 0x20;
              puVar17 = (ushort *)(ulonglong)uStack_78;
              iVar12 = (int)puVar15;
              local_90 = iVar12 + 1;
              puVar15 = (ushort *)(ulonglong)local_90;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_90)
              goto LAB_14dc4517a;
              uVar18 = puVar23[(longlong)iVar12 + 1];
            }
            uStack_8c = -uVar18 & uVar18;
            uVar21 = (ulonglong)uStack_8c * 2 + 1;
            lVar5 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uStack_7c = (uStack_78 - 1) + (int)lVar5;
            puVar15 = (ushort *)(ulonglong)uStack_7c;
            if ((int)uVar19 < (int)uStack_7c) {
LAB_14dc4517a:
              puVar15 = (ushort *)(ulonglong)uVar19;
              uStack_7c = uVar19;
            }
          }
          local_80 = 0xffffffff;
          TStack_68._padding_._0_4_ = local_90;
          TStack_68._padding_._4_4_ = uStack_8c;
          TStack_68.UnvisitedBitMask = 0xffffffff;
          TStack_68.CurrentBitIndex = uStack_7c;
          TStack_68._28_4_ = uStack_74;
          TStack_68.BaseBitIndex = uStack_78;
          local_70 = __return_storage_ptr__;
          TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_88;
          if ((int)puVar15 < (int)uVar19) {
            do {
              iVar12 = (int)puVar15;
              lVar5 = *(longlong *)&local_70->Elements + (longlong)iVar12 * 0xc;
              uVar19 = __return_storage_ptr__->HashSize - 1U &
                       (uint)*(ushort *)(*(longlong *)&local_70->Elements + (longlong)iVar12 * 0xc);
              *(uint *)(lVar5 + 8) = uVar19;
              FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
              FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
              if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                FVar14 = FVar2;
              }
              uVar21 = (longlong)__return_storage_ptr__->HashSize - 1U & (ulonglong)uVar19;
              *(undefined4 *)(lVar5 + 4) = *(undefined4 *)((longlong)FVar14 + uVar21 * 4);
              *(int *)((longlong)FVar14 + uVar21 * 4) = iVar12;
              TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
              puVar15 = (ushort *)(ulonglong)(uint)TStack_68.CurrentBitIndex;
            } while (TStack_68.CurrentBitIndex < (TStack_68.Array)->NumBits);
          }
        }
      }
LAB_14dc4523f:
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      uVar16 = (ulonglong)(uint)TStack_b0.CurrentBitIndex;
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Find @ 14dc47e40

TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *this,FName param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1.Number + uVar2) * 4
                    );
    if (iVar3 != -1) {
      do {
        pTVar4 = (TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *)
                 ((longlong)iVar3 * 0x20 + *(longlong *)&this->Elements);
        FVar1.ComparisonIndex.Value = *(uint *)&pTVar4->field_0x0;
        FVar1.Number = *(uint *)&pTVar4->field_0x4;
        if (FVar1 == param_1) {
          return pTVar4;
        }
        iVar3 = *(int *)(pTVar4 + 1);
      } while (iVar3 != -1);
    }
  }
  return (TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// Rehash @ 14dc544e0

void __thiscall
TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc545b7;
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
LAB_14dc545b7:
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

// Rehash @ 14dc54690

void __thiscall
TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh,TDefaultDelete<UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc54767;
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
LAB_14dc54767:
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

// Rehash @ 14dc54840

void __thiscall
TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14dc54917;
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
LAB_14dc54917:
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

// RehashOrLink @ 14dc549f0

void __thiscall
TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator>::RehashOrLink
          (TSet<unsigned_short,DefaultKeyFuncs<unsigned_short,0>,FDefaultSetAllocator> *this,
          uint param_1,TSparseSetElement<unsigned_short> *param_2,int param_3)

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
  *(uint *)&param_2->field_0x8 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x4 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14dc54a80

void __thiscall
TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TTuple<int,FClothSimulData>_> *param_2,
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
  *(uint *)&param_2->field_0x104 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x100 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Reserve @ 14dc55850

void __thiscall
TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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

// Reserve @ 14dc558d0

void __thiscall
TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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

// Reserve @ 14dc55950

void __thiscall
TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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
    TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TryReplaceExisting @ 14dc5d730

bool __thiscall
TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<int,FClothSimulData>_> *param_2,int *param_3,
          bool *param_4)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar4 * 0x110 + lVar2) == *(int *)param_2) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar4 * 0x110 + lVar2);
            if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x20));
            }
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            memmove(_Dst,param_2,0x100);
            TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<272,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x110 + 0x100 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14dc5d850

bool __thiscall
TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
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
  undefined4 uVar9;
  undefined1 *puVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  iVar11 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar3 != 1) && (iVar11 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar11 * 0x60 + lVar4) == *(longlong *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar11 * 0x60 + lVar4);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
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
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x60 + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar3 * 0x60 + lVar4) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar3 * 0x60 + 4 + lVar4) = uVar9;
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
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x60 + 0x58 + lVar4);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14dc5dab0

bool __thiscall
TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  ForElementType<FSetElementId> FVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar10 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar10 != 1) && (iVar4 != iVar10)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar4 != -1) {
      iVar10 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar4 * 0x28);
      lVar3 = (longlong)iVar4 * 0x28;
      if (iVar10 == *(int *)&param_2->field_0x8) {
        if (1 < iVar10) {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(*(longlong *)&this->Elements + lVar3),
                              *(wchar_t **)param_2);
          bVar15 = iVar10 == 0;
          goto LAB_14dc5db49;
        }
LAB_14dc5db8a:
        bVar15 = true;
        lVar3 = *(longlong *)&this->Elements;
        pvVar5 = *(void **)(lVar3 + (longlong)iVar4 * 0x28);
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        memmove((void *)(lVar3 + (longlong)iVar4 * 0x28),param_2,0x20);
        iVar10 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar3 = *(longlong *)&this->Elements;
        bVar7 = (byte)iVar10 & 0x1f;
        uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
        if (((iVar10 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = puVar1;
        }
        if (((*(uint *)(puVar13 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar14) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar10;
        }
        puVar2 = (undefined4 *)(lVar3 + (longlong)iVar10 * 0x28);
        uVar11 = 0xffffffff;
        *puVar2 = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        puVar2[1] = uVar11;
        puVar13 = &(this->Elements).field_0x34;
        *(int *)puVar13 = *(int *)puVar13 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar10;
        if (((iVar10 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = puVar1;
        }
        *(uint *)(puVar13 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar13 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar14;
        *param_3 = iVar4;
        goto LAB_14dc5db64;
      }
      bVar15 = iVar10 + *(int *)&param_2->field_0x8 == 1;
LAB_14dc5db49:
      if (bVar15) goto LAB_14dc5db8a;
      iVar4 = *(int *)(lVar3 + 0x20 + *(longlong *)&this->Elements);
    }
    bVar15 = false;
  }
LAB_14dc5db64:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

