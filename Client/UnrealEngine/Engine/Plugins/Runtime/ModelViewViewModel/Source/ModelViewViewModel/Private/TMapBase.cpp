// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// EmplaceByHash<TObjectKey<UMVVMView_const_>_const_&> @ 14a73cd70

TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<TObjectKey<UMVVMView_const_>_const_&>
          (TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,TObjectKey<UMVVMView_const_> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_68 [2];
  FSparseArrayAllocationInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_60,iVar4);
  if (local_60.Pointer ==
      (TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    pTVar5 = (TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
              *)0x0;
  }
  else {
    *(FObjectKey *)local_60.Pointer = param_2->ObjectKey;
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_60.Pointer + 8) = local_50;
    *(undefined8 *)((longlong)local_60.Pointer + 0x10) = uStack_48;
    *(undefined8 *)((longlong)local_60.Pointer + 0x18) = local_40;
    *(undefined8 *)((longlong)local_60.Pointer + 0x20) = uStack_38;
    if (*(void **)((longlong)local_60.Pointer + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_60.Pointer + 0x28));
    }
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x34) = 8;
    *(undefined4 *)((longlong)local_60.Pointer + 0x38) = 0xffffffff;
    pTVar5 = local_60.Pointer;
  }
  local_68[0] = local_60.Index;
  bVar3 = TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_68,(bool *)0x0);
  lVar6 = (longlong)local_68[0];
  if (!bVar3) {
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_68[0]);
  }
  return (TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x40);
}

// EmplaceByHash<TObjectKey<UMVVMView_const_>_> @ 14a73cec0

TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
::EmplaceByHash<TObjectKey<UMVVMView_const_>_>
          (TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,TObjectKey<UMVVMView_const_> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_68 [2];
  FSparseArrayAllocationInfo local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_60,iVar4);
  if (local_60.Pointer ==
      (TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    pTVar5 = (TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>
              *)0x0;
  }
  else {
    *(FObjectKey *)local_60.Pointer = param_2->ObjectKey;
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_60.Pointer + 8) = local_50;
    *(undefined8 *)((longlong)local_60.Pointer + 0x10) = uStack_48;
    *(undefined8 *)((longlong)local_60.Pointer + 0x18) = local_40;
    *(undefined8 *)((longlong)local_60.Pointer + 0x20) = uStack_38;
    if (*(void **)((longlong)local_60.Pointer + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_60.Pointer + 0x28));
    }
    *(undefined8 *)((longlong)local_60.Pointer + 0x28) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_60.Pointer + 0x34) = 8;
    *(undefined4 *)((longlong)local_60.Pointer + 0x38) = 0xffffffff;
    pTVar5 = local_60.Pointer;
  }
  local_68[0] = local_60.Index;
  bVar3 = TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_68,(bool *)0x0);
  lVar6 = (longlong)local_68[0];
  if (!bVar3) {
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_68[0]);
  }
  return (TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x40);
}

// Remove @ 14a75cad0

int __thiscall
TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Remove(TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
         *this,TObjectKey<UMVVMView_const_> *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  uVar1 = (param_1->ObjectKey).ObjectSerialNumber;
  iVar11 = 0;
  iVar2 = (param_1->ObjectKey).ObjectIndex;
  uVar9 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar6 = (-0x61c88647 - uVar9) - uVar1 ^ uVar9 << 8;
  uVar5 = (uVar1 - uVar9) - uVar6 ^ uVar6 >> 0xd;
  uVar10 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar9 = (uVar6 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar6 = (uVar5 - uVar9) - uVar10 ^ uVar9 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 3;
  uVar5 = uVar10 << 10 ^ (uVar9 - uVar10) - uVar6;
  FVar8 = (this->Pairs).Hash.SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar7 = *(int *)((longlong)FVar8 +
                  (((longlong)(int)((uVar6 - uVar5) - uVar10) ^ (ulonglong)(uVar5 >> 0xf)) &
                  (longlong)(this->Pairs).HashSize - 1U) * 4);
  if (iVar7 != -1) {
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    while ((lVar4 = (longlong)iVar7 * 0x40, *(int *)(lVar4 + lVar3) != iVar2 ||
           (*(uint *)(lVar4 + 4 + lVar3) != uVar1))) {
      iVar7 = *(int *)(lVar4 + 0x38 + lVar3);
      if (iVar7 == -1) {
        return 0;
      }
    }
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar7);
    iVar11 = 1;
  }
  return iVar11;
}

