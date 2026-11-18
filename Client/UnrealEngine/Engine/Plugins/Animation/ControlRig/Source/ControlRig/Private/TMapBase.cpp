// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 62

// Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&> @ 14a20fae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::
Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
          (TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
    ::
    operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_18.Pointer + 4);
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = (uint)*(byte *)local_18.Pointer + (uVar6 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  bVar4 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> @ 14a20fc20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
           *this,FRigElementKey *param_1,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
  *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer ==
      (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    pTVar8 = (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
              *)0x0;
  }
  else {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 0x10) =
         (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x18) = param_2->ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x1c) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)&pTVar8->field_0x4;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = (uint)*(byte *)pTVar8 + (uVar6 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  bVar4 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x28 + 0x10);
}

// Emplace<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 14a20ffa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::
Emplace<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  TPairInitializer<FRigElementKey_&&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>
       *)0x0) {
    TPairInitializer<FRigElementKey_&&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&&>
    ::
    operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_18.Pointer + 4);
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = (uint)*(byte *)local_18.Pointer + (uVar6 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  bVar4 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// EmplaceByHash<FRigElementKey_const_&> @ 14a212b50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FRigElementKey_const_&>
          (TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(undefined8 *)local_18.Pointer = *(undefined8 *)param_2;
    *(uint *)((longlong)local_18.Pointer + 8) = (param_2->Name).Number;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x28 + 0x10);
}

// FindOrAddImpl<FRigComponentKey_const_&,TSharedPtr<FRigPhysicsSimulationBase,1>_const_&> @ 14a215310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TSharedPtr<FRigPhysicsSimulationBase,1> * __thiscall
TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
::FindOrAddImpl<FRigComponentKey_const_&,TSharedPtr<FRigPhysicsSimulationBase,1>_const_&>
          (TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
           *this,uint param_1,FRigComponentKey *param_2,
          TSharedPtr<FRigPhysicsSimulationBase,1> *param_3)

{
  int iVar1;
  longlong lVar2;
  TSharedPtr<FRigPhysicsSimulationBase,1> *pTVar3;
  int local_res8 [2];
  FRigComponentKey *local_18;
  TSharedPtr<FRigPhysicsSimulationBase,1> *local_10;
  
  iVar1 = TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigComponentKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 == 0)) {
    local_18 = param_2;
    local_10 = param_3;
    TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<FRigComponentKey_const_&,TSharedPtr<FRigPhysicsSimulationBase,1>_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TPairInitializer<FRigComponentKey_const_&,TSharedPtr<FRigPhysicsSimulationBase,1>_const_&>
                *)(ulonglong)param_1,(bool *)&local_18);
    pTVar3 = (TSharedPtr<FRigPhysicsSimulationBase,1> *)
             (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x30);
  }
  else {
    pTVar3 = (TSharedPtr<FRigPhysicsSimulationBase,1> *)(lVar2 + 0x18);
  }
  return pTVar3;
}

