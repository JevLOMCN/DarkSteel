// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 26

// Emplace<FStateTreeInstanceDebugId_const_&> @ 14d4ab3c0

FSetElementId __thiscall
TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>::
Emplace<FStateTreeInstanceDebugId_const_&>
          (TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
           *this,FStateTreeInstanceDebugId *param_1,bool *param_2)

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
  uint uVar10;
  int iVar11;
  bool *in_R9;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FStateTreeInstanceDebugId> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar10 = (uint)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20);
  uVar8 = (int)*(undefined8 *)local_38.Pointer - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,(int *)local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4)
      ;
      *(uint *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  param_1->Id = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FStateTreeInstanceDebugId_const_&>_> @ 14d4ab5c0

FSetElementId __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FStateTreeInstanceDebugId_const_&>_>
          (TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FStateTreeInstanceDebugId_const_&> *param_1,bool *param_2)

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
  uint uVar10;
  int iVar11;
  TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>
  *pTVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_58;
  undefined8 local_48;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_58,iVar5);
  if (local_58.Pointer ==
      (TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>
       *)0x0) {
    pTVar12 = (TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>
               *)0x0;
  }
  else {
    local_48 = 0xffffffffffffffff;
    *(undefined8 *)local_58.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_58.Pointer + 8) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_58.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_58.Pointer + 0x20) = 0xffffffff;
    pTVar12 = local_58.Pointer;
  }
  local_res8[0] = local_58.Index;
  uVar10 = (uint)((ulonglong)*(undefined8 *)pTVar12 >> 0x20);
  uVar8 = (int)*(undefined8 *)pTVar12 - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  bVar4 = TryReplaceExisting(this,uVar6,pTVar12,local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&pTVar12->field_0x24 = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&pTVar12->field_0x20 = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FStateTreeDataHandle_const_&,int_&&>_> @ 14d4ab7e0

FSetElementId __thiscall
TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FStateTreeDataHandle_const_&,int_&&>_>
          (TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FStateTreeDataHandle_const_&,int_&&> *param_1,bool *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  int iVar14;
  char *in_R9;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar14 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar14 = iVar14 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar7 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x14) = 0xffffffff;
    }
  }
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (byte *)0x0) {
    puVar5 = *(undefined4 **)param_2;
    puVar6 = *(undefined4 **)(param_2 + 8);
    *(undefined4 *)local_48.Pointer = *puVar5;
    *(undefined2 *)((longlong)local_48.Pointer + 4) = *(undefined2 *)(puVar5 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar6;
    pbVar1 = (byte *)((longlong)local_48.Pointer + 0xc);
    pbVar1[0] = 0xff;
    pbVar1[1] = 0xff;
    pbVar1[2] = 0xff;
    pbVar1[3] = 0xff;
  }
  uVar2 = *(ushort *)((longlong)local_48.Pointer + 2);
  bVar16 = false;
  uVar10 = *(byte *)local_48.Pointer + 0x9e3779b9 + (uint)uVar2 * 0x40 + (uint)(uVar2 >> 2) ^
           (uint)uVar2;
  iVar14 = *(int *)puVar15;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  uVar10 = uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 +
           (uint)*(ushort *)((longlong)local_48.Pointer + 4) ^ uVar10;
  if ((iVar14 - iVar7 != 1) && (iVar14 != iVar7)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar8 = (longlong)iVar14;
        if (((*(byte *)(lVar4 + lVar8 * 0x14) == *(byte *)local_48.Pointer) &&
            (*(ushort *)(lVar4 + 2 + lVar8 * 0x14) == uVar2)) &&
           (*(ushort *)(lVar4 + 4 + lVar8 * 0x14) == *(ushort *)((longlong)local_48.Pointer + 4))) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            memmove((void *)(lVar4 + (longlong)iVar14 * 0x14),local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar4 + 0xc + lVar8 * 0x14);
      } while (iVar14 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar11 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar10;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar12 + uVar9 * 4);
      *(int *)((longlong)FVar12 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_&&>_> @ 14d4aba50

FSetElementId __thiscall
TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_&&>_>
          (TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_&&> *param_1,
          bool *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
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
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FStateTreeIndex16,FStateTreeDataView>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined2 *)local_38.Pointer = **(undefined2 **)param_2;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar1 = *(ushort *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + ((ulonglong)(this->HashSize - 1) & (ulonglong)uVar1) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ushort *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements) == uVar1) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
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
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,(uint)uVar1,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&>_> @ 14d4abc00

FSetElementId __thiscall
TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&>_>
          (TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FStateTreeIndex16_const_&,FStateTreeDataView_const_&> *param_1,
          bool *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
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
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FStateTreeIndex16,FStateTreeDataView>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined2 *)local_38.Pointer = **(undefined2 **)param_2;
    uVar5 = puVar4[1];
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar9 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar1 = *(ushort *)local_38.Pointer;
  if ((iVar8 - iVar6 != 1) && (iVar8 != iVar6)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + ((ulonglong)(this->HashSize - 1) & (ulonglong)uVar1) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ushort *)((longlong)iVar8 * 0x20 + *(longlong *)&this->Elements) == uVar1) {
          bVar9 = iVar8 != -1;
          if (bVar9) {
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
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,(uint)uVar1,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FStateTreeInstanceDebugId_const_&,unsigned_int_&&>_> @ 14d4abdb0

FSetElementId __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FStateTreeInstanceDebugId_const_&,unsigned_int_&&>_>
          (TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FStateTreeInstanceDebugId_const_&,unsigned_int_&&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar11 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar11;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar11 * 0x14) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0xc) = 0xffffffff;
  }
  iVar11 = (int)*(undefined8 *)local_48.Pointer;
  uVar12 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  bVar14 = false;
  uVar7 = iVar11 - uVar12 ^ uVar12 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar12 ^ uVar7 << 8;
  uVar12 = (uVar12 - uVar7) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 0x10;
  uVar12 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 10;
  iVar10 = *(int *)puVar13;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar12 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar3 != 1) && (iVar10 != iVar3)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar4 = (longlong)iVar10;
        if ((*(int *)(lVar1 + lVar4 * 0x14) == iVar11) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x14) == *(int *)((longlong)local_48.Pointer + 4))) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            memmove((void *)(lVar1 + (longlong)iVar10 * 0x14),local_48.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0xc + lVar4 * 0x14);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar7 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
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
      *(uint *)((longlong)local_48.Pointer + 0x10) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0xc) =
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

