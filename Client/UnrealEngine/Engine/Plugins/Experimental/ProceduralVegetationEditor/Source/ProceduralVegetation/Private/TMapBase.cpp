// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// Emplace<FString_const_&,FManagedArrayCollection_const_&> @ 14da5a110

FManagedArrayCollection * __thiscall
TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
::Emplace<FString_const_&,FManagedArrayCollection_const_&>
          (TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
           *this,FString *param_1,FManagedArrayCollection *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 200 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 200 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xc0) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FManagedArrayCollection *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 200 + 0x10);
}

// Emplace<FString,FManagedArrayCollection_const_&> @ 14da5a4a0

FManagedArrayCollection * __thiscall
TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
::Emplace<FString,FManagedArrayCollection_const_&>
          (TMapBase<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
           *this,FString *param_1,FManagedArrayCollection *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 200 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 200 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<200,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FManagedArrayCollection>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    FManagedArrayCollection::FManagedArrayCollection
              ((FManagedArrayCollection *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xc0) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FManagedArrayCollection>,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FManagedArrayCollection *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 200 + 0x10);
}