// FindOrAddImpl<FRigElementKey_const_&> @ 14a2153b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElementCustomization * __thiscall
TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
::FindOrAddImpl<FRigElementKey_const_&>
          (TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FRigElementKey *local_res20;
  
  iVar1 = TSet<TTuple<FRigElementKey,FRigControlElementCustomization>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigElementKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRigControlElementCustomization *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FRigElementKey,FRigControlElementCustomization>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRigElementKey_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRigElementKey_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRigControlElementCustomization *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// FindOrAddImpl<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_> @ 14a215440

TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_>
          (TMapBase<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr>::
              UEOpEquals<UControlRigComponent,bool>
                        ((TWeakObjectPtr<UControlRigComponent_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x20;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_> *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>,TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_&&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UControlRigComponent,FWeakObjectPtr>_&&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FSkeletalMeshToMap,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8.ObjectIndex * 0x20 + 8);
}

// FindOrAddImpl<FMeshPoseBoneIndex> @ 14a215520

TTransform<double> * __thiscall
TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
::FindOrAddImpl<FMeshPoseBoneIndex>
          (TMapBase<FMeshPoseBoneIndex,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>_>
           *this,uint param_1,FMeshPoseBoneIndex *param_2)

{
  FMeshPoseBoneIndex FVar1;
  FMeshPoseBoneIndex *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FMeshPoseBoneIndex *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar1 = *(FMeshPoseBoneIndex *)
             ((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (FVar1 != (FMeshPoseBoneIndex)0xffffffff) {
      do {
        pFVar2 = (FMeshPoseBoneIndex *)
                 ((longlong)(int)FVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FMeshPoseBoneIndex *)0x0) {
            return (TTransform<double> *)(pFVar2 + 4);
          }
          break;
        }
        FVar1 = pFVar2[0x1c];
      } while (FVar1 != (FMeshPoseBoneIndex)0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FMeshPoseBoneIndex,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FMeshPoseBoneIndex,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMeshPoseBoneIndex_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMeshPoseBoneIndex_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TTransform<double> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x80 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a215be0

void __thiscall
TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a215cc2;
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
LAB_14a215cc2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x120 + *(longlong *)&(this->Pairs).Elements)
      ;
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
                          (0x408,&param_1->AllocatorInstance,piVar1);
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

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a215e30

void __thiscall
TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a215f12;
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
LAB_14a215f12:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
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
                          (0x408,&param_1->AllocatorInstance,piVar1);
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

// Find @ 14a25a3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TSharedPtr<FRigPhysicsSimulationBase,1> * __thiscall
TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
::Find(TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
       *this,FRigComponentKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TSharedPtr<FRigPhysicsSimulationBase,1> *pTVar6;
  longlong lVar7;
  
  FVar1 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->ElementKey).Name;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar5 = TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigComponentKey>
                    (&this->Pairs,
                     (uVar3 + FVar1.Number) * 0xf + (uVar4 + FVar2.Number) * 10 +
                     (uint)(param_1->ElementKey).Type,param_1);
  if (iVar5 == -1) {
    pTVar6 = (TSharedPtr<FRigPhysicsSimulationBase,1> *)0x0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TSharedPtr<FRigPhysicsSimulationBase,1> *)0x0;
    if (lVar7 != 0) {
      pTVar6 = (TSharedPtr<FRigPhysicsSimulationBase,1> *)(lVar7 + 0x18);
    }
  }
  return pTVar6;
}

// Find @ 14a25a460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
::Find(TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
       *this,FRigElementKey *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  FVar2 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar4 = TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigElementKey>
                    (&this->Pairs,(uint)param_1->Type + (uVar3 + FVar2.Number) * 10,param_1);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x18;
    piVar5 = (int *)0x0;
    if (lVar1 != 0) {
      piVar5 = (int *)(lVar1 + 0xc);
    }
    return piVar5;
  }
  return (int *)0x0;
}

// Find @ 14a25a4f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElementCustomization * __thiscall
TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
::Find(TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
       *this,FRigElementKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FRigControlElementCustomization *pFVar4;
  longlong lVar5;
  
  FVar1 = param_1->Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  iVar3 = TSet<TTuple<FRigElementKey,FRigControlElementCustomization>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigElementKey>
                    (&this->Pairs,(uint)param_1->Type + (uVar2 + FVar1.Number) * 10,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pFVar4 = (FRigControlElementCustomization *)0x0;
    if (lVar5 != 0) {
      pFVar4 = (FRigControlElementCustomization *)(lVar5 + 0x10);
    }
    return pFVar4;
  }
  return (FRigControlElementCustomization *)0x0;
}

// Find @ 14a25a570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
::Find(TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
       *this,FRigElementKey *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  FVar2 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar4 = TSet<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigElementKey>
                    (&this->Pairs,(uint)param_1->Type + (uVar3 + FVar2.Number) * 10,param_1);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x48;
    pTVar5 = (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             0x0;
    if (lVar1 != 0) {
      pTVar5 = (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
               )(lVar1 + 0x10);
    }
    return pTVar5;
  }
  return (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// Find @ 14a25a600

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
          pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14a25a6a0

TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
          pTVar4 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14a25a8c0

FModularRigModuleSettingsForClipboard * __thiscall
TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
::FindChecked(TMapBase<FName,FModularRigModuleSettingsForClipboard,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FModularRigModuleSettingsForClipboard,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FModularRigModuleSettingsForClipboard *pFVar4;
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
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x120 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (FModularRigModuleSettingsForClipboard *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[0x23].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FModularRigModuleSettingsForClipboard *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FModularRigModuleSettingsForClipboard *)(*pcVar1)();
  return pFVar4;
}

// Emplace<FRigComponentKey_const_&,int_const_&> @ 14a2ce800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
::Emplace<FRigComponentKey_const_&,int_const_&>
          (TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
           *this,FRigComponentKey *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar9);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigComponentKey,int>_> *)0x0) {
    uVar3 = *(undefined8 *)&(param_1->ElementKey).Name.Number;
    *(undefined8 *)local_28.Pointer = *(undefined8 *)&param_1->ElementKey;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(uint *)((longlong)local_28.Pointer + 0x10) = (param_1->Name).Number;
    *(int *)((longlong)local_28.Pointer + 0x14) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 0xc);
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = (uVar7 + (int)((ulonglong)uVar3 >> 0x20)) * 0xf +
          (uVar8 + (int)((ulonglong)uVar4 >> 0x20)) * 10 + (uint)*(byte *)local_28.Pointer;
  bVar5 = TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 0x14 + lVar9 * 0x20);
}

