// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 72

// Emplace<TObjectKey<UMassProcessor_const_>_const_&> @ 1471c2e90

FSetElementId __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::Emplace<TObjectKey<UMassProcessor_const_>_const_&>
          (TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
           *this,TObjectKey<UMassProcessor_const_> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  char *in_R9;
  uint uVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TObjectKey<UMassProcessor_const_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(uint *)((longlong)local_38.Pointer + 4);
  uVar8 = *(int *)local_38.Pointer - uVar2 ^ uVar2 >> 0xd;
  bVar11 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar10 = (uVar2 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar9;
        if ((*(int *)(lVar3 + lVar5 * 0x10) == *(int *)local_38.Pointer) &&
           (*(uint *)(lVar3 + 4 + lVar5 * 0x10) == uVar2)) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar3 + (longlong)iVar9 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->ObjectKey).ObjectIndex = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectKey<UScriptStruct_const_>_const_&> @ 1471c30b0

FSetElementId __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::Emplace<TObjectKey<UScriptStruct_const_>_const_&>
          (TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
           *this,TObjectKey<UScriptStruct_const_> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  char *in_R9;
  uint uVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TObjectKey<UScriptStruct_const_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(uint *)((longlong)local_38.Pointer + 4);
  uVar8 = *(int *)local_38.Pointer - uVar2 ^ uVar2 >> 0xd;
  bVar11 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar10 = (uVar2 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar9;
        if ((*(int *)(lVar3 + lVar5 * 0x10) == *(int *)local_38.Pointer) &&
           (*(uint *)(lVar3 + 4 + lVar5 * 0x10) == uVar2)) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar3 + (longlong)iVar9 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->ObjectKey).ObjectIndex = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UE::Mass::FTypeHandle> @ 1471c3390

FSetElementId __thiscall
TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>::
Emplace<UE::Mass::FTypeHandle>
          (TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>
           *this,FTypeHandle *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  uint uVar12;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
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
    iVar11 = iVar11 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (int *)0x0) {
    *(undefined8 *)local_48.Pointer = *(undefined8 *)param_2;
    *(int *)((longlong)local_48.Pointer + 8) = -1;
  }
  uVar8 = *(uint *)((longlong)local_48.Pointer + 4);
  uVar7 = *(int *)local_48.Pointer - uVar8 ^ uVar8 >> 0xd;
  bVar14 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
  uVar12 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 0x10;
  uVar12 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 10;
  iVar11 = *(int *)puVar13;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar11 - iVar3 != 1) && (iVar11 != iVar3)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar11;
        if ((*(int *)(lVar2 + lVar4 * 0x10) == *(int *)local_48.Pointer) &&
           (*(uint *)(lVar2 + 4 + lVar4 * 0x10) == uVar8)) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x10) = *(undefined8 *)local_48.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 8 + lVar4 * 0x10);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(int *)((longlong)local_48.Pointer + 8) = *(int *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  (param_1->TypeKey).ObjectKey.ObjectIndex = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectKey<UMassProcessor_const_>_> @ 1471c3620

FSetElementId __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::Emplace<TObjectKey<UMassProcessor_const_>_>
          (TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
           *this,TObjectKey<UMassProcessor_const_> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  char *in_R9;
  uint uVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TObjectKey<UMassProcessor_const_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(uint *)((longlong)local_38.Pointer + 4);
  uVar8 = *(int *)local_38.Pointer - uVar2 ^ uVar2 >> 0xd;
  bVar11 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar10 = (uVar2 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar9;
        if ((*(int *)(lVar3 + lVar5 * 0x10) == *(int *)local_38.Pointer) &&
           (*(uint *)(lVar3 + 4 + lVar5 * 0x10) == uVar2)) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar3 + (longlong)iVar9 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->ObjectKey).ObjectIndex = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TObjectKey<UScriptStruct_const_>_> @ 1471c3840

FSetElementId __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::Emplace<TObjectKey<UScriptStruct_const_>_>
          (TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
           *this,TObjectKey<UScriptStruct_const_> *param_1,bool *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  char *in_R9;
  uint uVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TObjectKey<UScriptStruct_const_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar2 = *(uint *)((longlong)local_38.Pointer + 4);
  uVar8 = *(int *)local_38.Pointer - uVar2 ^ uVar2 >> 0xd;
  bVar11 = false;
  uVar6 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar10 = (uVar2 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar9;
        if ((*(int *)(lVar3 + lVar5 * 0x10) == *(int *)local_38.Pointer) &&
           (*(uint *)(lVar3 + 4 + lVar5 * 0x10) == uVar2)) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(undefined8 *)(lVar3 + (longlong)iVar9 * 0x10) = *(undefined8 *)local_38.Pointer;
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  (param_1->ObjectKey).ObjectIndex = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UStruct_const_*_&&,TSharedRef<FRWAccessDetector,1>_&&>_> @ 1471c3a60

FSetElementId __thiscall
TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UStruct_const_*_&&,TSharedRef<FRWAccessDetector,1>_&&>_>
          (TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UStruct_const_*_&&,TSharedRef<FRWAccessDetector,1>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
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
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
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
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
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

// Emplace<TPairInitializer<UE::Mass::FTypeHandle_&&,UE::Mass::FTypeInfo_&&>_> @ 1471c3cc0

FSetElementId __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Mass::FTypeHandle_&&,UE::Mass::FTypeInfo_&&>_>
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Mass::FTypeHandle_&&,UE::Mass::FTypeInfo_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  int iVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0xf0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xf0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar4;
    TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
    ::
    TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
              ((TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                *)((longlong)local_38.Pointer + 0x20),
               (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                *)(puVar4 + 2));
    *(undefined4 *)((longlong)local_38.Pointer + 0xe0) = 0xffffffff;
  }
  uVar8 = *(uint *)((longlong)local_38.Pointer + 4);
  local_res8[0] = local_38.Index;
  uVar10 = *(int *)local_38.Pointer - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
  uVar12 = (uVar8 - uVar7) - uVar10 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 >> 0xc;
  uVar8 = (uVar7 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar7 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
  uVar8 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  bVar5 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar13 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0xe4) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0xe0) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,int_&&>_> @ 1471c3ed0

FSetElementId __thiscall
TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<FName_&&,int_&&>_>
          (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,int_&&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  char *in_R9;
  int iVar8;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar8 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar8;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_38.Pointer;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
  iVar8 = local_38.Index;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar6 * 0x14) == *(longlong *)local_38.Pointer) {
          bVar9 = iVar6 != -1;
          if (bVar9) {
            memmove((void *)(lVar1 + (longlong)iVar6 * 0x14),local_38.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            iVar8 = iVar6;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,iVar8);
  }
  *(int *)&param_1->Key = iVar8;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UScriptStruct_const_*_const_&,int_const_&>_> @ 1471c40a0

FSetElementId __thiscall
TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UScriptStruct_const_*_const_&,int_const_&>_>
          (TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UScriptStruct_const_*_const_&,int_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
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
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
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

// Emplace<TPairInitializer<UE::Mass::FTypeHandle_const_&,UE::Mass::FRelationData_&&>_> @ 1471c42e0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UE::Mass::FTypeHandle_const_&,UE::Mass::FRelationData_&&>_>
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Mass::FTypeHandle_const_&,UE::Mass::FRelationData_&&> *param_1
          ,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FRelationTypeTraits *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  int iVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x120 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x120 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<288,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<288,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>_> *)0x0) {
    pFVar4 = *(FRelationTypeTraits **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    UE::Mass::Relations::FRelationTypeTraits::FRelationTypeTraits
              ((FRelationTypeTraits *)((longlong)local_48.Pointer + 0x10),pFVar4);
    TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                *)((longlong)local_48.Pointer + 0xc0),
               (TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
                *)(pFVar4 + 1));
    *(undefined4 *)((longlong)local_48.Pointer + 0x110) = 0xffffffff;
  }
  uVar8 = *(uint *)((longlong)local_48.Pointer + 4);
  local_res8[0] = local_48.Index;
  uVar10 = *(int *)local_48.Pointer - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
  uVar12 = (uVar8 - uVar7) - uVar10 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 >> 0xc;
  uVar8 = (uVar7 - uVar10) - uVar12 ^ uVar10 << 0x10;
  uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar7 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
  uVar8 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  bVar5 = TryReplaceExisting(this,uVar8,local_48.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar13 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_48.Pointer + 0x114) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_48.Pointer + 0x110) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&>_> @ 1471c4520

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&>_>
          (TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSubclassOf<UMassProcessor>_const_&,UMassProcessor_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TObjectPtr<UClass>_u_0 *pTVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
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
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (TSubclassOf<UMassProcessor> *)0x0) {
    pTVar3 = *(TObjectPtr<UClass>_u_0 **)(param_2 + 8);
    TVar4 = (TObjectPtr<UClass>_u_0)(*(TObjectPtr<UClass>_u_0 **)param_2)->DebugPtr;
    *(TObjectPtr<UClass>_u_0 *)local_48.Pointer = TVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4 != (TObjectPtr<UClass>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    *(TObjectPtr<UClass>_u_0 *)((longlong)local_48.Pointer + 8) = *pTVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  bVar13 = false;
  uVar6 = ((uint)((ulonglong)*(UClass **)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)((ulonglong)*(UClass **)local_48.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  iVar10 = local_48.Index;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<TSubclassOf<UMassProcessor>_>(this,uVar6,local_48.Pointer);
    bVar13 = iVar5 != -1;
    if (bVar13) {
      memmove((void *)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x18),local_48.Pointer,0x10)
      ;
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
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
      *(int *)((longlong)FVar9 + uVar7 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,int_const_&>_> @ 1471c4740

FSetElementId __thiscall
TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,int_const_&>_>
          (TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,int_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x14) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  bVar12 = false;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar8 = *(int *)puVar11;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x14) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x14),local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc + (longlong)iVar8 * 0x14);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_> @ 1471c4970

FSetElementId __thiscall
TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_>
          (TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&>_> @ 1471c4ba0

FSetElementId __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&>_>
          (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TObjectPtr<UScriptStruct_const_>_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  undefined8 *_Src;
  undefined1 *puVar11;
  bool bVar12;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
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
  if (local_48.Pointer == (undefined8 *)0x0) {
    _Src = (undefined8 *)0x0;
  }
  else {
    pUVar3 = (UObject *)**(undefined8 **)param_3;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined8 *)((longlong)local_48.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined1 *)((longlong)local_48.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x20) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  bVar12 = false;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = (UScriptStruct *)*_Src;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar6 = FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                      (this,(uint)param_2,(TObjectPtr<UScriptStruct_const_> *)&local_res8.ObjectPtr)
    ;
    bVar12 = iVar6 != -1;
    if (bVar12) {
      local_res8.DebugPtr = (UScriptStruct *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28)
      ;
      pvVar4 = *(void **)(*(longlong *)&this->Elements + 8 + (longlong)iVar6 * 0x28);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      memmove(local_res8.DebugPtr,_Src,0x20);
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
      *(uint *)((longlong)_Src + 0x24) = uVar8;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)(_Src + 4) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
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

// EmplaceByHash<TKeyInitializer<TObjectKey<UScriptStruct_const_>_&&>_> @ 1471c4dd0

FSetElementId __thiscall
TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<TObjectKey<UScriptStruct_const_>_&&>_>
          (TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<TObjectKey<UScriptStruct_const_>_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  int *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
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
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer == (int *)0x0) {
    _Src = (int *)0x0;
  }
  else {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    DestructItems<FSoftClassPath,int>((FSoftClassPath *)0x0,0);
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar9 * 0x20;
        if ((*(int *)(lVar4 + lVar2) == *_Src) && (*(int *)(lVar4 + 4 + lVar2) == _Src[1])) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            DestructItems<FSoftClassPath,int>
                      (*(FSoftClassPath **)((longlong)_Dst + 8),*(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar4 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
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
      uVar6 = this->HashSize - 1U & (uint)param_2;
      _Src[7] = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[6] = *(int *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_> @ 1471c5040

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned_int_const_&> *param_2,bool *param_3)

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
  void *_Dst;
  int *_Src;
  bool bVar9;
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
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer == (int *)0x0) {
    _Src = (int *)0x0;
  }
  else {
    *(int *)local_38.Pointer = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    DestructItems<TSharedPtr<FMassArchetypeData,1>,int>((TSharedPtr<FMassArchetypeData,1> *)0x0,0);
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
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
        if (*(int *)((longlong)iVar8 * 0x20 + lVar2) == *_Src) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar2);
            DestructItems<TSharedPtr<FMassArchetypeData,1>,int>
                      (*(TSharedPtr<FMassArchetypeData,1> **)((longlong)_Dst + 8),
                       *(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar9;
  }
  if (bVar9 == false) {
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
      _Src[7] = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[6] = *(int *)((longlong)FVar6 + uVar4 * 4);
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

// EmplaceByHash<TKeyInitializer<UScriptStruct_const_*_const_&>_> @ 1471c52a0

FSetElementId __thiscall
TSet<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UScriptStruct_const_*_const_&>_>
          (TSet<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UScriptStruct_const_*_const_&> *param_2,bool *param_3)

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
  void *_Dst;
  longlong *_Src;
  bool bVar9;
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
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    DestructItems<TSharedPtr<FMassArchetypeData,1>,int>((TSharedPtr<FMassArchetypeData,1> *)0x0,0);
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
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
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar2) == *_Src) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar2);
            DestructItems<TSharedPtr<FMassArchetypeData,1>,int>
                      (*(TSharedPtr<FMassArchetypeData,1> **)((longlong)_Dst + 8),
                       *(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar9;
  }
  if (bVar9 == false) {
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
      *(uint *)((longlong)_Src + 0x1c) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
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

// EmplaceByHash<TKeyInitializer<UE::Mass::FArchetypeGroupHandle_const_&>_> @ 1471c5500

FSetElementId __thiscall
TSet<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UE::Mass::FArchetypeGroupHandle_const_&>_>
          (TSet<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UE::Mass::FArchetypeGroupHandle_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  undefined8 *_Src;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
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
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (undefined8 *)0x0) {
    _Src = (undefined8 *)0x0;
  }
  else {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar10 * 0x20;
        if ((*(int *)(lVar5 + lVar2) == (int)*_Src) &&
           (*(int *)(lVar5 + 4 + lVar2) == (int)((ulonglong)*_Src >> 0x20))) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar5 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
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
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// EmplaceByHash<TKeyInitializer<FMassArchetypeHandle_const_&>_> @ 1471c5760

FSetElementId __thiscall
TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMassArchetypeHandle_const_&>_>
          (TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMassArchetypeHandle_const_&> *param_2,bool *param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)param_3;
    *(longlong *)local_38.Pointer = *plVar8;
    lVar2 = plVar8[1];
    *(longlong *)((longlong)local_38.Pointer + 8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    *(longlong *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    plVar8 = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar9 * 0x28) == *plVar8) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            _Dst = (void *)(lVar2 + (longlong)iVar9 * 0x28);
            pvVar3 = *(void **)(lVar2 + 0x10 + (longlong)iVar9 * 0x28);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
            memmove(_Dst,plVar8,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x20 + (longlong)iVar9 * 0x28);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
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
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)plVar8 + 0x24) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(plVar8 + 4) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FMassEntityHandle_const_&>_> @ 1471c59d0

FSetElementId __thiscall
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FMassEntityHandle_const_&>_>
          (TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FMassEntityHandle_const_&> *param_2,bool *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar9 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar9 + 4 + (longlong)iVar3 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar9 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer !=
      (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0) {
    TKeyInitializer<FMassEntityHandle_const_&>::
    operator<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>
              ((TKeyInitializer<FMassEntityHandle_const_&> *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x28) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar8;
        if ((*(int *)(lVar9 + lVar4 * 0x30) == (int)*(undefined8 *)local_48.Pointer) &&
           (*(int *)(lVar9 + 4 + lVar4 * 0x30) ==
            (int)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20))) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            lVar4 = 2;
            _Dst = (void *)((longlong)iVar8 * 0x30 + lVar9);
            lVar9 = (longlong)_Dst + 0x28;
            do {
              puVar1 = (undefined8 *)(lVar9 + -0x10);
              lVar9 = lVar9 + -0x10;
              lVar4 = lVar4 + -1;
              if ((void *)*puVar1 != (void *)0x0) {
                FMemory::Free((void *)*puVar1);
              }
            } while (lVar4 != 0);
            memmove(_Dst,local_48.Pointer,0x28);
            TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar9 + 0x28 + lVar4 * 0x30);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)
                ((longlong)local_48.Pointer + 0x28))->field_0x4 = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x28) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 1471c5c50

FSetElementId __thiscall
TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  longlong *_Src;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  bool bVar9;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_58 [3];
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_58,iVar3);
  _Src = (longlong *)0x0;
  if (local_58[0].Pointer != (longlong *)0x0) {
    *(longlong *)local_58[0].Pointer = **(longlong **)param_3;
    *(longlong *)((longlong)local_58[0].Pointer + 8) = 0;
    *(longlong *)((longlong)local_58[0].Pointer + 0x10) = 0;
    *(longlong *)((longlong)local_58[0].Pointer + 0x18) = 0;
    *(longlong *)((longlong)local_58[0].Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_58[0].Pointer + 0x28) = 0xffffffff;
    _Src = local_58[0].Pointer;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
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
        if (*(longlong *)(lVar2 + (longlong)iVar8 * 0x30) == *_Src) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
            _Dst = (void *)((longlong)iVar8 * 0x30 + lVar2);
            if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x18));
            }
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x28);
            TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_58[0].Index,1);
            local_58[0].Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x28 + (longlong)iVar8 * 0x30);
      } while (iVar8 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar9;
  }
  if (bVar9 == false) {
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
      *(uint *)((longlong)_Src + 0x2c) = uVar5;
      FVar6 = (this->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar4 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(_Src + 5) = *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_58[0].Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_58[0].Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<unsigned_int_const_&,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_&&>_> @ 1471c5ec0

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<unsigned_int_const_&,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<unsigned_int_const_&,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_&&>
          *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  int *_Src;
  bool bVar11;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
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
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer == (int *)0x0) {
    _Src = (int *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_3 + 8);
    *(int *)local_38.Pointer = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar3;
    *puVar3 = 0;
    *(int *)((longlong)local_38.Pointer + 0x10) = *(int *)(puVar3 + 1);
    *(int *)((longlong)local_38.Pointer + 0x14) = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
    _Src = local_38.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar10 * 0x20 + lVar2) == *_Src) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            pvVar4 = *(void **)((longlong)_Dst + 8);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar11;
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
      uVar7 = this->HashSize - 1U & (uint)param_2;
      _Src[7] = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      _Src[6] = *(int *)((longlong)FVar8 + uVar6 * 4);
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

