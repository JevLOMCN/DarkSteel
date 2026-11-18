// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 19

// Emplace<FName_const_&,FNodeColors_const_&> @ 14440e380

FNodeColors * __thiscall
TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>::
Emplace<FName_const_&,FNodeColors_const_&>
          (TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
           *this,FName *param_1,FNodeColors *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FNodeColors>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)((longlong)&(param_2->NodeTitleColor).field0_0x0 + 8);
    *(undefined8 *)((longlong)local_28.Pointer + 8) =
         *(undefined8 *)&(param_2->NodeTitleColor).field0_0x0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)((longlong)&(param_2->NodeBodyTintColor).field0_0x0 + 8);
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) =
         *(undefined8 *)&(param_2->NodeBodyTintColor).field0_0x0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FNodeColors *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x30);
}

// Emplace<FName_const_&,FPinSettings_const_&> @ 14440e4c0

FPinSettings * __thiscall
TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
::Emplace<FName_const_&,FPinSettings_const_&>
          (TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
           *this,FName *param_1,FPinSettings *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x24);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x24) = 0xffffffff;
    }
  }
  TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FPinSettings>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)((longlong)&(param_2->PinColor).field0_0x0 + 8);
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)&(param_2->PinColor).field0_0x0
    ;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    *(float *)((longlong)local_28.Pointer + 0x18) = param_2->WireThickness;
    *(undefined4 *)((longlong)local_28.Pointer + 0x1c) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FPinSettings *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x24 + 8);
}

// EmplaceByHash<FGuid_const_&> @ 144410470

FData * __thiscall
TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
::EmplaceByHash<FGuid_const_&>
          (TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->C;
    uStack_20 = 0;
    local_28 = 0;
    local_18 = 0;
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (FData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x30);
}

// EmplaceByHash<FName_const_&> @ 1444105c0

FNodeColors * __thiscall
TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>::
EmplaceByHash<FName_const_&>
          (TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FNodeColors>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FNodeColors>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FNodeColors>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)local_18.Pointer + 0x1c) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x24) = 0x3f800000;
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FNodeColors *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x30);
}

// EmplaceByHash<FName_const_&> @ 144410700

FPinSettings * __thiscall
TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FPinSettings>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x24,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x24);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x24) = 0xffffffff;
    }
  }
  TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FPinSettings>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FPinSettings>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0x3f800000;
    *(undefined4 *)((longlong)local_18.Pointer + 0x1c) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FPinSettings *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x24 + 8);
}

// EmplaceByHash<FGuid> @ 144410830

FData * __thiscall
TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
::EmplaceByHash<FGuid>
          (TMapBase<FGuid,UE::Dataflow::FContextPerfData::FData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *pTVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  pTVar6 = (TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>_> *)0x0) {
    uVar3 = *(undefined8 *)&param_2->C;
    uStack_20 = 0;
    local_28 = 0;
    local_18 = 0;
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar3;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar6 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar6,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FGuid,UE::Dataflow::FContextPerfData::FData>,TDefaultMapHashableKeyFuncs<FGuid,UE::Dataflow::FContextPerfData::FData,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar6,local_res8[0]);
  }
  return (FData *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar7 * 0x30);
}

// FindOrAddImpl<FName_const_&> @ 1444111e0

FNodeColors * __thiscall
TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FNodeColors *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FNodeColors *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar3;
}

// FindOrAddImpl<FName_const_&> @ 144411260

FPinSettings * __thiscall
TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FPinSettings *pFVar4;
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
        lVar1 = lVar2 + (longlong)iVar3 * 0x24;
        if (*(FName *)(lVar2 + (longlong)iVar3 * 0x24) == *param_2) {
          if (lVar1 != 0) {
            return (FPinSettings *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x1c);
      } while (iVar3 != -1);
    }
  }
  pFVar4 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pFVar4;
}

// FindOrAddImpl<FName_const_&> @ 1444112e0

TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 144412160

void __thiscall
TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
           *this,TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_144412233;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_144412233:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1444123b0

void __thiscall
TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
           *this,TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_144412483;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_144412483:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> @ 1444128f0