// Emplace<FRigComponentKey_const_&,int> @ 14a2ce960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
::Emplace<FRigComponentKey_const_&,int>
          (TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
           *this,FRigComponentKey *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar9);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigComponentKey,int>_> *)0x0) {
    uVar3 = *(undefined8 *)&(param_1->ElementKey).Name.Number;
    *(undefined8 *)local_28.Pointer = *(undefined8 *)&param_1->ElementKey;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = uVar3;
    *(uint *)((longlong)local_28.Pointer + 0x10) = (param_1->Name).Number;
    *(int *)((longlong)local_28.Pointer + 0x14) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 0xc);
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar4 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  uVar7 = (uVar7 + (int)((ulonglong)uVar3 >> 0x20)) * 0xf +
          (uVar8 + (int)((ulonglong)uVar4 >> 0x20)) * 10 + (uint)*(byte *)local_28.Pointer;
  bVar5 = TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 0x14 + lVar9 * 0x20);
}

// Emplace<FRigElementKey_const_&,int_const_&> @ 14a2ceac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
::Emplace<FRigElementKey_const_&,int_const_&>
          (TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
           *this,FRigElementKey *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,int>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    *(int *)((longlong)local_28.Pointer + 0xc) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar5 = (uint)*(byte *)local_28.Pointer + (uVar5 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar6 = (longlong)iVar8;
        if ((*(longlong *)(lVar2 + 4 + lVar6 * 0x18) ==
             *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(byte *)(lVar2 + lVar6 * 0x18) == *(byte *)local_28.Pointer)) {
          if (iVar8 != -1) {
            memmove((void *)(lVar2 + (longlong)iVar8 * 0x18),local_28.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2cec5b;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14a2cec5b:
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar8 * 0x18 + 0xc);
}

// Emplace<FRigElementKey_const_&,FRigElementKey_const_&> @ 14a2ceca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::Emplace<FRigElementKey_const_&,FRigElementKey_const_&>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    *(undefined8 *)((longlong)local_28.Pointer + 0xc) = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 0x14) = (param_2->Name).Number;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar5 = (uint)*(byte *)local_28.Pointer + (uVar5 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar6 = (longlong)iVar8 * 0x20;
        if ((*(longlong *)(lVar6 + 4 + lVar2) == *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(byte *)(lVar6 + lVar2) == *(byte *)local_28.Pointer)) {
          if (iVar8 != -1) {
            memmove((void *)((longlong)iVar8 * 0x20 + *(longlong *)&(this->Pairs).Elements),
                    local_28.Pointer,0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2cee48;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14a2cee48:
  return (FRigElementKey *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar8 * 0x20);
}

// Emplace<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&> @ 14a2cee80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMetadataStorage * __thiscall
TMapBase<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
::Emplace<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&>
          (TMapBase<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
           *this,FRigElementKey *param_1,FMetadataStorage *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  TPairInitializer<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_> *)0x0) {
    TPairInitializer<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&>::
    operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x70) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_18.Pointer + 4);
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = (uint)*(byte *)local_18.Pointer + (uVar6 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  bVar4 = TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FMetadataStorage *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x78 + 0x10);
}

// Emplace<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&> @ 14a2cf150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
::Emplace<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&>
          (TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
           *this,FRigHierarchyKey *param_1,FRigHierarchyKey *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int local_res8 [2];
  TPairInitializer<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x58 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_> *)0x0) {
    TPairInitializer<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&>::
    operator<FRigHierarchyKey,FRigHierarchyKey>_TTuple<FRigHierarchyKey,FRigHierarchyKey>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x50) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  if (*(undefined1 *)((longlong)local_18.Pointer + 0xc) == '\0') {
    if (*(undefined1 *)((longlong)local_18.Pointer + 0x24) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = ::GetTypeHash((FRigComponentKey *)((longlong)local_18.Pointer + 0x10));
    }
  }
  else {
    uVar4 = *(undefined8 *)((longlong)local_18.Pointer + 4);
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    uVar7 = (uint)*(byte *)local_18.Pointer + (uVar7 + (int)((ulonglong)uVar4 >> 0x20)) * 10;
  }
  bVar5 = TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar5) {
    TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_18.Pointer,local_res8[0]);
  }
  return (FRigHierarchyKey *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x58 + 0x28);
}