// EmplaceByHash<TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&>_> @ 1471c6120

FSetElementId __thiscall
TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
::EmplaceByHash<TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&>_>
          (TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
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
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (longlong *)0x0) {
    puVar3 = *(undefined8 **)(param_3 + 8);
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    pUVar4 = (UObject *)*puVar3;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar10 = *(int *)puVar11;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar10 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
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
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
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

// EmplaceByHash<TPairInitializer<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>_> @ 1471c6360

FSetElementId __thiscall
TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
::
EmplaceByHash<TPairInitializer<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>_>
          (TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TPairInitializer<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>
          *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>_>
       *)0x0) {
    plVar4 = *(longlong **)(param_3 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_3;
    lVar3 = *plVar4;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = lVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = 0;
    if (lVar3 != 0) {
      plVar7 = plVar4 + 2;
      if ((longlong *)plVar4[5] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar4[5];
      }
      (**(code **)*plVar7)();
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar5) {
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
      *(uint *)((longlong)local_38.Pointer + 0x44) = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<TObjectPtr<UScriptStruct_const_>_> @ 1471c7d00

int __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
          (TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UScriptStruct_const_> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 0x20 + (longlong)iVar1 * 0x28))
    {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UScriptStruct **)((longlong)iVar1 * 0x28 + *(longlong *)&this->Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FMassEntityHandle> @ 1471c7dd0

int __thiscall
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
::FindIndexByHash<FMassEntityHandle>
          (TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
           *this,uint param_1,FMassEntityHandle *param_2)

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
        if ((*(int *)(lVar1 + lVar2 * 0x30) == (*param_2).Index) &&
           (*(int *)(lVar1 + 4 + lVar2 * 0x30) == (*param_2).SerialNumber)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x28 + lVar2 * 0x30);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UE::Mass::FTypeHandle> @ 1471c7e50

int __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Mass::FTypeHandle>
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           *this,uint param_1,FTypeHandle *param_2)

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
        lVar2 = (longlong)iVar3 * 0x120;
        if ((*(int *)(lVar2 + lVar1) == (param_2->TypeKey).ObjectKey.ObjectIndex) &&
           (*(int *)(lVar2 + 4 + lVar1) == (param_2->TypeKey).ObjectKey.ObjectSerialNumber)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x110 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UE::Mass::FTypeHandle> @ 1471c7ed0

int __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Mass::FTypeHandle>
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,FTypeHandle *param_2)

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
        lVar2 = (longlong)iVar3 * 0xf0;
        if ((*(int *)(lVar2 + lVar1) == (param_2->TypeKey).ObjectKey.ObjectIndex) &&
           (*(int *)(lVar2 + 4 + lVar1) == (param_2->TypeKey).ObjectKey.ObjectSerialNumber)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0xe0 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TSubclassOf<UMassProcessor>_> @ 1471c7f50

int __thiscall
TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
::FindIndexByHash<TSubclassOf<UMassProcessor>_>
          (TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSubclassOf<UMassProcessor> *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  ForElementType<FSetElementId> FVar10;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      lVar5 = *(longlong *)(lVar4 + (longlong)iVar2 * 0x18);
      lVar1 = (longlong)iVar2 * 0x18;
      if ((lVar5 == 0) || (pUVar7 = UMassProcessor::StaticClass(), pUVar7 == (UClass *)0x0)) {
LAB_1471c7ff0:
        pUVar7 = (UClass *)0x0;
      }
      else {
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1471c7ff0;
        pUVar7 = *(UClass **)(lVar4 + lVar1);
      }
      pUVar9 = (param_2->Class).field0_0x0.DebugPtr;
      if ((pUVar9 == (UClass *)0x0) ||
         (pUVar8 = UMassProcessor::StaticClass(), pUVar8 == (UClass *)0x0)) {
LAB_1471c802d:
        pUVar9 = (UClass *)0x0;
      }
      else {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar9->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1471c802d;
        pUVar9 = (param_2->Class).field0_0x0.DebugPtr;
      }
      if (pUVar7 == pUVar9) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindOrAddByHash<FMassEntityHandle_const_&> @ 1471c8070

FMassEntityHandle * __thiscall
TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator>::
FindOrAddByHash<FMassEntityHandle_const_&>
          (TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator> *this,
          uint param_1,FMassEntityHandle *param_2,bool *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  int iVar10;
  FSparseArrayAllocationInfo local_28;
  
  puVar1 = &(this->Elements).field_0x8;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar6;
        if ((*(int *)(lVar3 + lVar5 * 0x10) == (*param_2).Index) &&
           (*(int *)(lVar3 + 4 + lVar5 * 0x10) == (*param_2).SerialNumber)) goto LAB_1471c80e9;
        iVar6 = *(int *)(lVar3 + 8 + lVar5 * 0x10);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_1471c80e9:
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar6 != -1;
  }
  if (iVar6 != -1) {
    return (FMassEntityHandle *)((longlong)iVar6 * 0x10 + *(longlong *)&this->Elements);
  }
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)puVar1,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x10);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (FMassEntityHandle *)0x0) {
    *(FMassEntityHandle *)local_28.Pointer = *param_2;
    ((FMassEntityHandle *)((longlong)local_28.Pointer + 8))->Index = -1;
  }
  uVar7 = *(int *)puVar1 - *(int *)&(this->Elements).field_0x34;
  if (3 < uVar7) {
    uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
    uVar7 = this->HashSize - 1U & param_1;
    ((FMassEntityHandle *)((longlong)local_28.Pointer + 8))->SerialNumber = uVar7;
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
    ((FMassEntityHandle *)((longlong)local_28.Pointer + 8))->Index =
         *(int *)((longlong)FVar8 + uVar9 * 4);
    *(int *)((longlong)FVar8 + uVar9 * 4) = local_28.Index;
  }
  else {
    this->HashSize = iVar10;
    Rehash(this);
  }
  return local_28.Pointer;
}

