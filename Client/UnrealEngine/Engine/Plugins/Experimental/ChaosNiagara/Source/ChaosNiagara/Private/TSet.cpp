// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 16

// Emplace<TKeyInitializer<unsigned___int64_const_&>_> @ 14e975010

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
          (TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<unsigned___int64_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  char *in_R9;
  uint uVar6;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
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
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer != (TSparseSetElement<TTuple<unsigned___int64,FNDIFieldRenderData>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_38.Pointer;
  bVar7 = false;
  iVar5 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar5 - iVar3 != 1) && (iVar5 != iVar3)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements) == lVar2) {
          bVar7 = iVar5 != -1;
          if (bVar7) {
            memmove((void *)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements),local_38.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar5 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<unsigned___int64_const_&>_> @ 14e9751e0

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
          (TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<unsigned___int64_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  char *in_R9;
  uint uVar7;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0xd0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xd0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,FNDIGeometryCollectionData>_> *)0x0) {
    TKeyInitializer<unsigned___int64_const_&>::
    operator<unsigned___int64,FNDIGeometryCollectionData>_TTuple<unsigned___int64,FNDIGeometryCollectionData>
              ((TKeyInitializer<unsigned___int64_const_&> *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc0) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_38.Pointer;
  bVar8 = false;
  iVar6 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar7 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar6 * 0xd0 + lVar3) == lVar2) {
          bVar8 = iVar6 != -1;
          if (bVar8) {
            memmove((void *)((longlong)iVar6 * 0xd0 + lVar3),local_38.Pointer,0xc0);
            TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0xd0 + 0xc0 + lVar3);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar7,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&>_> @ 14e9753a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&>_>
          (TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FNiagaraDIChaosDestruction_GPUData *pFVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  char *in_R9;
  int iVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar9 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x270,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x270 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x270 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (longlong *)0x0) {
    pFVar3 = *(FNiagaraDIChaosDestruction_GPUData **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    FNiagaraDIChaosDestruction_GPUData::FNiagaraDIChaosDestruction_GPUData
              ((FNiagaraDIChaosDestruction_GPUData *)((longlong)local_48.Pointer + 8),pFVar3);
    *(undefined4 *)((longlong)local_48.Pointer + 0x268) = 0xffffffff;
  }
  lVar2 = *(longlong *)local_48.Pointer;
  bVar12 = false;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if ((iVar9 - iVar5 != 1) && (iVar9 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x270 + lVar4) == lVar2) {
          bVar12 = iVar9 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar9 * 0x270 + lVar4);
            FNiagaraDIChaosDestruction_GPUData::~FNiagaraDIChaosDestruction_GPUData
                      ((FNiagaraDIChaosDestruction_GPUData *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x268);
            TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x270 + 0x268 + lVar4);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_48.Pointer + 0x26c) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_48.Pointer + 0x268) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_> @ 14e9755f0

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
          (TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned___int64_const_&> *param_2,bool *param_3)

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
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned___int64,FNDIFieldRenderData>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
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
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements) ==
            *(longlong *)local_28.Pointer) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            memmove((void *)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements),local_28.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->Elements);
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

// EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_> @ 14e9757b0

FSetElementId __thiscall
TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
          (TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned___int64_const_&> *param_2,bool *param_3)

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
                      (0xd0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xd0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xd0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<unsigned___int64,FNDIGeometryCollectionData>_> *)0x0) {
    TKeyInitializer<unsigned___int64_const_&>::
    operator<unsigned___int64,FNDIGeometryCollectionData>_TTuple<unsigned___int64,FNDIGeometryCollectionData>
              ((TKeyInitializer<unsigned___int64_const_&> *)param_3,local_28.Pointer);
    *(undefined4 *)((longlong)local_28.Pointer + 0xc0) = 0xffffffff;
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
        if (*(longlong *)((longlong)iVar5 * 0xd0 + lVar2) == *(longlong *)local_28.Pointer) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            memmove((void *)((longlong)iVar5 * 0xd0 + lVar2),local_28.Pointer,0xc0);
            TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0xd0 + 0xc0 + lVar2);
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

// RemoveImpl<unsigned___int64> @ 14e981350

int __thiscall
TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned___int64>
          (TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
           *this,uint param_1,ulong64 *param_2)

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
  while (lVar8 = (longlong)(int)uVar6 * 0x270,
        *(ulong64 *)(lVar8 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar8 + 0x268 + *(longlong *)&this->Elements);
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e981434;
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
LAB_14e981434:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x26c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x268);
      TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<624,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x268 + (longlong)(int)uVar1 * 0x270);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// operator= @ 14e9846d0

TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
::operator=(TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
            *this,TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
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
  TSparseArray<TSparseSetElement<TObjectPtr<AChaosSolverActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
          pTVar7 = (TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
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

// operator= @ 14e984870

TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
::operator=(TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
            *this,TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
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
  TSparseArray<TSparseSetElement<TObjectPtr<UPhysicalMaterial>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
          pTVar7 = (TSet<TObjectPtr<UPhysicalMaterial>,DefaultKeyFuncs<TObjectPtr<UPhysicalMaterial>,0>,FDefaultSetAllocator>
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

// Array @ 14e989200

TArray<TObjectPtr<AChaosSolverActor>,TSizedDefaultAllocator<32>_> * __thiscall
TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
::Array(TSet<TObjectPtr<AChaosSolverActor>,DefaultKeyFuncs<TObjectPtr<AChaosSolverActor>,0>,FDefaultSetAllocator>
        *this,TArray<TObjectPtr<AChaosSolverActor>,TSizedDefaultAllocator<32>_>
              *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  TArray<TObjectPtr<AChaosSolverActor>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar13 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar13 = 1;
  iVar14 = iVar11;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar15;
    iVar14 = 0;
    iVar11 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e9892d5;
      uVar4 = puVar15[lVar10 + 1];
    }
    uVar13 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar14;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e9892d5:
  TStack_40._padding_ = CONCAT44(uVar13,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
      if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar9 = (TArray<TObjectPtr<AChaosSolverActor>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar9;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar12;
      *(UObject **)(pFVar5 + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14e9a4c60

void __thiscall
TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e9a4d3c;
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
LAB_14e9a4d3c:
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
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
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

// Rehash @ 14e9a4e00

void __thiscall
TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e9a4edc;
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
LAB_14e9a4edc:
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
                 ((longlong)local_30.CurrentBitIndex * 0xd0 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc4) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e9a4fb0

void __thiscall
TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e9a508c;
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
LAB_14e9a508c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x270 + *(longlong *)&this->Elements);
        uVar7 = (int)((ulonglong)*puVar8 >> 0x20) * 0x17 + (int)*puVar8 & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x26c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 0x4d) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e9a5160

void __thiscall
TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<unsigned___int64,FNDIFieldRenderData>_> *param_2,int param_3)

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

// RehashOrLink @ 14e9a51f0

void __thiscall
TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<unsigned___int64,FNDIGeometryCollectionData>_> *param_2,
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
  *(uint *)&param_2->field_0xc4 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0xc0 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Remove @ 14e9a5570

int __thiscall
TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
::Remove(TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
         *this,ulong64 param_1)

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
  uVar6 = *(uint *)((longlong)FVar5 +
                   ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                   (longlong)this->HashSize - 1U) * 4);
  if (uVar6 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0x20;
      if (*(ulong64 *)(lVar7 + *(longlong *)&this->Elements) == param_1) {
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
          puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar6 & 0x1f) & 1) != 0) goto LAB_14e9a5658;
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
LAB_14e9a5658:
        FVar5 = (this->Hash).SecondaryData;
        lVar7 = *(longlong *)&this->Elements + lVar7;
        if (FVar5 == (ForElementType<FSetElementId>)0x0) {
          FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        while( true ) {
          uVar1 = *puVar9;
          if ((uVar1 == 0xffffffff) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar3)) break;
          if (uVar1 == uVar6) {
            *puVar9 = *(uint *)(lVar7 + 0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar6,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = *(uint *)(lVar7 + *(longlong *)&this->Elements + 0x18);
    } while (uVar6 != 0xffffffff);
  }
  return 0;
}

// Remove @ 14e9a5700

int __thiscall
TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
::Remove(TSet<TTuple<unsigned___int64,FNDIGeometryCollectionData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIGeometryCollectionData,0>,FDefaultSetAllocator>
         *this,ulong64 param_1)

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
  uVar6 = *(uint *)((longlong)FVar5 +
                   ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                   (longlong)this->HashSize - 1U) * 4);
  if (uVar6 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0xd0;
      if (*(ulong64 *)(lVar7 + *(longlong *)&this->Elements) == param_1) {
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
          puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar6 & 0x1f) & 1) != 0) goto LAB_14e9a57eb;
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
LAB_14e9a57eb:
        FVar5 = (this->Hash).SecondaryData;
        lVar7 = *(longlong *)&this->Elements + lVar7;
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
            TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar6,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 0xc0 + (longlong)(int)uVar1 * 0xd0);
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar6 = *(uint *)(lVar7 + 0xc0 + *(longlong *)&this->Elements);
    } while (uVar6 != 0xffffffff);
  }
  return 0;
}