// Emplace<FRigElementKey,FRigElementKey_const_&> @ 14a2cf4d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::Emplace<FRigElementKey,FRigElementKey_const_&>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    *(undefined8 *)((longlong)local_28.Pointer + 0xc) = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 0x14) = (param_2->Name).Number;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar5 = (uint)*(byte *)local_28.Pointer + (uVar5 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar6 = (longlong)iVar8 * 0x20;
        if ((*(longlong *)(lVar6 + 4 + lVar2) == *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(byte *)(lVar6 + lVar2) == *(byte *)local_28.Pointer)) {
          if (iVar8 != -1) {
            memmove((void *)((longlong)iVar8 * 0x20 + *(longlong *)&(this->Pairs).Elements),
                    local_28.Pointer,0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2cf678;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14a2cf678:
  return (FRigElementKey *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar8 * 0x20);
}

// Emplace<FRigElementKey,FRigElementKey> @ 14a2cf6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::Emplace<FRigElementKey,FRigElementKey>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_28;
  
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_1;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_1->Name).Number;
    *(undefined8 *)((longlong)local_28.Pointer + 0xc) = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 0x14) = (param_2->Name).Number;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 4);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar5 = (uint)*(byte *)local_28.Pointer + (uVar5 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  iVar8 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar6 = (longlong)iVar8 * 0x20;
        if ((*(longlong *)(lVar6 + 4 + lVar2) == *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(byte *)(lVar6 + lVar2) == *(byte *)local_28.Pointer)) {
          if (iVar8 != -1) {
            memmove((void *)((longlong)iVar8 * 0x20 + *(longlong *)&(this->Pairs).Elements),
                    local_28.Pointer,0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2cf858;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_28.Index);
  iVar8 = local_28.Index;
LAB_14a2cf858:
  return (FRigElementKey *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar8 * 0x20);
}

// Emplace<FRigHierarchyKey,FRigHierarchyKey> @ 14a2cfa20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
::Emplace<FRigHierarchyKey,FRigHierarchyKey>
          (TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
           *this,FRigHierarchyKey *param_1,FRigHierarchyKey *param_2)

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
                      (0x58,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x58 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_> *)0x0) {
    TTuple<FRigHierarchyKey,FRigHierarchyKey>::
    TTuple<FRigHierarchyKey,FRigHierarchyKey><FRigHierarchyKey,FRigHierarchyKey>
              (local_28.Pointer,param_1,param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x50) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  if (*(undefined1 *)((longlong)local_28.Pointer + 0xc) == '\0') {
    if (*(undefined1 *)((longlong)local_28.Pointer + 0x24) == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = ::GetTypeHash((FRigComponentKey *)((longlong)local_28.Pointer + 0x10));
    }
  }
  else {
    uVar3 = *(undefined8 *)((longlong)local_28.Pointer + 4);
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar6 = (uint)*(byte *)local_28.Pointer + (uVar6 + (int)((ulonglong)uVar3 >> 0x20)) * 10;
  }
  bVar4 = TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FRigHierarchyKey *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x58 + 0x28);
}

// EmplaceByHash<FRigElementKey_const_&> @ 14a2d03d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
::EmplaceByHash<FRigElementKey_const_&>
          (TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,int>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_2->Name).Number;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar6 - iVar3 != 1) && (iVar6 != iVar3)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar4 = (longlong)iVar6;
        if ((*(longlong *)(lVar2 + 4 + lVar4 * 0x18) ==
             *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(char *)(lVar2 + lVar4 * 0x18) == *(char *)local_28.Pointer)) {
          if (iVar6 != -1) {
            memmove((void *)(lVar2 + (longlong)iVar6 * 0x18),local_28.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2d054d;
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14a2d054d:
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar6 * 0x18 + 0xc);
}

// EmplaceByHash<FRigElementKey_const_&> @ 14a2d0580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::EmplaceByHash<FRigElementKey_const_&>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  uint local_38;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_2->Name).Number;
    local_38 = local_38 & 0xffffff00;
    *(ulonglong *)((longlong)local_28.Pointer + 0xc) = (ulonglong)local_38;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar6 - iVar3 != 1) && (iVar6 != iVar3)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar4 = (longlong)iVar6 * 0x20;
        if ((*(longlong *)(lVar4 + 4 + lVar2) == *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(char *)(lVar4 + lVar2) == *(char *)local_28.Pointer)) {
          if (iVar6 != -1) {
            memmove((void *)((longlong)iVar6 * 0x20 + lVar2),local_28.Pointer,0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2d071c;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18 + lVar2);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14a2d071c:
  return (FRigElementKey *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar6 * 0x20);
}

// EmplaceByHash<FRigElementKey_const_&> @ 14a2d0750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMetadataStorage * __thiscall
TMapBase<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
::EmplaceByHash<FRigElementKey_const_&>
          (TMapBase<FRigElementKey,URigHierarchy::FMetadataStorage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<FRigElementKey_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar3);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_> *)0x0) {
    TKeyInitializer<FRigElementKey_const_&>::
    operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x70) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (FMetadataStorage *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x78 + 0x10);
}