// FindIndexByHash<FStateTreeDataHandle> @ 14d4ac870

int __thiscall
TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
::FindIndexByHash<FStateTreeDataHandle>
          (TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FStateTreeDataHandle *param_2)

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
        if (((*(EStateTreeDataSourceType *)(lVar1 + lVar2 * 0x14) == param_2->Source) &&
            (*(ushort *)(lVar1 + 2 + lVar2 * 0x14) == param_2->Index)) &&
           (*(ushort *)(lVar1 + 4 + lVar2 * 0x14) == (param_2->StateHandle).Index)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0xc + lVar2 * 0x14);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// Rehash @ 14d4cd650

void __thiscall
TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FStateTreeDataHandle,int>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
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
    iVar4 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4cd72c;
        uVar9 = puVar10[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar4 < iStack_44) {
LAB_14d4cd72c:
        iStack_44 = iVar4;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        uVar3 = *(ushort *)
                 (*(longlong *)&this->Elements + 2 + (longlong)local_30.CurrentBitIndex * 0x14);
        pbVar2 = (byte *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        uVar9 = (uint)*pbVar2 + (uint)uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ (uint)uVar3;
        uVar9 = (uVar9 * 0x40 + (uVar9 >> 2) + *(ushort *)(pbVar2 + 4) + 0x9e3779b9 ^ uVar9) &
                *piVar1 - 1U;
        *(uint *)(pbVar2 + 0x10) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar5;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d4cd830

void __thiscall
TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
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
  byte *pbVar10;
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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4cd90c;
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
LAB_14d4cd90c:
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
        pbVar10 = (byte *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements)
        ;
        uVar2 = *(ushort *)(pbVar10 + 2);
        uVar8 = (uint)*pbVar10 + (uint)uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ (uint)uVar2;
        uVar8 = (uVar8 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 + (uint)*(ushort *)(pbVar10 + 4) ^ uVar8)
                & *piVar1 - 1U;
        *(uint *)(pbVar10 + 0x1c) = uVar8;
        FVar4 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar4;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(pbVar10 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d4cda00

void __thiscall
TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ushort *puVar8;
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4cdadc;
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
LAB_14d4cdadc:
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
        puVar8 = (ushort *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & (uint)*puVar8;
        *(uint *)(puVar8 + 0xe) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (ulonglong)uVar7;
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d4cdb90

void __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4cdc6c;
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
      if (iVar3 < iStack_44) {
LAB_14d4cdc6c:
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
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)(puVar2 + 2) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d4cddb0

void __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4cde8c;
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
      if (iVar3 < iStack_44) {
LAB_14d4cde8c:
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
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x28);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x24) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d4cdfd0

void __thiscall
TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>::
Rehash(TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d4ce0ac;
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
LAB_14d4ce0ac:
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

// RehashOrLink @ 14d4ce1e0

void __thiscall
TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_> *param_2,
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

// RehashOrLink @ 14d4ce270

void __thiscall
TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FStateTreeIndex16,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeIndex16,FStateTreeDataView,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FStateTreeIndex16,FStateTreeDataView>_> *param_2,int param_3)

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

// Reset @ 14d4ceac0

void __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// TryReplaceExisting @ 14d4d2e90

bool __thiscall
TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_> *param_2,int *param_3,
          bool *param_4)

{
  int iVar1;
  char *pcVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
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
      do {
        pcVar2 = (char *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Elements);
        if (((*pcVar2 == *(char *)param_2) &&
            (*(short *)(pcVar2 + 2) == *(short *)&param_2->field_0x2)) &&
           (*(short *)(pcVar2 + 4) == *(short *)&param_2->field_0x4)) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            memmove((void *)((longlong)iVar4 * 0x20 + *(longlong *)&this->Elements),param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)(pcVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14d4d2f90

bool __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar3 != 1) && (iVar14 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        lVar11 = (longlong)iVar14;
        if ((*(int *)(lVar4 + lVar11 * 0x28) == *(int *)param_2) &&
           (*(int *)(lVar4 + 4 + lVar11 * 0x28) == *(int *)&param_2->field_0x4)) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            pvVar5 = *(void **)(lVar4 + 0x10 + (longlong)iVar14 * 0x28);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove((void *)(lVar4 + (longlong)iVar14 * 0x28),param_2,0x20);
            iVar3 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar4 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar3 & 0x1f;
            uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar11 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar11) & uVar15) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar4 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar3;
            }
            puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x28);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
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
            *(uint *)(puVar12 + lVar11) = *(uint *)(puVar12 + lVar11) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 14d4d31d0

bool __thiscall
TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<FStateTreeInstanceDebugId> *param_2,
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
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar12;
        if ((*(int *)(lVar3 + lVar10 * 0x10) == *(int *)param_2) &&
           (*(int *)(lVar3 + 4 + lVar10 * 0x10) == *(int *)&param_2->field_0x4)) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar12 * 0x10) =
                 *(undefined8 *)param_2;
            iVar2 = *param_3;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
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
            if (((*(uint *)(puVar9 + lVar10) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x10) = iVar2;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 0x10) = uVar8;
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
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 8 + lVar10 * 0x10);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// UnhashElements @ 14d4d3810

