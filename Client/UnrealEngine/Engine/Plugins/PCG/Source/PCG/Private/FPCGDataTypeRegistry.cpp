// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// FPCGDataTypeRegistry @ 1499c2790

FPCGDataTypeRegistry * __thiscall
FPCGDataTypeRegistry::FPCGDataTypeRegistry(FPCGDataTypeRegistry *this)

{
  TUniquePtr<PCGDataTypeHierarchy::FTree,TDefaultDelete<PCGDataTypeHierarchy::FTree>_> *pTVar1;
  int iVar2;
  FNode *this_00;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_01;
  UScriptStruct *pUVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  UScriptStruct *pUVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar14;
  undefined1 *puVar15;
  uint uVar16;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  uint *puVar20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8 [2];
  undefined8 local_88;
  FSparseArrayAllocationInfo local_80;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  FPCGDataTypeRegistry *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  pTVar17 = (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0;
  *(undefined8 *)&this->Mapping = 0;
  pTVar1 = &this->HierarchyTree;
  *(undefined4 *)&(this->Mapping).field_0xc = 0;
  *(undefined8 *)&(this->Mapping).field_0x20 = 0;
  *(undefined4 *)&(this->Mapping).field_0x8 = 0;
  *(undefined4 *)&(this->Mapping).field_0x28 = 0;
  *(undefined4 *)&(this->Mapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->Mapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Mapping).field_0x34 = 0;
  *(undefined8 *)&(this->Mapping).field_0x40 = 0;
  *(undefined4 *)&(this->Mapping).field_0x48 = 0;
  pTVar1->Ptr = (FTree *)0x0;
  this_01 = ::operator_new(0x20);
  pTVar14 = pTVar17;
  if (this_01 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    FPCGDataTypeBaseId::FPCGDataTypeBaseId
              ((FPCGDataTypeBaseId *)&this_01->ObjectPtr,(UScriptStruct *)0x0);
    this_01[1].DebugPtr = (UScriptStruct *)0x0;
    this_01[2].DebugPtr = (UScriptStruct *)0x0;
    this_01[3].DebugPtr = (UScriptStruct *)0x0;
    pUVar7 = FPCGDataTypeInfo::StaticStruct();
    FPCGDataTypeBaseId::FPCGDataTypeBaseId((FPCGDataTypeBaseId *)&local_res8[0].ObjectPtr,pUVar7);
    TVar8._4_4_ = local_res8[0]._4_4_;
    TVar8._0_4_ = local_res8[0]._0_4_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar8.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      TVar8._4_4_ = local_res8[0]._4_4_;
      TVar8._0_4_ = local_res8[0]._0_4_;
    }
    this_01->DebugPtr = (UScriptStruct *)TVar8;
    pTVar14 = this_01;
  }
  if (pTVar1 == (TUniquePtr<PCGDataTypeHierarchy::FTree,TDefaultDelete<PCGDataTypeHierarchy::FTree>_>
                 *)&local_88) {
    if (pTVar14 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
      PCGDataTypeHierarchy::FNode::~FNode((FNode *)&pTVar14->ObjectPtr);
      ::operator_delete(pTVar14,0x20);
    }
  }
  else {
    this_00 = &pTVar1->Ptr->Root;
    pTVar1->Ptr = (FTree *)pTVar14;
    if (this_00 != (FNode *)0x0) {
      PCGDataTypeHierarchy::FNode::~FNode(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  pUVar7 = FPCGDataTypeInfo::StaticStruct();
  pUVar9 = FPCGDataTypeInfo::StaticStruct();
  iVar5 = *(int *)&(this->Mapping).field_0x34;
  if (iVar5 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Mapping).field_0x8,
                       (int *)&(this->Mapping).field_0xc);
    puVar15 = &(this->Mapping).field_0x10;
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)puVar15,1);
    puVar12 = *(undefined1 **)&(this->Mapping).field_0x20;
    uVar11 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar11;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar15;
    }
    *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar5 >> 5) * 4) &
         ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar11 & 0x1f));
  }
  else {
    iVar6 = *(int *)&(this->Mapping).field_0x30;
    lVar3 = *(longlong *)&this->Mapping;
    iVar5 = iVar5 + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar3);
    *(int *)&(this->Mapping).field_0x30 = iVar2;
    *(int *)&(this->Mapping).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_80,iVar6);
  pTVar14 = pTVar17;
  if (local_80.Pointer != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    FPCGDataTypeBaseId::FPCGDataTypeBaseId(local_80.Pointer,pUVar9);
    TInstancedStruct<FPCGDataTypeInfo>::TInstancedStruct<FPCGDataTypeInfo><FPCGDataTypeInfo,void>
              ((TInstancedStruct<FPCGDataTypeInfo> *)
               &((TObjectPtr<UScriptStruct_const_>_u_0 *)((longlong)local_80.Pointer + 8))->
                ObjectPtr,pUVar7);
    *(undefined4 *)((longlong)local_80.Pointer + 0x18) = 0xffffffff;
    pTVar14 = local_80.Pointer;
  }
  local_res8[0]._0_4_ = local_80.Index;
  uVar11 = ((uint)((ulonglong)pTVar14->DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)pTVar14->DebugPtr >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  bVar4 = TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
                      *)this,uVar11,
                     (TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>
                      *)&pTVar14->ObjectPtr,(int *)local_res8,(bool *)0x0);
  if (bVar4) {
    return this;
  }
  uVar16 = 1;
  uVar13 = *(int *)&(this->Mapping).field_0x8 - *(int *)&(this->Mapping).field_0x34;
  if (3 < uVar13) {
    uVar18 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar16 <= *(int *)&(this->Mapping).field_0x48)) {
    uVar11 = *(int *)&(this->Mapping).field_0x48 - 1U & uVar11;
    *(uint *)((longlong)pTVar14 + 0x1c) = uVar11;
    puVar15 = *(undefined1 **)&(this->Mapping).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->Mapping).field_0x38;
    }
    uVar18 = (longlong)*(int *)&(this->Mapping).field_0x48 - 1U & (longlong)(int)uVar11;
    *(undefined4 *)(pTVar14 + 3) = *(undefined4 *)(puVar15 + uVar18 * 4);
    *(undefined4 *)(puVar15 + uVar18 * 4) = local_res8[0]._0_4_;
    return this;
  }
  *(uint *)&(this->Mapping).field_0x48 = uVar16;
  if (*(longlong *)&(this->Mapping).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Mapping).field_0x40,0,0,4);
  }
  if (uVar16 == 0) goto LAB_1499c2a85;
  uVar11 = uVar16;
  if (uVar16 < 2) {
    if (*(longlong *)&(this->Mapping).field_0x40 != 0) {
      uVar11 = 0;
      goto LAB_1499c2a36;
    }
  }
  else {
LAB_1499c2a36:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Mapping).field_0x40,0,uVar11,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = (ulonglong)uVar16;
    pTVar14 = pTVar17;
    do {
      puVar15 = *(undefined1 **)&(this->Mapping).field_0x40;
      puVar12 = &(this->Mapping).field_0x38;
      if (puVar15 != (undefined1 *)0x0) {
        puVar12 = puVar15;
      }
      uVar10 = (ulonglong)pTVar14 & (longlong)(int)uVar16 - 1U;
      pTVar14 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                ((longlong)&(pTVar14->ObjectPtr).field0_0x0 + 1);
      *(undefined4 *)(puVar12 + uVar10 * 4) = 0xffffffff;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
LAB_1499c2a85:
  if (*(int *)&(this->Mapping).field_0x48 != 0) {
    uVar11 = *(uint *)&(this->Mapping).field_0x28;
    local_80.Pointer = &(this->Mapping).field_0x10;
    local_80.Index = 0;
    local_80._4_4_ = 1;
    uStack_6c = 0;
    uStack_68 = 0;
    if (uVar11 != 0) {
      puVar20 = *(uint **)&(this->Mapping).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = local_80.Pointer;
      }
      uVar13 = *puVar20;
      pTVar14 = pTVar17;
      while (uVar13 == 0) {
        iVar5 = (int)pTVar17;
        uStack_68 = (int)pTVar14 + 0x20;
        pTVar14 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(ulonglong)uStack_68;
        local_80.Index = iVar5 + 1;
        pTVar17 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(ulonglong)(uint)local_80.Index;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < local_80.Index)
        goto LAB_1499c2b2b;
        uVar13 = puVar20[(longlong)iVar5 + 1];
      }
      local_80._4_4_ = -uVar13 & uVar13;
      uVar18 = (ulonglong)(uint)local_80._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_6c = (int)lVar3 + -1 + uStack_68;
      pTVar17 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(ulonglong)uStack_6c;
      if ((int)uVar11 < (int)uStack_6c) {
LAB_1499c2b2b:
        pTVar17 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(ulonglong)uVar11;
        uStack_6c = uVar11;
      }
    }
    local_70 = 0xffffffff;
    local_58._padding_._0_4_ = local_80.Index;
    local_58._padding_._4_4_ = local_80._4_4_;
    local_58.UnvisitedBitMask = 0xffffffff;
    local_58.CurrentBitIndex = uStack_6c;
    local_58._28_4_ = uStack_64;
    local_58.BaseBitIndex = uStack_68;
    local_60 = this;
    local_58.Array = local_80.Pointer;
    if ((int)pTVar17 < (int)uVar11) {
      do {
        puVar19 = (ulonglong *)((longlong)(int)pTVar17 * 0x20 + *(longlong *)&local_60->Mapping);
        uVar11 = ((uint)(*puVar19 >> 0x14) & 0xffff ^ (uint)(*puVar19 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & *(int *)&(this->Mapping).field_0x48 - 1U;
        *(uint *)((longlong)puVar19 + 0x1c) = uVar11;
        puVar15 = *(undefined1 **)&(this->Mapping).field_0x40;
        puVar12 = &(this->Mapping).field_0x38;
        if (puVar15 != (undefined1 *)0x0) {
          puVar12 = puVar15;
        }
        uVar18 = (longlong)*(int *)&(this->Mapping).field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(puVar12 + uVar18 * 4);
        *(int *)(puVar12 + uVar18 * 4) = (int)pTVar17;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
        pTVar17 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(ulonglong)(uint)local_58.CurrentBitIndex;
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
  return this;
}

// ~FPCGDataTypeRegistry @ 1499c60f0

void __thiscall FPCGDataTypeRegistry::~FPCGDataTypeRegistry(FPCGDataTypeRegistry *this)

{
  FNode *this_00;
  void *pvVar1;
  
  this_00 = &((this->HierarchyTree).Ptr)->Root;
  if (this_00 != (FNode *)0x0) {
    PCGDataTypeHierarchy::FNode::~FNode(this_00);
    ::operator_delete(this_00,0x20);
  }
  *(undefined4 *)&(this->Mapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Mapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 1499c84a0

ESearchCommand __thiscall
`FPCGDataTypeRegistry::GetIdentifiersDifference'::__l2::<lambda_1>::operator()
          (void *this,FNode *param_1,int param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  ForElementType<FPCGDataTypeBaseId> FVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  ESearchCommand EVar8;
  int iVar9;
  TArrayView<FPCGDataTypeBaseId_const_,int> *pTVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar11;
  longlong *plVar12;
  ForElementType<FPCGDataTypeBaseId> FVar13;
  TArrayView<FPCGDataTypeBaseId_const_,int> local_28;
  TArrayView<FPCGDataTypeBaseId_const_,int> local_18;
  
  if (**(int **)this == param_2) {
    **(int **)this = -1;
  }
  if (**(int **)this == -1) {
    pTVar10 = FPCGDataTypeIdentifier::GetIds
                        (*(FPCGDataTypeIdentifier **)((longlong)this + 8),&local_28);
    pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)pTVar10->DataPtr;
    pTVar1 = pTVar11 + pTVar10->ArrayNum;
    if (pTVar11 != pTVar1) {
      do {
        if (pTVar11->DebugPtr == (param_1->BaseID).Struct.field0_0x0.DebugPtr) {
          **(int **)this = param_2;
          **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
          break;
        }
        pTVar11 = pTVar11 + 1;
      } while (pTVar11 != pTVar1);
    }
  }
  if (((**(int **)this != -1) && (**(int **)this <= param_2)) && ((param_1->Children).ArrayNum == 0)
     ) {
    lVar3 = *(longlong *)((longlong)this + 0x10);
    plVar12 = *(longlong **)(lVar3 + 0x20);
    plVar2 = plVar12 + *(int *)(lVar3 + 0x28);
    if (plVar12 != plVar2) {
      do {
        if ((UScriptStruct *)*plVar12 == (param_1->BaseID).Struct.field0_0x0.DebugPtr) {
          bVar7 = true;
          goto LAB_1499c8564;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar2);
    }
    bVar7 = false;
LAB_1499c8564:
    if ((*(int *)(lVar3 + 0x18) == 0) == bVar7) {
      FVar4 = *(ForElementType<FPCGDataTypeBaseId> *)((longlong)this + 0x20);
      FVar13 = *(ForElementType<FPCGDataTypeBaseId> *)((longlong)FVar4 + 0x100);
      if (*(ForElementType<FPCGDataTypeBaseId> *)((longlong)FVar4 + 0x100) ==
          (ForElementType<FPCGDataTypeBaseId>)0x0) {
        FVar13 = FVar4;
      }
      if ((((ulonglong)FVar13 <= param_1) &&
          (param_1 < (FNode *)((longlong)FVar13 + (longlong)*(int *)((longlong)FVar4 + 0x10c) * 8)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        EVar8 = (*pcVar6)();
        return EVar8;
      }
      iVar9 = *(int *)((longlong)FVar4 + 0x108);
      if (iVar9 == *(int *)((longlong)FVar4 + 0x10c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_>
                          (0x808,(ForElementType<FPCGDataTypeBaseId> *)FVar4,
                           (int *)((longlong)FVar4 + 0x10c));
      }
      *(int *)((longlong)FVar4 + 0x108) = iVar9 + 1;
      pUVar5 = (param_1->BaseID).Struct.field0_0x0.DebugPtr;
      FVar13 = *(ForElementType<FPCGDataTypeBaseId> *)((longlong)FVar4 + 0x100);
      if (*(ForElementType<FPCGDataTypeBaseId> *)((longlong)FVar4 + 0x100) ==
          (ForElementType<FPCGDataTypeBaseId>)0x0) {
        FVar13 = FVar4;
      }
      *(UScriptStruct **)((longlong)FVar13 + (longlong)iVar9 * 8) = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
  }
  if ((**(int **)this == -1) &&
     (pTVar10 = FPCGDataTypeIdentifier::GetIds
                          (*(FPCGDataTypeIdentifier **)((longlong)this + 8),&local_18),
     **(int **)((longlong)this + 0x18) == pTVar10->ArrayNum)) {
    return Stop;
  }
  return ExpandAndContinue;
}

// operator() @ 1499c8690

EPCGDataTypeCompatibilityResult __thiscall
`FPCGDataTypeRegistry::IsCompatible'::__l2::<lambda_1>::operator()(void *this)

{
  TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
  *this_00;
  EPCGDataTypeCompatibilityResult EVar1;
  FPCGDataTypeBaseId FVar2;
  TInstancedStruct<FPCGDataTypeInfo> *this_01;
  FPCGDataTypeInfo *pFVar3;
  
  if (1 < ((*(FPCGDataTypeIdentifier **)((longlong)this + 8))->Ids).ArrayNum) {
    return Compatible;
  }
  this_00 = *(TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
              **)this;
  FVar2 = FPCGDataTypeIdentifier::GetId(*(FPCGDataTypeIdentifier **)((longlong)this + 8));
  this_01 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
            ::Find(this_00,(FPCGDataTypeBaseId *)FVar2.Struct.field0_0x0);
  if (this_01 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0) {
    pFVar3 = TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>(this_01);
                    /* WARNING: Could not recover jumptable at 0x0001499c86f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)((longlong)*pFVar3 + 0x18))
                      (pFVar3,*(undefined8 *)((longlong)this + 8),
                       *(undefined8 *)((longlong)this + 0x10),
                       **(undefined8 **)((longlong)this + 0x18));
    return EVar1;
  }
  return UnknownType;
}

// GetIdentifiersComposition @ 1499f62b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeRegistry::GetIdentifiersComposition
          (FPCGDataTypeRegistry *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<FPCGDataTypeIdentifier_const_,int> *param_1)

{
  FPCGDataTypeBaseId *pFVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FPCGDataTypeIdentifier *pFVar10;
  ForElementType<int> FVar11;
  UScriptStruct *pUVar12;
  TTuple<PCGDataTypeHierarchy::FNode_const_*,int> *_Dst;
  uint uVar13;
  uint uVar14;
  ForElementType<FPCGDataTypeBaseId> FVar15;
  int iVar16;
  FPCGDataTypeBaseId *pFVar17;
  longlong lVar18;
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> FVar19;
  uint uVar20;
  FPCGDataTypeIdentifier *this_00;
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> FVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStackY_4a8 [32];
  uint local_458;
  FIdentityFunctor local_454 [4];
  longlong local_450;
  undefined1 local_448 [8];
  ForAnyElementType local_440;
  undefined8 local_438;
  int local_430;
  undefined4 local_42c;
  uint local_428;
  FPCGDataTypeIdentifier *local_420;
  TArrayView<FPCGDataTypeBaseId_const_,int> local_418;
  <lambda_1> local_408;
  ForElementType<int> local_3f8;
  uint local_370;
  uint local_36c;
  TArray<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_368;
  TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  iVar24 = param_1->ArrayNum;
  if (iVar24 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Ids).ArrayNum = 0;
    (__return_storage_ptr__->Ids).ArrayMax = 0;
    __return_storage_ptr__->CustomSubtype = -1;
  }
  else {
    local_420 = __return_storage_ptr__;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pUVar12 = FPCGDataTypeInfo::StaticStruct();
      FPCGDataTypeBaseId::FPCGDataTypeBaseId(&AnyType,pUVar12);
      _Init_thread_footer(&::_TSS0);
    }
    this_00 = param_1->DataPtr;
    uVar23 = 0;
    local_158.AllocatorInstance.SecondaryData = (ForElementType<FPCGDataTypeBaseId>)0x0;
    local_158.ArrayNum = 0;
    pFVar10 = this_00 + iVar24;
    local_158.ArrayMax = 0x20;
    for (; this_00 != pFVar10; this_00 = this_00 + 1) {
      FPCGDataTypeIdentifier::GetIds(this_00,&local_418);
      pFVar1 = local_418.DataPtr + local_418.ArrayNum;
      for (pFVar17 = local_418.DataPtr; pFVar17 != pFVar1; pFVar17 = pFVar17 + 1) {
        if ((TObjectPtr<UScriptStruct_const_>)(pFVar17->Struct).field0_0x0.DebugPtr ==
            (TObjectPtr<UScriptStruct_const_>_u_0)AnyType.Struct.field0_0x0) {
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&AnyType);
          goto LAB_1499f6c2e;
        }
        TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<FPCGDataTypeBaseId_const_&>(&local_158,pFVar17);
      }
    }
    if (local_158.ArrayNum == 1) {
      FVar15 = (ForElementType<FPCGDataTypeBaseId>)&local_158;
      if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeBaseId>)0x0) {
        FVar15 = local_158.AllocatorInstance.SecondaryData;
      }
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                (__return_storage_ptr__,(FPCGDataTypeBaseId *)FVar15);
    }
    else {
      local_368.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0x20;
      if (local_158.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_158.ArrayNum);
      }
      if (0x20 < local_158.ArrayNum) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_>
                  (0x10,8,local_158.ArrayNum,&local_368.AllocatorInstance,0,&local_368.ArrayMax);
      }
      local_408.UniqueIDs = &local_158;
      local_408.Nodes = &local_368;
      PCGDataTypeHierarchy::FTree::
      DepthSearch<_FPCGDataTypeRegistry::GetIdentifiersComposition_::__l2::<lambda_1>_>
                ((this->HierarchyTree).Ptr,&local_408);
      FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
      if (local_368.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
        FVar19 = local_368.AllocatorInstance.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>,_FPCGDataTypeRegistry::GetIdentifiersComposition_::__l2::<lambda_2>_>_>
                ((TTuple<PCGDataTypeHierarchy::FNode_const_*,int> *)FVar19,local_368.ArrayNum,
                 local_454[0],(<lambda_2> *)local_454);
      local_3f8.SecondaryData = (ForElementType<int>)0x0;
      local_370 = 0;
      local_36c = 0x20;
      uVar13 = local_368.ArrayNum;
      if (0 < (int)(local_368.ArrayNum - 1U)) {
        local_450 = 0;
        uVar25 = uVar23;
        do {
          iVar24 = 1;
          uVar14 = 0;
          if ((int)local_370 < 0) {
            iVar16 = -local_370;
            iVar8 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (4,4,iVar16,&local_3f8,(int *)&local_370,(int *)&local_36c);
            FVar11 = (ForElementType<int>)&local_3f8;
            if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
              FVar11 = local_3f8.SecondaryData;
            }
            memset((void *)((longlong)FVar11 + (longlong)iVar8 * 4),0,(longlong)iVar16 << 2);
            uVar13 = local_368.ArrayNum;
          }
          else {
            if (0 < (int)local_370) {
              local_370 = uVar14;
            }
          }
          uVar22 = (uint)uVar25;
          local_458 = uVar22 + 1;
          local_428 = local_458;
          if ((int)local_458 < (int)uVar13) {
            uVar20 = ~uVar22 >> 0x1f;
            lVar26 = local_450 * 0x10;
            do {
              uVar9 = uVar14;
              if ((int)uVar22 < (int)uVar13) {
                uVar9 = uVar20;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 uVar13 = local_368.ArrayNum, bVar7)) {
                pcVar6 = (code *)swi(3);
                pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                return pFVar10;
              }
              lVar18 = (longlong)(int)local_458;
              FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
              if (local_368.AllocatorInstance.SecondaryData !=
                  (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
                FVar19 = local_368.AllocatorInstance.SecondaryData;
              }
              uVar9 = 0;
              if ((int)local_458 < (int)uVar13) {
                uVar9 = ~local_458 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 uVar13 = local_368.ArrayNum, bVar7)) {
                pcVar6 = (code *)swi(3);
                pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                return pFVar10;
              }
              FVar21 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
              if (local_368.AllocatorInstance.SecondaryData !=
                  (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
                FVar21 = local_368.AllocatorInstance.SecondaryData;
              }
              if (*(int *)(lVar26 + 8 + (longlong)FVar19) ==
                  *(int *)((uchar *)((longlong)FVar21 + 8) + lVar18 * 0x10)) {
                uVar9 = 0;
                if ((int)uVar22 < (int)uVar13) {
                  uVar9 = uVar20;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), uVar13 = local_368.ArrayNum, bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                  return pFVar10;
                }
                lVar18 = (longlong)(int)local_458;
                FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)
                         &local_368;
                if (local_368.AllocatorInstance.SecondaryData !=
                    (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
                  FVar19 = local_368.AllocatorInstance.SecondaryData;
                }
                uVar9 = uVar14;
                if ((int)local_458 < (int)uVar13) {
                  uVar9 = ~local_458 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), uVar13 = local_368.ArrayNum, bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                  return pFVar10;
                }
                FVar21 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)
                         &local_368;
                if (local_368.AllocatorInstance.SecondaryData !=
                    (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
                  FVar21 = local_368.AllocatorInstance.SecondaryData;
                }
                if (*(longlong *)(*(longlong *)(lVar26 + (longlong)FVar19) + 8) ==
                    *(longlong *)(*(longlong *)((longlong)FVar21 + lVar18 * 0x10) + 8)) {
                  iVar24 = iVar24 + 1;
                  FVar11 = (ForElementType<int>)&local_3f8;
                  if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
                    FVar11 = local_3f8.SecondaryData;
                  }
                  if ((ulonglong)FVar11 <= &local_458) {
                    FVar11 = (ForElementType<int>)&local_3f8;
                    if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
                      FVar11 = local_3f8.SecondaryData;
                    }
                    if ((&local_458 < (uint *)((longlong)FVar11 + (longlong)(int)local_36c * 4)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                      return pFVar10;
                    }
                  }
                  if (local_370 == local_36c) {
                    local_370 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                          (0x404,&local_3f8,(int *)&local_36c);
                  }
                  lVar18 = (longlong)(int)local_370;
                  FVar11 = (ForElementType<int>)&local_3f8;
                  if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
                    FVar11 = local_3f8.SecondaryData;
                  }
                  local_370 = local_370 + 1;
                  *(uint *)((longlong)FVar11 + lVar18 * 4) = local_458;
                  uVar13 = local_368.ArrayNum;
                }
              }
              local_458 = local_458 + 1;
            } while ((int)local_458 < (int)uVar13);
            if (iVar24 < 2) goto LAB_1499f6ad7;
            uVar9 = uVar14;
            if ((int)uVar22 < (int)uVar13) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               uVar13 = local_368.ArrayNum, bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
              return pFVar10;
            }
            FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
            if (local_368.AllocatorInstance.SecondaryData !=
                (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
              FVar19 = local_368.AllocatorInstance.SecondaryData;
            }
            if (iVar24 != *(int *)(*(longlong *)(*(longlong *)(lVar26 + (longlong)FVar19) + 8) +
                                  0x18)) goto LAB_1499f6ad7;
            uVar9 = uVar14;
            if ((int)uVar22 < (int)uVar13) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               uVar13 = local_368.ArrayNum, bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
              return pFVar10;
            }
            FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
            if (local_368.AllocatorInstance.SecondaryData !=
                (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
              FVar19 = local_368.AllocatorInstance.SecondaryData;
            }
            uVar3 = *(undefined8 *)(*(longlong *)(lVar26 + (longlong)FVar19) + 8);
            uVar9 = uVar14;
            if ((int)uVar22 < (int)uVar13) {
              uVar9 = uVar20;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
              return pFVar10;
            }
            FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
            if (local_368.AllocatorInstance.SecondaryData !=
                (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
              FVar19 = local_368.AllocatorInstance.SecondaryData;
            }
            *(undefined8 *)(lVar26 + (longlong)FVar19) = uVar3;
            uVar13 = uVar14;
            if ((int)uVar22 < local_368.ArrayNum) {
              uVar13 = uVar20;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
              return pFVar10;
            }
            FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
            if (local_368.AllocatorInstance.SecondaryData !=
                (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
              FVar19 = local_368.AllocatorInstance.SecondaryData;
            }
            piVar2 = (int *)(lVar26 + 8 + (longlong)FVar19);
            *piVar2 = *piVar2 + -1;
            uVar22 = local_370 - 1;
            uVar13 = local_368.ArrayNum;
            if (-1 < (int)uVar22) {
              lVar26 = (longlong)(int)uVar22 * 4;
              do {
                uVar13 = uVar14;
                if ((int)uVar22 < (int)local_370) {
                  uVar13 = ~uVar22 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                  return pFVar10;
                }
                FVar11 = (ForElementType<int>)&local_3f8;
                if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
                  FVar11 = local_3f8.SecondaryData;
                }
                uVar13 = *(uint *)(lVar26 + (longlong)FVar11);
                uVar20 = uVar14;
                if ((int)uVar13 < local_368.ArrayNum) {
                  uVar20 = ~uVar13 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pFVar10 = (FPCGDataTypeIdentifier *)(*pcVar6)();
                  return pFVar10;
                }
                FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)
                         &local_368;
                if (local_368.AllocatorInstance.SecondaryData !=
                    (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
                  FVar19 = local_368.AllocatorInstance.SecondaryData;
                }
                _Dst = (TTuple<PCGDataTypeHierarchy::FNode_const_*,int> *)
                       ((longlong)(int)uVar13 * 0x10 + (longlong)FVar19);
                iVar24 = (local_368.ArrayNum - uVar13) + -1;
                if (iVar24 != 0) {
                  memmove(_Dst,_Dst + 1,(longlong)iVar24 << 4);
                }
                local_368.ArrayNum = local_368.ArrayNum - 1;
                UE::Core::Private::
                ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_>
                          (0x10,8,&local_368.AllocatorInstance,local_368.ArrayNum,
                           &local_368.ArrayMax);
                lVar26 = lVar26 + -4;
                uVar22 = uVar22 - 1;
                uVar13 = local_368.ArrayNum;
              } while (-1 < (int)uVar22);
            }
          }
          else {
LAB_1499f6ad7:
            local_450 = local_450 + 1;
            uVar25 = (ulonglong)local_428;
          }
          __return_storage_ptr__ = local_420;
        } while ((int)uVar25 < (int)(uVar13 - 1));
      }
      local_42c = 0;
      local_440.Data = (FScriptContainerElement *)0x0;
      local_438 = 0;
      local_430 = -1;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar13,&local_440,0,(int *)((longlong)&local_438 + 4));
        uVar23 = local_438 & 0xffffffff;
        uVar13 = local_368.ArrayNum;
      }
      FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)&local_368;
      if (local_368.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
        FVar19 = local_368.AllocatorInstance.SecondaryData;
      }
      FVar21 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)
               ((longlong)(int)uVar13 * 0x10 + (longlong)FVar19);
      uVar14 = uVar13;
      while( true ) {
        iVar24 = (int)uVar23;
        if (uVar14 != uVar13) {
          `TCheckedPointerIterator<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_448);
          iVar24 = (int)local_438;
        }
        if (FVar19 == FVar21) break;
        puVar4 = *(undefined8 **)FVar19;
        if (iVar24 == local_438._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_440,(int *)((longlong)&local_438 + 4));
        }
        local_438 = CONCAT44(local_438._4_4_,iVar24 + 1);
        pUVar5 = (UObject *)*puVar4;
        *(UObject **)(local_440.Data + (longlong)iVar24 * 8) = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FVar19 = (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)
                 ((longlong)FVar19 + 0x10);
        uVar23 = local_438 & 0xffffffff;
        uVar14 = local_368.ArrayNum;
      }
      (__return_storage_ptr__->Ids).AllocatorInstance.Data = local_440.Data;
      (__return_storage_ptr__->Ids).ArrayMax = local_438._4_4_;
      (__return_storage_ptr__->Ids).ArrayNum = iVar24;
      __return_storage_ptr__->CustomSubtype = local_430;
      local_440.Data = (FScriptContainerElement *)0x0;
      local_438 = 0;
      if (local_3f8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_3f8.SecondaryData);
      }
      if (local_368.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>)0x0) {
        FMemory::Free((void *)local_368.AllocatorInstance.SecondaryData);
      }
    }
LAB_1499f6c2e:
    if (local_158.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeBaseId>)0x0) {
      FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// GetIdentifiersDifference @ 1499f6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeRegistry::GetIdentifiersDifference
          (FPCGDataTypeRegistry *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          FGetIdentifiersDifferenceParams *param_1)

{
  FPCGDataTypeBaseId *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FPCGDataTypeIdentifier *pFVar7;
  ForElementType<FPCGDataTypeBaseId> FVar8;
  ForElementType<FPCGDataTypeIdentifier> FVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FPCGDataTypeIdentifier *pFVar12;
  ForElementType<FPCGDataTypeBaseId> this_00;
  ForElementType<FPCGDataTypeBaseId> FVar13;
  uint uVar14;
  FPCGDataTypeIdentifier *this_01;
  FPCGDataTypeBaseId *pFVar15;
  undefined1 auStackY_568 [32];
  <lambda_3> local_528;
  int local_518;
  int local_514;
  FPCGDataTypeIdentifier local_510;
  FPCGDataTypeIdentifier local_4f8;
  FPCGDataTypeIdentifier *local_4e0;
  FPCGDataTypeRegistry *local_4d8;
  FPCGDataTypeIdentifier *local_4d0;
  TArrayView<FPCGDataTypeBaseId_const_,int> local_4c8;
  ForElementType<FPCGDataTypeIdentifier> local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  <lambda_1> local_4a8;
  TArrayView<FPCGDataTypeIdentifier_const_,int> local_478;
  undefined1 local_468 [256];
  ForElementType<FPCGDataTypeBaseId> local_368;
  uint local_360;
  int local_35c;
  TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_358
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_4d8 = this;
  if ((((param_1->DifferenceIdentifiers).ArrayNum == 0) ||
      (param_1->SourceIdentifier == (FPCGDataTypeIdentifier *)0x0)) ||
     (bVar4 = FPCGDataTypeIdentifier::IsValid(param_1->SourceIdentifier), !bVar4)) {
    pFVar7 = param_1->SourceIdentifier;
    if (pFVar7 == (FPCGDataTypeIdentifier *)0x0) {
      local_4f8._20_4_ = 0;
      local_4f8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f8.Ids.ArrayNum = 0;
      local_4f8.Ids.ArrayMax = 0;
      local_4f8.CustomSubtype = -1;
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_4f8);
      if (local_4f8.Ids.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_4f8.Ids.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    local_510.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = (pFVar7->Ids).ArrayNum;
    pFVar2 = (pFVar7->Ids).AllocatorInstance.Data;
    local_510.Ids.ArrayNum = iVar6;
    if (iVar6 == 0) {
      local_510.Ids.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,0,(ForAnyElementType *)&local_510,iVar6,&local_510.Ids.ArrayMax);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                (local_510.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar2,iVar6);
    }
    local_510.CustomSubtype = pFVar7->CustomSubtype;
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_510);
    FVar10.Data = local_510.Ids.AllocatorInstance.Data;
  }
  else {
    pFVar7 = param_1->SourceIdentifier;
    local_4a8.CurrentFoundDepth = &local_514;
    local_4a8.Found = &local_518;
    local_368 = (ForElementType<FPCGDataTypeBaseId>)0x0;
    local_360 = 0;
    local_35c = 0x20;
    local_514 = -1;
    local_518 = 0;
    local_4d0 = pFVar7;
    local_4a8.SourceIdentifier = pFVar7;
    local_4a8.Params = param_1;
    local_4a8.SourceLeaves =
         (TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
         local_468;
    PCGDataTypeHierarchy::FTree::
    DepthSearch<_FPCGDataTypeRegistry::GetIdentifiersDifference_::__l2::<lambda_1>_>
              ((this->HierarchyTree).Ptr,&local_4a8);
    bVar4 = false;
    this_01 = (param_1->DifferenceIdentifiers).DataPtr;
    pFVar12 = this_01 + (param_1->DifferenceIdentifiers).ArrayNum;
    local_4e0 = pFVar12;
    if (this_01 != pFVar12) {
      do {
        FPCGDataTypeIdentifier::GetIds(this_01,&local_4c8);
        pFVar1 = local_4c8.DataPtr + local_4c8.ArrayNum;
        FVar8 = local_368;
        uVar14 = local_360;
        for (pFVar15 = local_4c8.DataPtr; pFVar15 != pFVar1; pFVar15 = pFVar15 + 1) {
          uVar11 = uVar14;
          if (uVar14 == 0) goto LAB_1499f6e6e;
          while( true ) {
            FVar13 = (ForElementType<FPCGDataTypeBaseId>)local_468;
            if (FVar8 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
              FVar13 = FVar8;
            }
            this_00 = FVar13;
            uVar14 = uVar11;
            while( true ) {
              if (this_00 ==
                  (ForElementType<FPCGDataTypeBaseId>)((longlong)FVar13 + (longlong)(int)uVar11 * 8)
                 ) goto LAB_1499f6e4a;
              bVar5 = FPCGDataTypeBaseId::IsChildOf((FPCGDataTypeBaseId *)this_00,pFVar15);
              FVar8 = local_368;
              uVar14 = local_360;
              if (bVar5) break;
              this_00 = (ForElementType<FPCGDataTypeBaseId>)((longlong)this_00 + 8);
            }
            uVar11 = (uint)((longlong)this_00 - (longlong)FVar13 >> 3);
            if (uVar11 == 0xffffffff) break;
            bVar4 = true;
            uVar14 = 0;
            if ((int)uVar11 < (int)local_360) {
              uVar14 = ~uVar11 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar3)();
              return pFVar7;
            }
            FVar8 = (ForElementType<FPCGDataTypeBaseId>)local_468;
            if (local_368 != (ForElementType<FPCGDataTypeBaseId>)0x0) {
              FVar8 = local_368;
            }
            iVar6 = (local_360 - uVar11) + -1;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove((void *)((longlong)FVar8 + (longlong)(int)uVar11 * 8),
                      (void *)((longlong)FVar8 + (longlong)(int)(local_360 - iVar6) * 8),
                      (longlong)iVar6 << 3);
            }
            local_360 = local_360 - 1;
            UE::Core::Private::
            ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_>
                      (8,8,(ForElementType<FPCGDataTypeBaseId> *)local_468,local_360,&local_35c);
            FVar8 = local_368;
            uVar11 = local_360;
            uVar14 = local_360;
            if (local_360 == 0) goto LAB_1499f6e77;
          }
LAB_1499f6e4a:
          if (uVar14 == 0) goto LAB_1499f6e6e;
          pFVar12 = local_4e0;
        }
      } while ((uVar14 != 0) && (this_01 = this_01 + 1, this_01 != pFVar12));
LAB_1499f6e6e:
      pFVar7 = local_4d0;
      if (bVar4) {
LAB_1499f6e77:
        local_358.ArrayMax = 0x20;
        local_358.AllocatorInstance.SecondaryData = (ForElementType<FPCGDataTypeIdentifier>)0x0;
        local_358.ArrayNum = 0;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (0x20 < (int)uVar14) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_>
                    (0x18,8,uVar14,&local_358.AllocatorInstance,0,&local_358.ArrayMax);
        }
        Algo::
        Transform<TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,TArray<FPCGDataTypeIdentifier,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_&,_FPCGDataTypeRegistry::GetIdentifiersDifference_::__l2::<lambda_3>_>
                  ((TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                    *)local_468,&local_358,local_528);
        iStack_4b0 = local_358.ArrayNum;
        local_4b8 = (ForElementType<FPCGDataTypeIdentifier>)&local_358;
        if (local_358.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0
           ) {
          local_4b8 = local_358.AllocatorInstance.SecondaryData;
        }
        if ((local_358.ArrayNum < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar3)();
          return pFVar7;
        }
        local_478._12_4_ = uStack_4ac;
        local_478.ArrayNum = iStack_4b0;
        local_478.DataPtr = (FPCGDataTypeIdentifier *)local_4b8;
        GetIdentifiersComposition(local_4d8,__return_storage_ptr__,&local_478);
        FVar9 = (ForElementType<FPCGDataTypeIdentifier>)&local_358;
        if (local_358.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0
           ) {
          FVar9 = local_358.AllocatorInstance.SecondaryData;
        }
        DestructItems<FPCGDataTypeIdentifier,int>
                  ((FPCGDataTypeIdentifier *)FVar9,local_358.ArrayNum);
        FVar10.Data = (FScriptContainerElement *)local_368;
        if (local_358.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeIdentifier>)0x0
           ) {
          FMemory::Free((void *)local_358.AllocatorInstance.SecondaryData);
          FVar10.Data = (FScriptContainerElement *)local_368;
        }
        goto LAB_1499f6f7d;
      }
    }
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar7);
    FVar10.Data = (FScriptContainerElement *)local_368;
  }
LAB_1499f6f7d:
  if ((ForElementType<FPCGDataTypeBaseId>)FVar10.Data != (ForElementType<FPCGDataTypeBaseId>)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return __return_storage_ptr__;
}

// GetIdentifiersUnion @ 1499f71a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeRegistry::GetIdentifiersUnion
          (FPCGDataTypeRegistry *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<FPCGDataTypeIdentifier_const_,int> *param_1)

{
  FPCGDataTypeBaseId *pFVar1;
  int iVar2;
  FTree *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  FPCGDataTypeIdentifier *pFVar7;
  UScriptStruct *pUVar8;
  ForElementType<FPCGDataTypeBaseId> FVar9;
  FPCGDataTypeBaseId *pFVar10;
  uint uVar11;
  FPCGDataTypeIdentifier *this_01;
  undefined1 auStackY_218 [32];
  FPCGDataTypeIdentifier local_1d8;
  FPCGDataTypeIdentifier local_1c0;
  TArrayView<FPCGDataTypeBaseId_const_,int> local_1a8;
  FPCGDataTypeIdentifier local_198;
  FPCGDataTypeIdentifier local_180;
  FPCGDataTypeIdentifier local_168;
  TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_218;
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Ids).ArrayNum = 0;
    (__return_storage_ptr__->Ids).ArrayMax = 0;
    __return_storage_ptr__->CustomSubtype = -1;
    return __return_storage_ptr__;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pUVar8 = FPCGDataTypeInfo::StaticStruct();
    FPCGDataTypeBaseId::FPCGDataTypeBaseId(&AnyType,pUVar8);
    _Init_thread_footer(&::_TSS0);
  }
  this_01 = param_1->DataPtr;
  local_150.AllocatorInstance.SecondaryData = (ForElementType<FPCGDataTypeBaseId>)0x0;
  local_150.ArrayNum = 0;
  pFVar7 = this_01 + iVar2;
  local_150.ArrayMax = 0x20;
  if (this_01 != pFVar7) {
    do {
      FPCGDataTypeIdentifier::GetIds(this_01,&local_1a8);
      pFVar1 = local_1a8.DataPtr + local_1a8.ArrayNum;
      for (pFVar10 = local_1a8.DataPtr; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
        if ((TObjectPtr<UScriptStruct_const_>)(pFVar10->Struct).field0_0x0.DebugPtr ==
            (TObjectPtr<UScriptStruct_const_>_u_0)AnyType.Struct.field0_0x0) {
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&AnyType);
          goto LAB_1499f7559;
        }
        TArray<FPCGDataTypeBaseId,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<FPCGDataTypeBaseId_const_&>(&local_150,pFVar10);
      }
      this_01 = this_01 + 1;
    } while (this_01 != pFVar7);
    if (local_150.ArrayNum != 0) {
      if ((local_150.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar3)();
        return pFVar7;
      }
      FVar9 = (ForElementType<FPCGDataTypeBaseId>)&local_150;
      if (local_150.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeBaseId>)0x0) {
        FVar9 = local_150.AllocatorInstance.SecondaryData;
      }
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_1d8,(FPCGDataTypeBaseId *)FVar9);
      uVar11 = 1;
      if (1 < local_150.ArrayNum) {
        do {
          uVar6 = 0;
          if ((int)uVar11 < local_150.ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar3)();
            return pFVar7;
          }
          FVar9 = (ForElementType<FPCGDataTypeBaseId>)&local_150;
          if (local_150.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeBaseId>)0x0)
          {
            FVar9 = local_150.AllocatorInstance.SecondaryData;
          }
          pFVar1 = (FPCGDataTypeBaseId *)((longlong)FVar9 + (longlong)(int)uVar11 * 8);
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_198,pFVar1);
          bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_1d8,&local_198);
          if (local_198.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Ids.AllocatorInstance.Data);
          }
          if (!bVar5) {
            this_00 = (this->HierarchyTree).Ptr;
            local_1c0._20_4_ = 0;
            local_1c0.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c0.Ids.ArrayNum = 0;
            local_1c0.Ids.ArrayMax = 0;
            local_1c0.CustomSubtype = -1;
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_180,pFVar1);
            bVar5 = PCGDataTypeHierarchy::FTree::QueryHierarchy
                              (this_00,&local_1d8,&local_180,&local_1c0);
            if (local_180.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Ids.AllocatorInstance.Data);
            }
            if (bVar5) {
              FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_168,&AnyType);
              bVar5 = FPCGDataTypeIdentifier::IsSameType(&local_1c0,&local_168);
              if (local_168.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Ids.AllocatorInstance.Data);
              }
              FVar4.Data = local_1c0.Ids.AllocatorInstance.Data;
              if (!bVar5) {
                iVar2 = local_1c0.Ids.ArrayNum;
                local_1d8.Ids.ArrayNum = local_1c0.Ids.ArrayNum;
                if ((local_1c0.Ids.ArrayNum == 0) && (local_1d8.Ids.ArrayMax == 0)) {
                  local_1d8.Ids._8_8_ = local_1c0.Ids._8_8_ & 0xffffffff;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_1c0.Ids.ArrayNum,local_1d8.Ids.ArrayMax,
                             (ForAnyElementType *)&local_1d8,local_1c0.Ids.ArrayNum,
                             &local_1d8.Ids.ArrayMax);
                  ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                            (local_1d8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,
                             iVar2);
                }
                local_1d8.CustomSubtype = local_1c0.CustomSubtype;
                if (local_1c0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Ids.AllocatorInstance.Data);
                }
                goto LAB_1499f74c6;
              }
              FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&AnyType);
            }
            else {
              *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
              (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (__return_storage_ptr__->Ids).ArrayNum = 0;
              (__return_storage_ptr__->Ids).ArrayMax = 0;
              __return_storage_ptr__->CustomSubtype = -1;
            }
            if (local_1c0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Ids.AllocatorInstance.Data);
            }
            if (local_1d8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Ids.AllocatorInstance.Data);
            }
            goto LAB_1499f7559;
          }
LAB_1499f74c6:
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < local_150.ArrayNum);
      }
      (__return_storage_ptr__->Ids).AllocatorInstance.Data = local_1d8.Ids.AllocatorInstance.Data;
      (__return_storage_ptr__->Ids).ArrayNum = local_1d8.Ids.ArrayNum;
      (__return_storage_ptr__->Ids).ArrayMax = local_1d8.Ids.ArrayMax;
      __return_storage_ptr__->CustomSubtype = local_1d8.CustomSubtype;
      local_1d8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Ids.ArrayNum = 0;
      local_1d8.Ids.ArrayMax = 0;
      goto LAB_1499f7559;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = 0;
  (__return_storage_ptr__->Ids).ArrayMax = 0;
  __return_storage_ptr__->CustomSubtype = -1;
LAB_1499f7559:
  if (local_150.AllocatorInstance.SecondaryData != (ForElementType<FPCGDataTypeBaseId>)0x0) {
    FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// GetTypeInfo @ 1499fe320

FPCGDataTypeInfo * __thiscall
FPCGDataTypeRegistry::GetTypeInfo(FPCGDataTypeRegistry *this,FPCGDataTypeBaseId *param_1)

{
  int iVar1;
  FPCGDataTypeInfo *pFVar2;
  bool bVar3;
  TInstancedStruct<FPCGDataTypeInfo> *pTVar4;
  UScriptStruct *pUVar5;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res18 [2];
  
  pTVar4 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
           ::Find((TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
                   *)this,param_1);
  if (pTVar4 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0) {
    pFVar2 = (FPCGDataTypeInfo *)(pTVar4->InstancedStruct).StructMemory;
    local_res8[0] =
         (TObjectPtr<UScriptStruct_const_>_u_0)
         (pTVar4->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
    if ((pFVar2 != (FPCGDataTypeInfo *)0x0) && (local_res8[0].DebugPtr != (UScriptStruct *)0x0)) {
      pUVar5 = FPCGDataTypeInfo::StaticStruct();
      if (local_res8[0].DebugPtr == pUVar5) {
        return pFVar2;
      }
      pUVar5 = FPCGDataTypeInfo::StaticStruct();
      if (pUVar5 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)(local_res8[0].DebugPtr)->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)((local_res8[0].DebugPtr)->_padding_ + (longlong)iVar1 * 8)
            != &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return pFVar2;
        }
      }
      local_res18[0] = local_res8;
      bVar3 = `UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>'::__l7::<lambda_1>::
              operator()(local_res18);
      if (bVar3) {
        return pFVar2;
      }
    }
  }
  return (FPCGDataTypeInfo *)0x0;
}

// HierarchyDepthSearch @ 1499fe580

void __thiscall
FPCGDataTypeRegistry::HierarchyDepthSearch
          (FPCGDataTypeRegistry *this,
          TFunctionRef<FPCGDataTypeRegistry::ESearchCommand___cdecl(FPCGDataTypeBaseId_const_&,int)>
          *param_1)

{
  PCGDataTypeHierarchy::FTree::
  DepthSearch<_FPCGDataTypeRegistry::HierarchyDepthSearch_::__l2::<lambda_1>_>
            ((this->HierarchyTree).Ptr,(<lambda_1>)param_1);
  return;
}

// IsCompatible @ 149a00580

EPCGDataTypeCompatibilityResult __thiscall
FPCGDataTypeRegistry::IsCompatible
          (FPCGDataTypeRegistry *this,FPCGDataTypeIdentifier *param_1,
          FPCGDataTypeIdentifier *param_2,FText *param_3)

{
  bool bVar1;
  char cVar2;
  EPCGDataTypeCompatibilityResult EVar3;
  FPCGDataTypeBaseId FVar4;
  TInstancedStruct<FPCGDataTypeInfo> *pTVar5;
  TInstancedStruct<FPCGDataTypeInfo> *pTVar6;
  FPCGDataTypeInfo *pFVar7;
  FText *local_res20;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeRegistry *local_30;
  FPCGDataTypeIdentifier *local_28;
  FPCGDataTypeIdentifier *local_20;
  FText **local_18;
  
  local_res20 = param_3;
  bVar1 = FPCGDataTypeIdentifier::IsValid(param_1);
  if ((!bVar1) || (bVar1 = FPCGDataTypeIdentifier::IsValid(param_2), !bVar1)) {
    return UnknownType;
  }
  local_18 = &local_res20;
  local_30 = this;
  local_28 = param_1;
  local_20 = param_2;
  bVar1 = FPCGDataTypeIdentifier::IsSameType(param_1,param_2);
  if (bVar1) {
    EVar3 = `FPCGDataTypeRegistry::IsCompatible'::__l2::<lambda_1>::operator()(&local_30);
    return EVar3;
  }
  FPCGDataTypeIdentifier::operator&(param_1,&local_48,param_2);
  bVar1 = FPCGDataTypeIdentifier::IsSameType(&local_48,param_1);
  if (bVar1) {
    EVar3 = `FPCGDataTypeRegistry::IsCompatible'::__l2::<lambda_1>::operator()(&local_30);
    goto LAB_149a00800;
  }
  bVar1 = FPCGDataTypeIdentifier::IsSameType(&local_48,param_2);
  if ((bVar1) || (bVar1 = FPCGDataTypeIdentifier::IsValid(&local_48), bVar1)) {
    if ((1 < (param_1->Ids).ArrayNum) || (1 < (param_2->Ids).ArrayNum)) {
LAB_149a007fb:
      EVar3 = RequireFilter;
      goto LAB_149a00800;
    }
    FVar4 = FPCGDataTypeIdentifier::GetId(param_1);
    pTVar5 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
             ::Find((TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
                     *)this,(FPCGDataTypeBaseId *)FVar4.Struct.field0_0x0);
    FVar4 = FPCGDataTypeIdentifier::GetId(param_2);
    pTVar6 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
             ::Find((TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
                     *)this,(FPCGDataTypeBaseId *)FVar4.Struct.field0_0x0);
    if ((pTVar5 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0) &&
       (pTVar6 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0)) {
      pFVar7 = TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>(pTVar5);
      cVar2 = (**(code **)((longlong)*pFVar7 + 0x28))(pFVar7,param_1,param_2,0,local_res20);
      if (cVar2 == '\0') {
        pFVar7 = TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>(pTVar6);
        cVar2 = (**(code **)((longlong)*pFVar7 + 0x20))(pFVar7,param_1,param_2,0,local_res20);
        if (cVar2 == '\0') goto LAB_149a007fb;
      }
      EVar3 = RequireConversion;
      goto LAB_149a00800;
    }
  }
  else {
    if ((1 < (param_1->Ids).ArrayNum) || (1 < (param_2->Ids).ArrayNum)) {
      EVar3 = NotCompatible;
      goto LAB_149a00800;
    }
    FVar4 = FPCGDataTypeIdentifier::GetId(param_1);
    pTVar5 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
             ::Find((TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
                     *)this,(FPCGDataTypeBaseId *)FVar4.Struct.field0_0x0);
    FVar4 = FPCGDataTypeIdentifier::GetId(param_2);
    pTVar6 = TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
             ::Find((TMapBase<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>_>
                     *)this,(FPCGDataTypeBaseId *)FVar4.Struct.field0_0x0);
    if ((pTVar5 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0) &&
       (pTVar6 != (TInstancedStruct<FPCGDataTypeInfo> *)0x0)) {
      pFVar7 = TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>(pTVar5);
      cVar2 = (**(code **)((longlong)*pFVar7 + 0x28))(pFVar7,param_1,param_2,0,local_res20);
      if (cVar2 == '\0') {
        pFVar7 = TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>(pTVar6);
        cVar2 = (**(code **)((longlong)*pFVar7 + 0x20))(pFVar7,param_1,param_2,0,local_res20);
        if (cVar2 == '\0') {
          EVar3 = NotCompatible;
          goto LAB_149a00800;
        }
      }
      EVar3 = RequireConversion;
      goto LAB_149a00800;
    }
  }
  EVar3 = UnknownType;
LAB_149a00800:
  if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  return EVar3;
}

// RegisterEntry @ 149a09b40

void __thiscall
FPCGDataTypeRegistry::RegisterEntry(FPCGDataTypeRegistry *this,FPCGDataTypeBaseId *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FSparseArrayAllocationInfo local_28;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeRegistry.cpp"
                         ,0x14a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
  puVar1 = &(this->Mapping).field_0x8;
  uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (*(int *)puVar1 != *(int *)&(this->Mapping).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Mapping).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Mapping).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->Mapping).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UScriptStruct **)((longlong)iVar8 * 0x20 + *(longlong *)&this->Mapping) == pUVar3) {
          bVar7 = `FPCGDataTypeRegistry::RegisterEntry'::__l10::<lambda_1>::operator()(local_res8);
          if (!bVar7) {
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->Mapping);
      } while (iVar8 != -1);
    }
  }
  iVar8 = *(int *)&(this->Mapping).field_0x34;
  pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
  if (iVar8 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)puVar1,
                       (int *)&(this->Mapping).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Mapping).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->Mapping).field_0x30;
    lVar4 = *(longlong *)&this->Mapping;
    iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + lVar4);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Mapping).field_0x30 = iVar2;
    *(int *)&(this->Mapping).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar9);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_> *)0x0) {
    pUVar5 = (param_1->Struct).field0_0x0.DebugPtr;
    *(UScriptStruct **)local_28.Pointer = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TInstancedStruct<FPCGDataTypeInfo>::TInstancedStruct<FPCGDataTypeInfo><FPCGDataTypeInfo,void>
              ((TInstancedStruct<FPCGDataTypeInfo> *)((longlong)local_28.Pointer + 8),pUVar3);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res10[0] = local_28.Index;
  uVar10 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
           (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  bVar7 = TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
                      *)this,uVar10,local_28.Pointer,local_res10,(bool *)0x0);
  if (!bVar7) {
    TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
                    *)this,uVar10,local_28.Pointer,local_res10[0]);
  }
  PCGDataTypeHierarchy::FTree::AddEntry((this->HierarchyTree).Ptr,param_1);
  return;
}

// RegisterKnownTypes @ 149a09d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FPCGDataTypeRegistry::RegisterKnownTypes(FPCGDataTypeRegistry *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  UClass *pUVar7;
  FPCGDataTypeBaseId *pFVar8;
  int iVar9;
  longlong lVar10;
  FPCGDataTypeBaseId local_res10;
  TObjectIterator<UScriptStruct> local_28;
  
  pUVar6 = FPCGDataTypeInfo::StaticStruct();
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UScriptStruct>::Advance(&local_28);
    lVar10 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(UScriptStruct **)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) != pUVar6) {
      lVar10 = (longlong)local_28.Index;
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      iVar9 = local_28.ObjectArray.ArrayNum;
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = local_28.ObjectArray.ArrayNum;
      }
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x38
                     ) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)
               (*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0x30) +
             (longlong)iVar1 * 8) != &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar10 = (longlong)local_28.Index;
          uVar5 = 0;
          if (local_28.Index < iVar9) {
            uVar5 = (uint)~local_28.Index >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pFVar8 = FPCGDataTypeBaseId::FPCGDataTypeBaseId
                             (&local_res10,
                              *(UScriptStruct **)
                               (local_28.ObjectArray.AllocatorInstance.Data + lVar10 * 8));
          RegisterEntry(this,pFVar8);
        }
      }
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 149a0fe20

void __thiscall FPCGDataTypeRegistry::Shutdown(FPCGDataTypeRegistry *this)

{
  undefined1 *puVar1;
  int iVar2;
  FNode *this_00;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->Mapping).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->Mapping).field_0x8);
  puVar1 = &(this->Mapping).field_0xc;
  *(undefined4 *)&(this->Mapping).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Mapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Mapping).field_0x34 = 0;
  iVar2 = *(int *)&(this->Mapping).field_0x2c;
  *(undefined4 *)&(this->Mapping).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Mapping).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Mapping).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Mapping).field_0x48 = 1;
    TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeBaseId,TInstancedStruct<FPCGDataTypeInfo>,0>,FDefaultSetAllocator>
              *)this);
  }
  this_00 = &((this->HierarchyTree).Ptr)->Root;
  if (this_00 != (FNode *)0x0) {
    (this->HierarchyTree).Ptr = (FTree *)0x0;
    PCGDataTypeHierarchy::FNode::~FNode(this_00);
    ::operator_delete(this_00,0x20);
  }
  return;
}

// operator() @ 150546a30

bool __thiscall `FPCGDataTypeRegistry::RegisterEntry'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2208003984923296076>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2208003984923296076>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