// EmplaceByHash<FRigElementKey> @ 14a2d0870

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::EmplaceByHash<FRigElementKey>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,uint param_1,FRigElementKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  uint local_38;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar2 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FRigElementKey,FRigElementKey>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = *(undefined8 *)param_2;
    *(uint *)((longlong)local_28.Pointer + 8) = (param_2->Name).Number;
    local_38 = local_38 & 0xffffff00;
    *(ulonglong *)((longlong)local_28.Pointer + 0xc) = (ulonglong)local_38;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x34;
  if ((iVar6 - iVar3 != 1) && (iVar6 != iVar3)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar4 = (longlong)iVar6 * 0x20;
        if ((*(longlong *)(lVar4 + 4 + lVar2) == *(longlong *)((longlong)local_28.Pointer + 4)) &&
           (*(char *)(lVar4 + lVar2) == *(char *)local_28.Pointer)) {
          if (iVar6 != -1) {
            memmove((void *)((longlong)iVar6 * 0x20 + lVar2),local_28.Pointer,0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            goto LAB_14a2d0a0c;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18 + lVar2);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<FRigElementKey,FRigElementKey>,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_28.Index);
  iVar6 = local_28.Index;
LAB_14a2d0a0c:
  return (FRigElementKey *)(*(longlong *)&(this->Pairs).Elements + 0xc + (longlong)iVar6 * 0x20);
}

// EmplaceByHash<FRigHierarchyKey> @ 14a2d0a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
::EmplaceByHash<FRigHierarchyKey>
          (TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
           *this,uint param_1,FRigHierarchyKey *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x58 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FRigHierarchyKey,FRigHierarchyKey>_> *)0x0) {
    *(undefined1 *)((longlong)local_18.Pointer + 0xc) = 0;
    bVar4 = (param_2->Element).bIsSet;
    *(bool *)((longlong)local_18.Pointer + 0xc) = bVar4;
    if (bVar4 != false) {
      *(undefined8 *)local_18.Pointer = *(undefined8 *)&(param_2->Element).TypedValue;
      *(uint *)((longlong)local_18.Pointer + 8) = (param_2->Element).TypedValue.Name.Number;
    }
    *(undefined1 *)((longlong)local_18.Pointer + 0x24) = 0;
    bVar4 = (param_2->Component).bIsSet;
    *(bool *)((longlong)local_18.Pointer + 0x24) = bVar4;
    if (bVar4 != false) {
      uVar3 = *(undefined8 *)&(param_2->Component).TypedValue.ElementKey.Name.Number;
      *(undefined8 *)((longlong)local_18.Pointer + 0x10) =
           *(undefined8 *)&(param_2->Component).TypedValue.ElementKey;
      *(undefined8 *)((longlong)local_18.Pointer + 0x18) = uVar3;
      *(uint *)((longlong)local_18.Pointer + 0x20) = (param_2->Component).TypedValue.Name.Number;
    }
    *(undefined1 *)((longlong)local_18.Pointer + 0x34) = 0;
    *(undefined1 *)((longlong)local_18.Pointer + 0x4c) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x50) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FRigHierarchyKey *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x58 + 0x28);
}

// FindOrAddImpl<TTuple<int,int>_const_&,bool> @ 14a2d1360

