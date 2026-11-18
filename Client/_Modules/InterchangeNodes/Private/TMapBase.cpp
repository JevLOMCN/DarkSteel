// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// Emplace<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_> @ 14e47f0d0

TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
* __thiscall
TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
::
Emplace<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
          (TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
           *this,int *param_1,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
  *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x40 + 4 + lVar8);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  pTVar7 = (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
            *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)&param_2->field_0x8 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = *(undefined4 *)&param_2->field_0x10;
    *(undefined4 *)((longlong)local_28.Pointer + 0x1c) = *(undefined4 *)&param_2->field_0x14;
    *(undefined8 *)&param_2->field_0x10 = 0;
    uVar4 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar4;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = *(undefined8 *)&param_2->field_0x20;
    *(undefined8 *)&param_2->field_0x20 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = *(undefined4 *)&param_2->field_0x28;
    *(undefined4 *)((longlong)local_28.Pointer + 0x34) = *(undefined4 *)&param_2->field_0x2c;
    *(undefined8 *)&param_2->field_0x28 = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x38) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  uVar3 = *(uint *)pTVar7;
  local_res8[0] = local_28.Index;
  bVar5 = TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,pTVar7,local_res8[0]);
  }
  return (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar8 * 0x40);
}