// RemoveImpl<TObjectKey<UMassProcessor_const_>_> @ 1471d4070

int __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectKey<UMassProcessor_const_>_>
          (TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectKey<UMassProcessor_const_> *param_2)

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
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x10,
         *(int *)(lVar9 + lVar2) != (param_2->ObjectKey).ObjectIndex ||
         (*(int *)(lVar9 + 4 + lVar2) != (param_2->ObjectKey).ObjectSerialNumber))) {
    uVar7 = *(uint *)(lVar9 + 8 + lVar2);
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
         (uVar7 & 0x1f) & 1) != 0) goto LAB_1471d4157;
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
LAB_1471d4157:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<TObjectKey<UScriptStruct_const_>_> @ 1471d4200

int __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::RemoveImpl<TObjectKey<UScriptStruct_const_>_>
          (TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectKey<UScriptStruct_const_> *param_2)

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
  lVar2 = *(longlong *)&this->Elements;
  while ((lVar9 = (longlong)(int)uVar7 * 0x10,
         *(int *)(lVar9 + lVar2) != (param_2->ObjectKey).ObjectIndex ||
         (*(int *)(lVar9 + 4 + lVar2) != (param_2->ObjectKey).ObjectSerialNumber))) {
    uVar7 = *(uint *)(lVar9 + 8 + lVar2);
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
         (uVar7 & 0x1f) & 1) != 0) goto LAB_1471d42e7;
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
LAB_1471d42e7:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar9 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator> @ 1471d5550

TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
::
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
          (TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
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
    TSparseArray<TSparseSetElement<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Find @ 14721a1f0

TTuple<UScriptStruct_const_*,int> * __thiscall
TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
       *this,UScriptStruct *param_1)

{
  TTuple<UScriptStruct_const_*,int> *pTVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)(this->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        pTVar1 = (TTuple<UScriptStruct_const_*,int> *)
                 (*(longlong *)&this->Elements + (longlong)iVar2 * 0x18);
        if (*(UScriptStruct **)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18) == param_1) {
          return pTVar1;
        }
        iVar2 = *(int *)(pTVar1 + 1);
      } while (iVar2 != -1);
    }
  }
  return (TTuple<UScriptStruct_const_*,int> *)0x0;
}

// Find @ 14721a290

TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> * __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
       *this,TObjectPtr<UScriptStruct_const_> param_1)

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
  iVar2 = FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                    (this,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UScriptStruct_const_> *)param_1.field0_0x0);
  if (iVar2 != -1) {
    return (TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *)
           (*(longlong *)&this->Elements + (longlong)iVar2 * 0x28);
  }
  return (TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline> *)0x0;
}

// Find @ 14721a330

TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> * __thiscall
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
       *this,FMassEntityHandle *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (*param_1).SerialNumber;
  uVar4 = (*param_1).Index - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  iVar1 = FindIndexByHash<FMassEntityHandle>(this,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
  if (iVar1 != -1) {
    return (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)
           ((longlong)iVar1 * 0x30 + *(longlong *)&this->Elements);
  }
  return (TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData> *)0x0;
}