bool * __thiscall
TMapBase<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
::FindOrAddImpl<TTuple<int,int>_const_&,bool>
          (TMapBase<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
           *this,uint param_1,TTuple<int,int> *param_2,bool *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TTuple<int,int> *local_18;
  bool *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if ((*(int *)(lVar2 + (longlong)iVar3 * 0x14) == *(int *)param_2) &&
           (*(int *)(lVar1 + 4) == *(int *)&param_2->field_0x4)) {
          if ((iVar3 != -1) && (lVar1 != 0)) {
            return (bool *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<TTuple<int,int>,bool>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<TTuple<int,int>_const_&,bool_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<TTuple<int,int>_const_&,bool_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14 + 8);
}

// FindOrAddImpl<FRigHierarchyRecord_const_&> @ 14a2d1450

TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FRigHierarchyRecord_const_&>
          (TMapBase<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FRigHierarchyRecord *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FRigHierarchyRecord *local_res20;
  
  iVar1 = TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigHierarchyRecord>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator> *)
           (lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRigHierarchyRecord_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRigHierarchyRecord_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a2d15c0

void __thiscall
TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
           *this,TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar15;
    while (uVar4 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14a2d16a2;
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
LAB_14a2d16a2:
  TStack_40._padding_ = CONCAT44(uVar13,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)*piVar1 * 0x14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar12 + 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar11 * 0x14;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)(pFVar5 + 8) = uVar8;
      *(undefined4 *)(pFVar6 + (longlong)iVar11 * 0x14 + 0x10) = *(undefined4 *)(pFVar12 + 0x10);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14a2d1820

void __thiscall
TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FRigElementKey,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigElementKey,0>_>
           *this,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

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
              (0xc,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14a2d1902;
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
LAB_14a2d1902:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 0xc +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 0xc)) &&
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
                          (0x40c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0xc) = *(undefined8 *)pFVar10;
      *(undefined4 *)(pFVar5 + (longlong)iVar9 * 0xc + 8) = *(undefined4 *)(pFVar10 + 8);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14a2d2900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14a2d2bb6;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14a2d2bb6;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14a2d2a15;
      }
    }
    else {
LAB_14a2d2a15:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar13 = *(uint *)FVar18;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar17 = (int)uVar10;
        local_168 = iVar17 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14a2d2b12;
        uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14a2d2b12:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar4 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14a2d2bb6:
  iVar17 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a2d2c5e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_14a2d2c5e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar3) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x18)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar9.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar11) goto LAB_14a2d2dde;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar20 * 0x18);
      pFVar5 = (param_1->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar17 = (*pcVar6)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x18));
LAB_14a2d2dde:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 14a304a90

bool * __thiscall
TMapBase<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
::Find(TMapBase<TTuple<int,int>,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,bool,0>_>
       *this,TTuple<int,int> *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  bool *pbVar5;
  int iVar6;
  
  uVar2 = *(uint *)param_1;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar2 * 0x40 + *(int *)&param_1->field_0x4 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2)
                    ) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x14;
        if ((*(uint *)(lVar3 + (longlong)iVar6 * 0x14) == uVar2) &&
           (*(int *)(lVar1 + 4) == *(int *)&param_1->field_0x4)) {
          if (iVar6 == -1) {
            return (bool *)0x0;
          }
          pbVar5 = (bool *)0x0;
          if (lVar1 != 0) {
            pbVar5 = (bool *)(lVar1 + 8);
          }
          return pbVar5;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return (bool *)0x0;
}

// Find @ 14a304b40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int * __thiscall
TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
::Find(TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
       *this,FRigComponentKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  FVar1 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_1->ElementKey).Name;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar5 = TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigComponentKey>
                    (&this->Pairs,
                     (uVar3 + FVar1.Number) * 0xf + (uVar4 + FVar2.Number) * 10 +
                     (uint)(param_1->ElementKey).Type,param_1);
  if (iVar5 == -1) {
    piVar6 = (int *)0x0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    piVar6 = (int *)0x0;
    if (lVar7 != 0) {
      piVar6 = (int *)(lVar7 + 0x14);
    }
  }
  return piVar6;
}

// Find @ 14a304bd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
::Find(TMapBase<FRigHierarchyKey,FRigHierarchyKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>_>
       *this,FRigHierarchyKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  FRigHierarchyKey *pFVar5;
  
  if ((param_1->Element).bIsSet == false) {
    if ((param_1->Component).bIsSet == false) {
      uVar2 = 0;
    }
    else {
      uVar2 = ::GetTypeHash(&(param_1->Component).TypedValue);
    }
  }
  else {
    FVar1 = (param_1->Element).TypedValue.Name;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    uVar2 = (uint)(param_1->Element).TypedValue.Type + (uVar2 + FVar1.Number) * 10;
  }
  iVar3 = TSet<TTuple<FRigHierarchyKey,FRigHierarchyKey>,TDefaultMapHashableKeyFuncs<FRigHierarchyKey,FRigHierarchyKey,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigHierarchyKey>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements;
    pFVar5 = (FRigHierarchyKey *)0x0;
    if (lVar4 != 0) {
      pFVar5 = (FRigHierarchyKey *)(lVar4 + 0x28);
    }
    return pFVar5;
  }
  return (FRigHierarchyKey *)0x0;
}

// Find @ 14a304c80

