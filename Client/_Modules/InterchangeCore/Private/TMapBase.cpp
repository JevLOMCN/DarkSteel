// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 18

// EmplaceByHash<int_const_&> @ 14e375f90

FString * __thiscall
TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::
EmplaceByHash<int_const_&>
          (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<int,FString>_> *pTVar5;
  longlong lVar6;
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
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<int,FString>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<int,FString>_> *)0x0) {
    *(int *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_> @ 14e3760c0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
::
EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
          (TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
           *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
          *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_2;
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)&param_3->field_0x8 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = *(undefined4 *)&param_3->field_0x10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x1c) = *(undefined4 *)&param_3->field_0x14;
    *(undefined8 *)&param_3->field_0x10 = 0;
    uVar3 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_3->field_0x20;
    *(undefined8 *)&param_3->field_0x20 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = *(undefined4 *)&param_3->field_0x28;
    *(undefined4 *)((longlong)local_28.Pointer + 0x34) = *(undefined4 *)&param_3->field_0x2c;
    *(undefined8 *)&param_3->field_0x28 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_> @ 14e376230

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
::
EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
          (TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
           *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
          *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_2;
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)&param_3->field_0x8 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = *(undefined4 *)&param_3->field_0x10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x1c) = *(undefined4 *)&param_3->field_0x14;
    *(undefined8 *)&param_3->field_0x10 = 0;
    uVar3 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_3->field_0x20;
    *(undefined8 *)&param_3->field_0x20 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = *(undefined4 *)&param_3->field_0x28;
    *(undefined4 *)((longlong)local_28.Pointer + 0x34) = *(undefined4 *)&param_3->field_0x2c;
    *(undefined8 *)&param_3->field_0x28 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_> @ 14e3763a0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
::
EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
          (TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
           *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
  *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_2;
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)&param_3->field_0x8 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = *(undefined4 *)&param_3->field_0x10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x1c) = *(undefined4 *)&param_3->field_0x14;
    *(undefined8 *)&param_3->field_0x10 = 0;
    uVar3 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_3->field_0x20;
    *(undefined8 *)&param_3->field_0x20 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = *(undefined4 *)&param_3->field_0x28;
    *(undefined4 *)((longlong)local_28.Pointer + 0x34) = *(undefined4 *)&param_3->field_0x2c;
    *(undefined8 *)&param_3->field_0x28 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar6 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x40);
}

// FindByHash<int> @ 14e388200

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
::FindByHash<int>(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                  *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                    *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                      *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
          *)0x0;
}

// FindByHash<int> @ 14e388270

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
::FindByHash<int>(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                  *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                    *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                      *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
          *)0x0;
}

// FindByHash<int> @ 14e3882e0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
::FindByHash<int>(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                  *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                    *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                      *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[0xe];
      } while (iVar1 != -1);
    }
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *)0x0;
}

// FindOrAddImpl<UClass_*_const_&> @ 14e388a40

TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UClass_*_const_&>
          (TMapBase<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UClass **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UClass *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14e388af0

FInterchangePipelinePropertyStates * __thiscall
TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14e388b82;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14e388b82:
  return (FInterchangePipelinePropertyStates *)(lVar3 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e3a88e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>_>
           *this,TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  FAttributeKey *pFVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FAttributeKey local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<UE::Interchange::FAttributeKey,int>((FAttributeKey *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Interchange::FAttributeKey,int>((FAttributeKey *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14e3a8bd9;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14e3a8bd9;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14e3a8a20;
      }
    }
    else {
LAB_14e3a8a20:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar17;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar13 = *puVar18;
      uVar16 = uVar17;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14e3a8b20;
        uVar13 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14e3a8b20:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
                *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar19;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14e3a8bd9:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar17;
  local_f4.Key.Data.ArrayMax = uVar19;
  local_d0 = uVar19;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar18;
    uVar16 = uVar17;
    while( true ) {
      local_f4.Key.Data.ArrayMax = (int)uVar17;
      local_d0 = (uint)uVar16;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Key.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar16 = (ulonglong)local_d0;
      local_f4.Key.Data.ArrayMax = local_f4.Key.Data.ArrayMax + 1;
      uVar17 = (ulonglong)(uint)local_f4.Key.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <
          local_f4.Key.Data.ArrayMax) goto LAB_14e3a8c7f;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14e3a8c7f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Key.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Key.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x50;
      pFVar20 = (FAttributeKey *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar20->Key).Data.ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar19;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar20->Key).Data.AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UE::Interchange::FAttributeKey>
                        ((TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
                          *)local_98,uVar13,pFVar20);
      if (iVar6 == -1) {
        pFVar15 = (FScriptContainerElement *)(lVar9 + *(longlong *)&(this->Pairs).Elements);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar15);
        TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
        ::Emplace<UE::Interchange::FAttributeKey_const_&>
                  ((TSet<UE::Interchange::FAttributeKey,DefaultKeyFuncs<UE::Interchange::FAttributeKey,0>,FDefaultSetAllocator>
                    *)local_98,&local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x50 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UE::Interchange::FAttributeKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Interchange::FAttributeKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Interchange::FAttributeKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e3a8e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UObject>,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  FString *pFVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14e3a9159;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14e3a9159;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14e3a8fa0;
      }
    }
    else {
LAB_14e3a8fa0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar17;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar13 = *puVar18;
      uVar16 = uVar17;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14e3a90a0;
        uVar13 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14e3a90a0:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar19;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14e3a9159:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar17;
  local_f4.Data.ArrayMax = uVar19;
  local_d0 = uVar19;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar18;
    uVar16 = uVar17;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar17;
      local_d0 = (uint)uVar16;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar16 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar17 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14e3a91ff;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14e3a91ff:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x20;
      pFVar20 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar20->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar19;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar20);
      if (iVar6 == -1) {
        pFVar15 = (FScriptContainerElement *)(lVar9 + *(longlong *)&(this->Pairs).Elements);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar15);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x20 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 14e4357f0

FInterchangePipelinePropertyStates * __thiscall
TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
::Find(TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FInterchangePipelinePropertyStates *pFVar5;
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
          pFVar5 = (FInterchangePipelinePropertyStates *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FInterchangePipelinePropertyStates *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FInterchangePipelinePropertyStates *)0x0;
}

// Find @ 14e435890

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14e4359a0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
::FindChecked(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e435a40

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
::FindChecked(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e435ae0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
::FindChecked(TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e435b80

TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> * __thiscall
TMapBase<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
::FindChecked(TMapBase<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *pTVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *)(*pcVar1)();
  return pTVar4;
}

// Remove @ 14e451bc0

int __thiscall
TMapBase<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
::Remove(TMapBase<FString,TObjectPtr<UInterchangeBaseNode>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