void __thiscall
TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d4d390b;
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
LAB_14d4d390b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d4d3a00;
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
LAB_14d4d3a00:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 14d4d3aa0

void __thiscall
TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>::
UnhashElements(TSet<FStateTreeInstanceDebugId,DefaultKeyFuncs<FStateTreeInstanceDebugId,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d4d3b9b;
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
LAB_14d4d3b9b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d4d3c90;
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
LAB_14d4d3c90:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FStateTreeInstanceDebugId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Emplace<TPairInitializer<unsigned_int_&&,unsigned_char_*_const_&>_> @ 14d4de080

FSetElementId __thiscall
TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_&&,unsigned_char_*_const_&>_>
          (TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_&&,unsigned_char_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  uint uVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<unsigned_int,unsigned_char_*>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar11 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,uVar11,local_38.Pointer,local_res8,in_R9);
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
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar11;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Rehash @ 14d5031e0

void __thiscall
TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d5032bc;
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
LAB_14d5032bc:
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
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Reset @ 14d5063c0

void __thiscall
TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
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

// TryReplaceExisting @ 14d5214d0

bool __thiscall
TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<unsigned_int,unsigned_char_*>_> *param_2,
          int *param_3,bool *param_4)

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
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar13 * 0x18) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar13 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
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
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
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
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14d5219a0

void __thiscall
TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d521a9b;
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
LAB_14d521a9b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d521b90;
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
LAB_14d521b90:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