FName * __thiscall
TMapBase<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
::Find(TMapBase<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
       *this,FRigHierarchyModulePath *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  FString local_18;
  
  pFVar4 = ::FString::ToLower(&param_1->ModulePath,&local_18);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar5 != -1) {
      bVar2 = FRigHierarchyModulePath::operator==
                        ((FRigHierarchyModulePath *)
                         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar5 * 0x50),param_1);
      lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar5 * 0x50;
      if (bVar2) {
        if (lVar8 != 0) {
          return (FName *)(lVar8 + 0x40);
        }
        return (FName *)0x0;
      }
      iVar5 = *(int *)(lVar8 + 0x48);
    }
  }
  return (FName *)0x0;
}

// Find @ 14a304d70

FRigBaseMetadata ** __thiscall
TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
::Find(TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FRigBaseMetadata **ppFVar5;
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
          ppFVar5 = (FRigBaseMetadata **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FRigBaseMetadata **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FRigBaseMetadata **)0x0;
}

// Remove @ 14a3389e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
::Remove(TMapBase<FRigComponentKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>_>
         *this,FRigComponentKey *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar1 = param_1->Name;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    FVar2 = (param_1->ElementKey).Name;
    uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    iVar5 = TSet<TTuple<FRigComponentKey,int>,TDefaultMapHashableKeyFuncs<FRigComponentKey,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<FRigComponentKey>
                      (&this->Pairs,
                       (uVar3 + FVar1.Number) * 0xf + (uVar4 + FVar2.Number) * 10 +
                       (uint)(param_1->ElementKey).Type,param_1);
    return iVar5;
  }
  return 0;
}

// Remove @ 14a338a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
::Remove(TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
         *this,FRigElementKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar1 = param_1->Name;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar3 = TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
            ::RemoveImpl<FRigElementKey>
                      (&this->Pairs,(uint)param_1->Type + (uVar2 + FVar1.Number) * 10,param_1);
    return iVar3;
  }
  return 0;
}

// FindOrAddImpl<int_const_&> @ 14a397fd0

FAnimNode_ControlRig_ExternalSource ** __thiscall
TMapBase<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FAnimNode_ControlRig_ExternalSource_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
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
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14a398062;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FAnimNode_ControlRig_ExternalSource_*>,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14a398062:
  return (FAnimNode_ControlRig_ExternalSource **)(lVar3 + 8);
}

// FindOrAddImpl<FRigControlElement_const_*_const_&> @ 14a398080

FText * __thiscall
TMapBase<FRigControlElement_const_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigControlElement_const_*,FText,0>_>
::FindOrAddImpl<FRigControlElement_const_*_const_&>
          (TMapBase<FRigControlElement_const_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigControlElement_const_*,FText,0>_>
           *this,uint param_1,FRigControlElement **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FRigControlElement **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FRigControlElement *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FText *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FRigControlElement_const_*,FText>,TDefaultMapHashableKeyFuncs<FRigControlElement_const_*,FText,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRigControlElement_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FRigControlElement_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FText *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FMovieSceneEvaluationOperand_const_&> @ 14a398130

FMovieSceneAccumulatedBlendState * __thiscall
TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
::FindOrAddImpl<FMovieSceneEvaluationOperand_const_&>
          (TMapBase<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>_>
           *this,uint param_1,FMovieSceneEvaluationOperand *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMovieSceneEvaluationOperand *local_res20;
  
  iVar1 = TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationOperand>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMovieSceneAccumulatedBlendState *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieSceneEvaluationOperand_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMovieSceneEvaluationOperand_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMovieSceneAccumulatedBlendState *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FName_const_&> @ 14a3981d0

FControlRotationOrder * __thiscall
TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
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
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_14a398262;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14a398262:
  return (FControlRotationOrder *)(lVar3 + 8);
}

// FindOrAddImpl<FObjectKey> @ 14a398280

TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1> *
__thiscall
TMapBase<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
                    *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14a399c40

void __thiscall
TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
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
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a399d22;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14a399d22:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x14);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14a399ea0

void __thiscall
TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
           *this,TArray<TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
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
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a399f82;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14a399f82:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14a409840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FBaseControlRigEvalData ** __thiscall
TMapBase<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
::Find(TMapBase<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_*,UE::MovieScene::FBaseControlRigEvalData_*,0>_>
       *this,UControlRig *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FBaseControlRigEvalData **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UControlRig **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FBaseControlRigEvalData **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FBaseControlRigEvalData **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FBaseControlRigEvalData **)0x0;
}

