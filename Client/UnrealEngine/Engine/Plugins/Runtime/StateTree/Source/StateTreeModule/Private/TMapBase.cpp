// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView_const_&> @ 14d4ab0e0

FStateTreeDataView * __thiscall
TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
::Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView_const_&>
          (TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
           *this,FStateTreeDataHandle *param_1,FStateTreeDataView *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar7);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar3;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_> *)0x0
     ) {
    *(undefined4 *)local_18.Pointer = *(undefined4 *)param_1;
    *(ushort *)((longlong)local_18.Pointer + 4) = (param_1->StateHandle).Index;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = uVar4;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar1 = *(ushort *)((longlong)local_18.Pointer + 2);
  local_res8[0] = local_18.Index;
  uVar8 = (uint)*(byte *)local_18.Pointer + (uint)uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^
          (uint)uVar1;
  uVar8 = (uVar8 >> 2) +
          (uint)*(ushort *)((longlong)local_18.Pointer + 4) + uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  bVar5 = TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar8,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar8,local_18.Pointer,local_res8[0]);
  }
  return (FStateTreeDataView *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView> @ 14d4ab250

FStateTreeDataView * __thiscall
TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
::Emplace<FStateTreeDataHandle_const_&,FStateTreeDataView>
          (TMapBase<FStateTreeDataHandle,FStateTreeDataView,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>_>
           *this,FStateTreeDataHandle *param_1,FStateTreeDataView *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar2 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar7);
    iVar2 = iVar2 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar3;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FStateTreeDataHandle,FStateTreeDataView>_> *)0x0
     ) {
    *(undefined4 *)local_18.Pointer = *(undefined4 *)param_1;
    *(ushort *)((longlong)local_18.Pointer + 4) = (param_1->StateHandle).Index;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = uVar4;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar1 = *(ushort *)((longlong)local_18.Pointer + 2);
  local_res8[0] = local_18.Index;
  uVar8 = (uint)*(byte *)local_18.Pointer + (uint)uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^
          (uint)uVar1;
  uVar8 = (uVar8 >> 2) +
          (uint)*(ushort *)((longlong)local_18.Pointer + 4) + uVar8 * 0x40 + -0x61c88647 ^ uVar8;
  bVar5 = TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar8,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FStateTreeDataHandle,FStateTreeDataView>,TDefaultMapHashableKeyFuncs<FStateTreeDataHandle,FStateTreeDataView,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar8,local_18.Pointer,local_res8[0]);
  }
  return (FStateTreeDataView *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Find @ 14d4bc480

uint * __thiscall
TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
::Find(TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
       *this,FStateTreeInstanceDebugId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (*param_1).Id;
  uVar6 = (*param_1).SerialNumber;
  uVar7 = uVar9 - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
  uVar6 = (uVar6 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar8 * 0x14;
        if ((*(uint *)(lVar2 + (longlong)iVar8 * 0x14) == uVar9) &&
           (*(uint *)(lVar1 + 4) == param_1->SerialNumber)) {
          if (iVar8 == -1) {
            return (uint *)0x0;
          }
          puVar5 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar5 = (uint *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar8 = *(int *)(lVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  return (uint *)0x0;
}

// Find @ 14d4bc590

FInstanceEventBufferedData * __thiscall
TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
::Find(TMapBase<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,UE::StateTreeTrace::FInstanceEventBufferedData,0>_>
       *this,FStateTreeInstanceDebugId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FInstanceEventBufferedData *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (*param_1).Id;
  uVar6 = (*param_1).SerialNumber;
  uVar7 = uVar9 - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
  uVar6 = (uVar6 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar8 * 0x28;
        if ((*(uint *)(lVar2 + (longlong)iVar8 * 0x28) == uVar9) &&
           (*(uint *)(lVar1 + 4) == param_1->SerialNumber)) {
          if (iVar8 == -1) {
            return (FInstanceEventBufferedData *)0x0;
          }
          pFVar5 = (FInstanceEventBufferedData *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FInstanceEventBufferedData *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  return (FInstanceEventBufferedData *)0x0;
}