// Rehash @ 147240b90

void __thiscall
TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMassArchetypeHandle_const_,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
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
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147240c6c;
        uVar4 = puVar8[lVar5 + 1];
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
LAB_147240c6c:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x24) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147240d50

void __thiscall
TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*>,TDefaultMapHashableKeyFuncs<TSubclassOf<UMassProcessor>_const_,UMassProcessor_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
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
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147240e2c;
        uVar4 = puVar8[lVar5 + 1];
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
LAB_147240e2c:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147240f10

void __thiscall
TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_147240fe7;
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
LAB_147240fe7:
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
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x14;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x10) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1472410c0

void __thiscall
TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14724119c;
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
LAB_14724119c:
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

// Rehash @ 147241250

void __thiscall
TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14724132c;
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
LAB_14724132c:
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

// Rehash @ 1472413e0

void __thiscall
TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
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
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1472414bc;
        uVar4 = puVar8[lVar5 + 1];
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
LAB_1472414bc:
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
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1472415a0

void __thiscall
TSet<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14724167c;
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
LAB_14724167c:
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

// Rehash @ 147241760

void __thiscall
TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14724183c;
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
LAB_14724183c:
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

// Rehash @ 147241920

void __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1472419f7;
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
LAB_1472419f7:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147241b00

void __thiscall
TSet<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147241bdc;
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
LAB_147241bdc:
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
        uVar7 = ((int)puVar8[1] >> 0x1f | *puVar8) * 0x17 + puVar8[1] & *piVar1 - 1U;
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