// Find @ 14a4098f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMatchedControls * __thiscall
TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
::Find(TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
       *this,UControlRig *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FMatchedControls *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if ((UControlRig *)*plVar2 == param_1) {
          pFVar4 = (FMatchedControls *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FMatchedControls *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[0xb];
      } while (iVar1 != -1);
    }
  }
  return (FMatchedControls *)0x0;
}

// Find @ 14a4099a0

FControlRigAnimTypeIDsAnnotation * __thiscall
TMapBase<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>_>
::Find(void *this,UObjectBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FControlRigAnimTypeIDsAnnotation *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)this);
        if ((UObjectBase *)*plVar2 == param_1) {
          pFVar4 = (FControlRigAnimTypeIDsAnnotation *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FControlRigAnimTypeIDsAnnotation *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (FControlRigAnimTypeIDsAnnotation *)0x0;
}

// Find @ 14a409a40

ushort * __thiscall
TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>_>
::Find(TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FEntityGroupID>,unsigned_short,0>_>
       *this,TOverlappingEntityInput<UE::MovieScene::FEntityGroupID> *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = *(uint *)&(param_1->Key).field_0x4;
  uVar8 = *(int *)&param_1->Key - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == *(int *)&param_1->Key) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (ushort *)0x0;
          }
          puVar6 = (ushort *)0x0;
          if (lVar1 != 0) {
            puVar6 = (ushort *)(lVar1 + 0xc);
          }
          return puVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (ushort *)0x0;
}

// Find @ 14a409b50

TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> * __thiscall
TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
::Find(TMapBase<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
       *this,FMovieSceneEvaluationKey *param_1)

{
  int iVar1;
  TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *pTVar2;
  longlong lVar3;
  
  iVar1 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationKey>
                    (&this->Pairs,
                     ~(param_1->TrackIdentifier).Value ^ param_1->SectionIndex ^
                     (param_1->SequenceID).Value,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar2 = (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)0x0
    ;
    if (lVar3 != 0) {
      pTVar2 = (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)
               (lVar3 + 0x10);
    }
    return pTVar2;
  }
  return (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)0x0;
}

// Find @ 14a409ba0

int * __thiscall
TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>::Find
          (TMapBase<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>_>
           *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x14;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x14) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (int *)0x0;
          }
          piVar6 = (int *)0x0;
          if (lVar1 != 0) {
            piVar6 = (int *)(lVar1 + 8);
          }
          return piVar6;
        }
        iVar9 = *(int *)(lVar1 + 0xc);
      } while (iVar9 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 14a409cb0

TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> * __thiscall
TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
::Find(TMapBase<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> *pTVar5;
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
          pTVar5 = (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> *)0x0;
}

// Find @ 14a409d50

FChannelMapInfo * __thiscall
TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
::Find(TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FChannelMapInfo *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FChannelMapInfo *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FChannelMapInfo *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[9].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FChannelMapInfo *)0x0;
}

// Find @ 14a409df0

FControlRotationOrder * __thiscall
TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
::Find(TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FControlRotationOrder *pFVar5;
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
        lVar1 = lVar2 + (longlong)iVar4 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == param_1) {
          pFVar5 = (FControlRotationOrder *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FControlRotationOrder *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (FControlRotationOrder *)0x0;
}

// Find @ 14a409e90

FNodeItem * __thiscall
TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>::Find
          (TMapBase<FName,FNodeItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeItem,0>_>
           *this,FName param_1)

{
  uint uVar1;
  FNodeItem *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FNodeItem *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FNodeItem *)(pFVar4 + 2);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x10].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FNodeItem *)0x0;
}

// Remove @ 14a43b5f0

int __thiscall
TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
::Remove(TMapBase<FName,FControlRotationOrder,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>_>
         *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,FControlRotationOrder>,TDefaultMapHashableKeyFuncs<FName,FControlRotationOrder,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,local_res10.Number + uVar1,&local_res8);
    return iVar2;
  }
  return 0;
}

// Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&> @ 14a4ffd50

FRigElementKeyCollection * __thiscall
TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
          (TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
           *this,uint *param_1,FRigElementKeyCollection *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FRigElementKeyCollection_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar4 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar4);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar6);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,FRigElementKeyCollection>_> *)0x0)
  {
    TPairInitializer<unsigned_int_const_&,FRigElementKeyCollection_const_&>::
    operator<unsigned_int,FRigElementKeyCollection>_TTuple<unsigned_int,FRigElementKeyCollection>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(uint *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  bVar5 = TSet<TTuple<unsigned_int,FRigElementKeyCollection>,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar5) {
    TSet<TTuple<unsigned_int,FRigElementKeyCollection>,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_18.Pointer,local_res8[0]);
  }
  return (FRigElementKeyCollection *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