int __thiscall
TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
          (TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
           *this,TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint local_res8 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  iVar2 = *(int *)&(param_1->Elements).field_0x8;
  iVar7 = *(int *)&(param_1->Elements).field_0x34;
  if (iVar2 != iVar7) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(param_1)
    ;
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    iVar2 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
      iVar2 = *(int *)&(param_1->Elements).field_0x8;
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    iVar7 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  uVar6 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar3 = 1;
  if ((uint)(iVar2 - iVar7) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,uVar6);
    if (uVar6 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((param_1->HashSize == 0) || (param_1->HashSize < iVar2)) {
      param_1->HashSize = iVar2;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(param_1);
    }
  }
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_70.Array;
    }
    uVar6 = *puVar8;
    while (uVar6 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_144412a28;
      uVar6 = puVar8[lVar4 + 1];
    }
    uVar3 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_144412a28:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  uStack_44 = uVar3;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uVar3;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Emplace<unsigned_int_const_&>
                (param_1,local_res8,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0x18));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// Find @ 1444460c0

FDataflowInput ** __thiscall
TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
::Find(TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
       *this,FConnectionKey *param_1)

{
  int iVar1;
  FDataflowInput **ppFVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = param_1->Offset;
  uVar4 = param_1->ContainerIndex + -0x61c88647 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  iVar1 = TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowInput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Dataflow::FConnectionKey>
                    (&this->Pairs,
                     param_1->ContainerElementOffset + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                     uVar4,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar2 = (FDataflowInput **)0x0;
    if (lVar3 != 0) {
      ppFVar2 = (FDataflowInput **)(lVar3 + 0x10);
    }
    return ppFVar2;
  }
  return (FDataflowInput **)0x0;
}

// Find @ 144446150

FDataflowOutput ** __thiscall
TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
::Find(TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
       *this,FConnectionKey *param_1)

{
  int iVar1;
  FDataflowOutput **ppFVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = param_1->Offset;
  uVar4 = param_1->ContainerIndex + -0x61c88647 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  iVar1 = TSet<TTuple<UE::Dataflow::FConnectionKey,FDataflowOutput_*>,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Dataflow::FConnectionKey>
                    (&this->Pairs,
                     param_1->ContainerElementOffset + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^
                     uVar4,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar2 = (FDataflowOutput **)0x0;
    if (lVar3 != 0) {
      ppFVar2 = (FDataflowOutput **)(lVar3 + 0x10);
    }
    return ppFVar2;
  }
  return (FDataflowOutput **)0x0;
}

// Find @ 1444461e0

FTypeInfo * __thiscall
TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
::Find(TMapBase<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Dataflow::FAnyTypesRegistry::FTypeInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FTypeInfo *pFVar4;
  
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
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FTypeInfo *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FTypeInfo *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FTypeInfo *)0x0;
}

// FindChecked @ 144446460

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall
TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
::FindChecked(TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar6;
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
            return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                    *)(lVar1 + 8);
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
    return (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 144446500

FDataflowConnection ** __thiscall
TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
::FindChecked(TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
              *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  FDataflowConnection **ppFVar5;
  longlong lVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar4,param_1);
  if ((iVar3 != -1) &&
     (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FDataflowConnection **)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDataflowConnection **)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  ppFVar5 = (FDataflowConnection **)(*pcVar1)();
  return ppFVar5;
}

// FindChecked @ 144446590

TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
* __thiscall
TMapBase<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>_>
::FindChecked(TMapBase<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
  *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
                    *)(pFVar6 + 2);
          }
          break;
        }
        uVar3 = pFVar6[8].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
            *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TFunction<TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_>___cdecl(UE::Dataflow::FNewNodeParameters_const_&)>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 144446650

TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
* __thiscall
TMapBase<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>_>
::FindChecked(TMapBase<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
  *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
                    *)(pFVar6 + 2);
          }
          break;
        }
        uVar3 = pFVar6[8].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
            *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TFunction<UE::Dataflow::FContextCacheElementBase_*___cdecl(FArchive_&,UE::Dataflow::FContextCacheElementBase_*)>
            *)(*pcVar1)();
  return pTVar4;
}

