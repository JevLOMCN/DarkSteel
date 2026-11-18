// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1473cb520

UScriptStruct * __cdecl FStateMachineDebugData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateMachineDebugData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStateMachineDebugData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineDebugData,(UObject *)pUVar1,
                         L"StateMachineDebugData");
  }
  return Z_Registration_Info_UScriptStruct_FStateMachineDebugData.OuterSingleton;
}

// FStateMachineDebugData @ 1473d79b0

FStateMachineDebugData * __thiscall
FStateMachineDebugData::FStateMachineDebugData(FStateMachineDebugData *this)

{
  *(undefined8 *)&this->NodeToStateIndex = 0;
  *(undefined8 *)&(this->NodeToStateIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToStateIndex).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToStateIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToStateIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToStateIndex).field_0x34 = 0;
  *(undefined4 *)&(this->NodeToStateIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NodeToStateIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToStateIndex).field_0x48 = 0;
  *(undefined8 *)&this->StateIndexToNode = 0;
  *(undefined8 *)&(this->StateIndexToNode).field_0x8 = 0;
  *(undefined8 *)&(this->StateIndexToNode).field_0x20 = 0;
  *(undefined4 *)&(this->StateIndexToNode).field_0x28 = 0;
  *(undefined4 *)&(this->StateIndexToNode).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateIndexToNode).field_0x34 = 0;
  *(undefined4 *)&(this->StateIndexToNode).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StateIndexToNode).field_0x40 = 0;
  *(undefined4 *)&(this->StateIndexToNode).field_0x48 = 0;
  *(undefined8 *)&this->NodeToTransitionIndex = 0;
  *(undefined8 *)&(this->NodeToTransitionIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NodeToTransitionIndex).field_0x20 = 0;
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x34 = 0;
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NodeToTransitionIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x48 = 0;
  *(undefined8 *)&this->StateAliasNodeToTransitionStatePairs = 0;
  *(undefined8 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x8 = 0;
  *(undefined8 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x20 = 0;
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x28 = 0;
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x34 = 0;
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x40 = 0;
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x48 = 0;
  (this->MachineInstanceNode).WeakPtr = (FWeakObjectPtr)0x0;
  this->MachineIndex = -1;
  return this;
}

// ~FStateMachineDebugData @ 1473dad60

void __thiscall FStateMachineDebugData::~FStateMachineDebugData(FStateMachineDebugData *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->StateAliasNodeToTransitionStatePairs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StateAliasNodeToTransitionStatePairs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UAnimStateAliasNode,FWeakObjectPtr>,FStateMachineDebugData::FStateAliasTransitionStateIndexPair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UAnimStateAliasNode,FWeakObjectPtr>,FStateMachineDebugData::FStateAliasTransitionStateIndexPair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UAnimStateAliasNode,FWeakObjectPtr>,FStateMachineDebugData::FStateAliasTransitionStateIndexPair>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StateAliasNodeToTransitionStatePairs);
  *(undefined4 *)&(this->NodeToTransitionIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeToTransitionIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeToTransitionIndex);
  *(undefined4 *)&(this->StateIndexToNode).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StateIndexToNode).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UAnimStateNodeBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UAnimStateNodeBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UAnimStateNodeBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StateIndexToNode);
  *(undefined4 *)&(this->NodeToStateIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeToStateIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindNodeFromStateIndex @ 1473fcd80

/* WARNING: Type propagation algorithm not settling */

UEdGraphNode * __thiscall
FStateMachineDebugData::FindNodeFromStateIndex(FStateMachineDebugData *this,int param_1)

{
  FWeakObjectPtr *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UEdGraphNode *pUVar4;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FStateMachineDebugData *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iVar2 = *(int *)&(this->NodeToStateIndex).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeToStateIndex).field_0x10;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->NodeToStateIndex).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1473fce19;
      uVar3 = puVar6[lVar5 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_1473fce19:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = this;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      this_00 = (FWeakObjectPtr *)
                (*(longlong *)&this->NodeToStateIndex + (longlong)TStack_60.CurrentBitIndex * 0x14);
      if (*(int *)(*(longlong *)&this->NodeToStateIndex + 8 +
                  (longlong)TStack_60.CurrentBitIndex * 0x14) == param_1) {
        if (this_00 == (FWeakObjectPtr *)0x0) {
          return (UEdGraphNode *)0x0;
        }
        pUVar4 = (UEdGraphNode *)FWeakObjectPtr::Get(this_00);
        return pUVar4;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (UEdGraphNode *)0x0;
}

// FindNodeFromTransitionIndex @ 1473fcee0

/* WARNING: Type propagation algorithm not settling */

UEdGraphNode * __thiscall
FStateMachineDebugData::FindNodeFromTransitionIndex(FStateMachineDebugData *this,int param_1)

{
  FWeakObjectPtr *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UEdGraphNode *pUVar4;
  longlong lVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMultiMap<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,1>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iStack_38 = 0;
  iVar2 = *(int *)&(this->NodeToTransitionIndex).field_0x28;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeToTransitionIndex).field_0x10;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->NodeToTransitionIndex).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_1473fcf7a;
      uVar3 = puVar6[lVar5 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_1473fcf7a:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = &this->NodeToTransitionIndex;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      lVar5 = *(longlong *)&this->NodeToTransitionIndex;
      this_00 = (FWeakObjectPtr *)(lVar5 + (longlong)TStack_60.CurrentBitIndex * 0x14);
      if (*(int *)(lVar5 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14) == param_1) {
        if (this_00 == (FWeakObjectPtr *)0x0) {
          return (UEdGraphNode *)0x0;
        }
        pUVar4 = (UEdGraphNode *)FWeakObjectPtr::Get(this_00);
        return pUVar4;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (UEdGraphNode *)0x0;
}