// Rehash @ 147241cb0

void __thiscall
TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147241d8c;
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
LAB_147241d8c:
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
                  ((longlong)local_30.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
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
        *(uint *)((longlong)puVar11 + 0x2c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147241ed0

void __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147241fac;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_147241fac:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x120 + *(longlong *)&this->Elements)
        ;
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[0x45] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[0x44] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1472420f0

void __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1472421cc;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1472421cc:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0xf0 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[0x39] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[0x38] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147242310

void __thiscall
TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1472423ec;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1472423ec:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[7] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[6] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147242520

void __thiscall
TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1472425f7;
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
LAB_1472425f7:
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

// Rehash @ 1472426d0

void __thiscall
TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1472427a7;
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
LAB_1472427a7:
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

// Rehash @ 147242880

void __thiscall
TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TTuple<FString,FAnsiString>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FString,FAnsiString>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_147242957;
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
LAB_147242957:
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
                 ((longlong)local_40.CurrentBitIndex * 0x30 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x2c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 5) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147242a30

void __thiscall
TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_147242b07;
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
LAB_147242b07:
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
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x44) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147242be0

void __thiscall
TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator>::Rehash
          (TSet<FMassEntityHandle,DefaultKeyFuncs<FMassEntityHandle,0>,FDefaultSetAllocator> *this)

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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147242cbc;
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
LAB_147242cbc:
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
                  ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
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
        *(uint *)((longlong)puVar11 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147242df0

void __thiscall
TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>::Rehash
          (TSet<UE::Mass::FTypeHandle,DefaultKeyFuncs<UE::Mass::FTypeHandle,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_147242ecc;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_147242ecc:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[3] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[2] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147243000

void __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1472430dc;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1472430dc:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[3] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[2] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 147243210

void __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1472432ec;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1472432ec:
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
        piVar12 = (int *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar5 = piVar12[1];
        uVar8 = *piVar12 - uVar5 ^ uVar5 >> 0xd;
        uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
        uVar10 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar4 ^ uVar10 >> 0xc;
        uVar5 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar4 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar4) - uVar10 ^ uVar4 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar4 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        piVar12[3] = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        piVar12[2] = *(int *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 147243420

void __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TObjectKey<UMassProcessor_const_>_> *param_2,
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
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 1472434b0

void __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TObjectKey<UScriptStruct_const_>_> *param_2,
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
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 1472453e0

void __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
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
    goto LAB_147245452;
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
LAB_147245452:
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
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 147245500

void __thiscall
TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
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
    goto LAB_147245572;
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
LAB_147245572:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x20 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
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
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x20);
  }
  *piVar7 = *(int *)(lVar5 + 0x18);
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reserve @ 147248790

void __thiscall
TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
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
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Reset @ 1472488f0

void __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::Reset(TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 147248960

void __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::Reset(TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 147252630

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

bool __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FRelationData,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  void *_Dst;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar2 != 1) && (iVar13 != iVar2)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar13 * 0x120;
        if ((*(int *)(lVar10 + lVar3) == *(int *)param_2) &&
           (*(int *)(lVar10 + 4 + lVar3) == *(int *)&param_2->field_0x4)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x120 + lVar3);
            UE::Mass::FRelationData::~FRelationData((FRelationData *)((longlong)_Dst + 0x10));
            memmove(_Dst,param_2,0x110);
            iVar2 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            if (((*(uint *)(puVar9 + lVar10) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x120 + lVar3) = iVar2;
            }
            uVar8 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar2 * 0x120 + lVar3);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar8;
            puVar9 = &(this->Elements).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar10 + 0x110 + lVar3);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 147252870

bool __thiscall
TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar13 * 0xf0;
        if ((*(int *)(lVar10 + lVar4) == *(int *)param_2) &&
           (*(int *)(lVar10 + 4 + lVar4) == *(int *)&param_2->field_0x4)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0xf0 + lVar4);
            bVar2 = *(byte *)((longlong)_Dst + 0xd0);
            if ((3 < (ulonglong)bVar2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[bVar2])((longlong)_Dst + 0x20);
            memmove(_Dst,param_2,0xe0);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar2 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar2 | 1U >> 0x20 - bVar2;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            if (((*(uint *)(puVar9 + lVar10) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xf0 + lVar4) = iVar3;
            }
            uVar8 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0xf0 + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar8;
            puVar9 = &(this->Elements).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar10 + 0xe0 + lVar4);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 147252ae0

bool __thiscall
TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>_>
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
  longlong *plVar11;
  undefined4 *puVar12;
  int iVar13;
  void *_Dst;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  bool bVar16;
  
  bVar16 = false;
  iVar13 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar3 != 1) && (iVar13 != iVar3)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar13 * 0x50) == *(longlong *)param_2) {
          bVar16 = iVar13 != -1;
          if (bVar16) {
            _Dst = (void *)((longlong)iVar13 * 0x50 + lVar4);
            if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
              plVar11 = (longlong *)((longlong)_Dst + 0x20);
              if (*(longlong **)((longlong)_Dst + 0x38) != (longlong *)0x0) {
                plVar11 = *(longlong **)((longlong)_Dst + 0x38);
              }
              (**(code **)(*plVar11 + 0x10))();
            }
            memmove(_Dst,param_2,0x40);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
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
            if (((*(uint *)(puVar10 + lVar2) & uVar15) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x50) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar12 = (undefined4 *)((longlong)iVar3 * 0x50 + lVar4);
            *puVar12 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar12[1] = uVar9;
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
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar15;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar4 + 0x40 + (longlong)iVar13 * 0x50);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// UnhashElements @ 147252d30

void __thiscall
TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>,TDefaultMapHashableKeyFuncs<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_147252e2b;
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
LAB_147252e2b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147252f20;
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
LAB_147252f20:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassRuntimePipeline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 147252fc0

void __thiscall
TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1472530bb;
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
LAB_1472530bb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1472531b0;
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
LAB_1472531b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UScriptStruct_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 147253250

void __thiscall
TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14725334b;
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
LAB_14725334b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147253440;
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
LAB_147253440:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TObjectKey<UMassProcessor_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 1472534e0

void __thiscall
TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1472535db;
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
LAB_1472535db:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1472536d0;
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
LAB_1472536d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TObjectKey<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

