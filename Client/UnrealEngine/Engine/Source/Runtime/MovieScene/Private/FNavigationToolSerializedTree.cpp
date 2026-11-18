// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticStruct @ 146064700

UScriptStruct * __cdecl FNavigationToolSerializedTree::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationToolSerializedTree,(UObject *)pUVar1,
                         L"NavigationToolSerializedTree");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTree.OuterSingleton;
}

// FNavigationToolSerializedTree @ 146094360

FNavigationToolSerializedTree * __thiscall
FNavigationToolSerializedTree::FNavigationToolSerializedTree(FNavigationToolSerializedTree *this)

{
  (this->RootNode).LocalIndex = -1;
  (this->RootNode).GlobalIndex = -1;
  (this->RootNode).ChildrenIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNode).ChildrenIndices.ArrayNum = 0;
  (this->RootNode).ChildrenIndices.ArrayMax = 0;
  (this->SceneItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneItems).ArrayNum = 0;
  (this->SceneItems).ArrayMax = 0;
  *(undefined8 *)&this->ItemTreeMap = 0;
  *(undefined8 *)&(this->ItemTreeMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemTreeMap).field_0x20 = 0;
  (this->RootNode).ParentIndex = -1;
  *(undefined4 *)&(this->ItemTreeMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemTreeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemTreeMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemTreeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemTreeMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemTreeMap).field_0x48 = 0;
  (this->RootNode).OwningTree = this;
  return this;
}

// ~FNavigationToolSerializedTree @ 146097fa0

void __thiscall
FNavigationToolSerializedTree::~FNavigationToolSerializedTree(FNavigationToolSerializedTree *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ItemTreeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemTreeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemTreeMap);
  DestructItems<FNavigationToolSerializedItem,int>
            ((FNavigationToolSerializedItem *)(this->SceneItems).AllocatorInstance.Data,
             (this->SceneItems).ArrayNum);
  pFVar2 = (this->SceneItems).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RootNode).ChildrenIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14609af40

FNavigationToolSerializedTree * __thiscall
FNavigationToolSerializedTree::operator=
          (FNavigationToolSerializedTree *this,FNavigationToolSerializedTree *param_1)

{
  TArray<FNavigationToolSerializedItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  (this->RootNode).LocalIndex = (param_1->RootNode).LocalIndex;
  (this->RootNode).GlobalIndex = (param_1->RootNode).GlobalIndex;
  (this->RootNode).ParentIndex = (param_1->RootNode).ParentIndex;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(this->RootNode).ChildrenIndices,&(param_1->RootNode).ChildrenIndices);
  pTVar1 = &this->SceneItems;
  (this->RootNode).OwningTree = (param_1->RootNode).OwningTree;
  if (pTVar1 != &param_1->SceneItems) {
    DestructItems<FNavigationToolSerializedItem,int>
              ((FNavigationToolSerializedItem *)(pTVar1->AllocatorInstance).Data,
               (this->SceneItems).ArrayNum);
    iVar3 = (param_1->SceneItems).ArrayNum;
    piVar2 = &(this->SceneItems).ArrayMax;
    pFVar4 = (param_1->SceneItems).AllocatorInstance.Data;
    (this->SceneItems).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNavigationToolSerializedItem,FNavigationToolSerializedItem,int>
                ((pTVar1->AllocatorInstance).Data,(FNavigationToolSerializedItem *)pFVar4,iVar3);
    }
  }
  if (&this->ItemTreeMap != &param_1->ItemTreeMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ItemTreeMap).field_0x38,
               (int *)&(this->ItemTreeMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ItemTreeMap).field_0x38,
               *(int *)&(param_1->ItemTreeMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ItemTreeMap,
                (TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ItemTreeMap);
  }
  return this;
}

// CompareTreeItemOrder @ 1460b1da0

bool __cdecl
FNavigationToolSerializedTree::CompareTreeItemOrder
          (FNavigationToolSerializedTreeNode *param_1,FNavigationToolSerializedTreeNode *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FNavigationToolSerializedTreeNode *this;
  uint uVar7;
  longlong lVar8;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> local_48;
  FNavigationToolSerializedTreeNode *local_38;
  FNavigationToolSerializedTreeNode *pFStack_30;
  
  if ((param_1 != (FNavigationToolSerializedTreeNode *)0x0) &&
     (param_2 != (FNavigationToolSerializedTreeNode *)0x0)) {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 2;
    local_38 = param_1;
    pFStack_30 = param_2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
    *(FNavigationToolSerializedTreeNode **)local_88.AllocatorInstance.Data = local_38;
    *(FNavigationToolSerializedTreeNode **)(local_88.AllocatorInstance.Data + 8) = pFStack_30;
    this = FindLowestCommonAncestor(&local_88);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (this != (FNavigationToolSerializedTreeNode *)0x0) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
      *(FNavigationToolSerializedTreeNode **)local_78.AllocatorInstance.Data = param_1;
      FNavigationToolSerializedTreeNode::FindPath(this,&local_48,&local_78);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
      *(FNavigationToolSerializedTreeNode **)local_68.AllocatorInstance.Data = param_2;
      FNavigationToolSerializedTreeNode::FindPath(this,&local_58,&local_68);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      uVar7 = 0;
      lVar8 = 0;
      do {
        if (((int)uVar7 < 0) || (local_48.ArrayNum <= (int)uVar7)) {
          bVar4 = true;
          goto LAB_1460b2005;
        }
        if (local_58.ArrayNum <= (int)uVar7) {
          bVar4 = false;
          goto LAB_1460b2005;
        }
        uVar6 = 0;
        if ((int)uVar7 < local_48.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar6 = 0;
        if ((int)uVar7 < local_58.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        iVar2 = **(int **)(local_48.AllocatorInstance.Data + lVar8);
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        uVar7 = uVar7 + 1;
        pFVar1 = local_58.AllocatorInstance.Data + lVar8;
        lVar8 = lVar8 + 8;
      } while (iVar2 == **(int **)pFVar1);
      bVar4 = iVar2 < **(int **)pFVar1;
LAB_1460b2005:
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return bVar4;
    }
  }
  return false;
}

// FindLowestCommonAncestor @ 1460c5670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavigationToolSerializedTreeNode * __cdecl
FNavigationToolSerializedTree::FindLowestCommonAncestor
          (TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  FNavigationToolSerializedTreeNode *pFVar7;
  TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
  *pTVar8;
  FNavigationToolSerializedTreeNode *pFVar9;
  byte bVar10;
  uint uVar11;
  ForAnyElementType _Dst;
  uint *puVar12;
  ForElementType<FSetElementId> _Src;
  ForElementType<unsigned_int> _Src_00;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FNavigationToolSerializedTreeNode *pFVar16;
  uint uVar17;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FNavigationToolSerializedTreeNode *local_1a0;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  void *local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  uint local_90;
  TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar9 = (FNavigationToolSerializedTreeNode *)0x0;
  iVar13 = param_1->ArrayNum;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  pFVar1 = pFVar15 + (longlong)iVar13 * 8;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  do {
    if (param_1->ArrayNum != iVar13) {
      local_1a8 = 0;
      `TCheckedPointerIterator<FNavigationToolSerializedTreeNode_const_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1a8);
    }
    if (pFVar15 == pFVar1) goto LAB_1460c5a07;
    pFVar7 = FNavigationToolSerializedTreeNode::GetParentTreeNode
                       (*(FNavigationToolSerializedTreeNode **)pFVar15);
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.NumBits = 0;
    local_c8.MaxBits = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    local_1a0 = pFVar7;
    if (pFVar7 != (FNavigationToolSerializedTreeNode *)0x0) {
      do {
        local_1a0 = pFVar7;
        TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
        ::Emplace<FNavigationToolSerializedTreeNode_const_*_const_&>
                  ((TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
                    *)&local_d8,(FNavigationToolSerializedTreeNode **)&local_168,(bool *)&local_1a0)
        ;
        pFVar7 = FNavigationToolSerializedTreeNode::GetParentTreeNode(pFVar7);
      } while (pFVar7 != (FNavigationToolSerializedTreeNode *)0x0);
      local_1a0 = (FNavigationToolSerializedTreeNode *)0x0;
    }
    uVar11 = local_90;
    if (local_128._8_4_ == local_f4) {
      uVar17 = local_90;
      if (local_90 < 2) {
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          uVar17 = 0;
          goto LAB_1460c5790;
        }
      }
      else {
LAB_1460c5790:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar17,4);
      }
      _Src = (ForElementType<FSetElementId>)local_a0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        _Src = local_98;
      }
      _Dst.Data = local_f0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        _Dst.Data = local_e8.Data;
      }
      if (uVar11 != 0) {
        memcpy(_Dst.Data,(void *)_Src,(longlong)(int)uVar11 << 2);
      }
      iVar6 = (int)local_d0;
      lVar14 = (longlong)(int)local_d0;
      local_e0 = uVar11;
      TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_128,(int)local_d0);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,(ForAnyElementType *)local_128,(int *)(local_128 + 8),
                 (int *)(local_128 + 0xc));
      local_f8 = local_a8;
      local_f4 = local_a4;
      local_100 = 0;
      uVar11 = local_c8.NumBits + 0x1fU & 0xffffffe0;
      if (((int)local_fc < (int)uVar11) || (0x80 < (int)local_fc)) {
        local_fc = 0x80;
        if (0x80 < (int)uVar11) {
          local_fc = uVar11;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
      }
      local_100 = local_c8.NumBits;
      if (local_c8.NumBits != 0) {
        _Src_00 = (ForElementType<unsigned_int>)&local_c8;
        if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Src_00 = local_c8.AllocatorInstance.SecondaryData;
        }
        puVar12 = (uint *)(local_128 + 0x10);
        if (local_108 != (uint *)0x0) {
          puVar12 = local_108;
        }
        memcpy(puVar12,(void *)_Src_00,(ulonglong)(local_c8.NumBits + 0x1fU >> 5) << 2);
      }
      if (iVar6 != 0) {
        memcpy((void *)local_128._0_8_,local_d8,lVar14 << 4);
      }
    }
    else {
      pTVar8 = TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
               ::Intersect((TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
                            *)local_128,&local_88,
                           (TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
                            *)&local_d8);
      if ((TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
           *)local_128 != pTVar8) {
        TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
        ::
        Move<TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>_>
                  ((TSet<FNavigationToolSerializedTreeNode_const_*,DefaultKeyFuncs<FNavigationToolSerializedTreeNode_const_*,0>,FDefaultSetAllocator>
                    *)local_128,pTVar8);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if (local_128._8_4_ - local_f4 == 1) break;
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    uVar2 = local_d0 >> 0x20;
    local_d0 = local_d0 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&local_d8,0,(int *)((longlong)&local_d0 + 4));
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_c8.NumBits = 0;
    if (0x80 < (uint)local_c8.MaxBits) {
      local_c8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
    }
    if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  uVar2 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
LAB_1460c5a07:
  uVar11 = local_100;
  uStack_190 = 0;
  uStack_18c = 1;
  uStack_17c = uStack_190;
  local_178 = uStack_190;
  if (local_100 != 0) {
    puVar12 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar12 = local_108;
    }
    uVar17 = *puVar12;
    pFVar7 = pFVar9;
    pFVar16 = pFVar9;
    local_178 = 0;
    uStack_190 = 0;
    while (uVar17 == 0) {
      iVar13 = (int)pFVar7;
      local_178 = (int)pFVar16 + 0x20;
      pFVar16 = (FNavigationToolSerializedTreeNode *)(ulonglong)local_178;
      uStack_190 = iVar13 + 1;
      pFVar7 = (FNavigationToolSerializedTreeNode *)(ulonglong)uStack_190;
      uStack_17c = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_190)
      goto LAB_1460c5a82;
      uVar17 = (puVar12 + 1)[iVar13];
    }
    uStack_18c = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_18c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_168._4_4_ = (int)lVar14;
    uStack_17c = local_168._4_4_ + -1 + local_178;
    if ((int)local_100 < (int)uStack_17c) {
      uStack_17c = local_100;
    }
  }
LAB_1460c5a82:
  local_198 = (longlong *)local_128;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  iStack_170 = local_128._8_4_ - local_f4;
  uVar17 = local_100 & 0xffffffe0;
  uStack_180 = 0xffffffff;
  TStack_158.CurrentBitIndex = uStack_17c;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uStack_18c,uStack_190);
  iVar13 = (int)local_100 >> 5;
  TStack_158._28_4_ = uStack_17c;
  TStack_158.BaseBitIndex = local_178;
  uStack_138 = CONCAT44(uStack_16c,iStack_170);
  bVar10 = (byte)local_100;
  uStack_174 = uStack_17c;
  local_160 = local_198;
  TStack_158.Array = local_188;
  if (((int)local_100 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FNavigationToolSerializedTreeNode *)(*pcVar3)();
    return pFVar9;
  }
  pFVar7 = pFVar9;
  if (uVar11 != local_100) {
    puVar12 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar12 = local_108;
    }
    uVar11 = -1 << (bVar10 & 0x1f) & puVar12[iVar13];
    while (uVar11 == 0) {
      lVar14 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      pFVar7 = (FNavigationToolSerializedTreeNode *)0x0;
      uVar11 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1460c5b90;
      uVar11 = (puVar12 + 1)[lVar14];
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = (int)lVar14 + -1 + uVar17;
    pFVar7 = pFVar9;
    if ((int)local_100 < (int)uVar11) {
      pFVar7 = (FNavigationToolSerializedTreeNode *)0x0;
      uVar11 = local_100;
    }
  }
LAB_1460c5b90:
  do {
    plVar4 = local_160;
    if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
      `TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a7);
    }
    if (((TStack_158.CurrentBitIndex == uVar11) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar4 == (longlong *)local_128)) {
      local_e0 = 0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNavigationToolSerializedTreeNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      return pFVar7;
    }
    pFVar9 = *(FNavigationToolSerializedTreeNode **)
              (*plVar4 + (longlong)TStack_158.CurrentBitIndex * 0x10);
    if (pFVar7 == (FNavigationToolSerializedTreeNode *)0x0) {
LAB_1460c5bea:
      pFVar7 = pFVar9;
    }
    else {
      iVar13 = FNavigationToolSerializedTreeNode::CalculateHeight(pFVar9);
      iVar6 = FNavigationToolSerializedTreeNode::CalculateHeight(pFVar7);
      if (iVar6 < iVar13) goto LAB_1460c5bea;
    }
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  } while( true );
}

// FindTreeNode @ 1460c6610

FNavigationToolSerializedTreeNode * __thiscall
FNavigationToolSerializedTree::FindTreeNode
          (FNavigationToolSerializedTree *this,FNavigationToolSerializedItem *param_1)

{
  FNavigationToolSerializedTreeNode *pFVar1;
  
  if (1 < (param_1->Id).Data.ArrayNum) {
    pFVar1 = TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
             ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                     *)&this->ItemTreeMap,param_1);
    return pFVar1;
  }
  return (FNavigationToolSerializedTreeNode *)0x0;
}

// FindTreeNode @ 1460c6630

FNavigationToolSerializedTreeNode * __thiscall
FNavigationToolSerializedTree::FindTreeNode
          (FNavigationToolSerializedTree *this,FNavigationToolSerializedItem *param_1)

{
  FNavigationToolSerializedTreeNode *pFVar1;
  
  if (1 < (param_1->Id).Data.ArrayNum) {
    pFVar1 = TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
             ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                     *)&this->ItemTreeMap,param_1);
    return pFVar1;
  }
  return (FNavigationToolSerializedTreeNode *)0x0;
}

// GetItemAtIndex @ 1460cd280

FNavigationToolSerializedItem * __thiscall
FNavigationToolSerializedTree::GetItemAtIndex(FNavigationToolSerializedTree *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNavigationToolSerializedItem *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SceneItems).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SceneItems).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNavigationToolSerializedItem *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FNavigationToolSerializedItem *)
           ((this->SceneItems).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FNavigationToolSerializedItem *)0x0;
}

// GetOrAddTreeNode @ 1460ce320

FNavigationToolSerializedTreeNode * __thiscall
FNavigationToolSerializedTree::GetOrAddTreeNode
          (FNavigationToolSerializedTree *this,FNavigationToolSerializedItem *param_1,
          FNavigationToolSerializedItem *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNavigationToolSerializedTreeNode *pFVar7;
  FNavigationToolSerializedTree *pFVar8;
  int local_res10;
  FNavigationToolSerializedItem *local_58;
  int *local_50;
  int local_48;
  int local_44;
  int local_40;
  void *local_38;
  undefined8 local_30;
  FNavigationToolSerializedTree *local_28;
  
  if ((1 < (param_1->Id).Data.ArrayNum) &&
     (pFVar7 = TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
               ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                       *)&this->ItemTreeMap,param_1),
     pFVar7 != (FNavigationToolSerializedTreeNode *)0x0)) {
    return pFVar7;
  }
  if (((param_2->Id).Data.ArrayNum < 2) ||
     (pFVar8 = (FNavigationToolSerializedTree *)
               TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
               ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                       *)&this->ItemTreeMap,param_2), pFVar8 == (FNavigationToolSerializedTree *)0x0
     )) {
    pFVar8 = this;
  }
  pFVar2 = (this->SceneItems).AllocatorInstance.Data;
  local_48 = -1;
  local_40 = 0xffffffff;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (FNavigationToolSerializedTree *)0x0;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->SceneItems).ArrayMax * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNavigationToolSerializedTreeNode *)(*pcVar4)();
    return pFVar7;
  }
  local_44 = (this->SceneItems).ArrayNum;
  piVar1 = &(this->SceneItems).ArrayMax;
  if (local_44 == *piVar1) {
    local_44 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->SceneItems).AllocatorInstance,piVar1);
  }
  (this->SceneItems).ArrayNum = local_44 + 1;
  ::FString::FString((FString *)
                     ((this->SceneItems).AllocatorInstance.Data + (longlong)local_44 * 0x10),
                     &param_1->Id);
  pFVar2 = (pFVar8->RootNode).ChildrenIndices.AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_44) &&
      ((FScriptContainerElement *)&local_44 <
       pFVar2 + (longlong)(pFVar8->RootNode).ChildrenIndices.ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNavigationToolSerializedTreeNode *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (pFVar8->RootNode).ChildrenIndices.ArrayNum;
  piVar1 = &(pFVar8->RootNode).ChildrenIndices.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar8->RootNode).ChildrenIndices.AllocatorInstance,piVar1);
  }
  pFVar2 = (pFVar8->RootNode).ChildrenIndices.AllocatorInstance.Data;
  (pFVar8->RootNode).ChildrenIndices.ArrayNum = iVar6 + 1;
  *(int *)(pFVar2 + (longlong)iVar6 * 4) = local_44;
  local_40 = (pFVar8->RootNode).GlobalIndex;
  local_50 = &local_48;
  local_58 = param_1;
  local_48 = iVar6;
  local_28 = this;
  TSet<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FNavigationToolSerializedItem_const_&,FNavigationToolSerializedTreeNode_&&>_>
            ((TSet<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>,FDefaultSetAllocator>
              *)&this->ItemTreeMap,
             (TPairInitializer<FNavigationToolSerializedItem_const_&,FNavigationToolSerializedTreeNode_&&>
              *)&local_res10,(bool *)&local_58);
  lVar3 = *(longlong *)&this->ItemTreeMap;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return (FNavigationToolSerializedTreeNode *)((longlong)local_res10 * 0x40 + lVar3 + 0x10);
}

// PostSerialize @ 1460e0be0

void __thiscall
FNavigationToolSerializedTree::PostSerialize(FNavigationToolSerializedTree *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  iVar3 = *(int *)&(this->ItemTreeMap).field_0x28;
  puVar1 = &(this->ItemTreeMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ItemTreeMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1460feded;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_10 = (int)lVar8;
    iVar7 = iStackX_10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1460feded:
  uVar10 = *(uint *)&(this->ItemTreeMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ItemTreeMap).field_0x8 -
                       *(int *)&(this->ItemTreeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ItemTreeMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ItemTreeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1460feef0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1460feef0:
  while( true ) {
    if (*(int *)&(this->ItemTreeMap).field_0x8 - *(int *)&(this->ItemTreeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    *(FNavigationToolSerializedTree **)
     ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)&this->ItemTreeMap) = this;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Reset @ 1460e9410

void __thiscall FNavigationToolSerializedTree::Reset(FNavigationToolSerializedTree *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->RootNode).LocalIndex = -1;
  (this->RootNode).GlobalIndex = -1;
  (this->RootNode).ParentIndex = -1;
  iVar2 = (this->RootNode).ChildrenIndices.ArrayMax;
  (this->RootNode).ChildrenIndices.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RootNode).ChildrenIndices.AllocatorInstance,0,
               &(this->RootNode).ChildrenIndices.ArrayMax);
  }
  TSet<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>,FDefaultSetAllocator>
           *)&this->ItemTreeMap);
  piVar1 = &(this->SceneItems).ArrayMax;
  pFVar3 = (this->SceneItems).AllocatorInstance.Data;
  iVar2 = (this->SceneItems).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FNavigationToolSerializedItem,int>((FNavigationToolSerializedItem *)pFVar3,iVar2);
    (this->SceneItems).ArrayNum = 0;
    return;
  }
  DestructItems<FNavigationToolSerializedItem,int>((FNavigationToolSerializedItem *)pFVar3,iVar2);
  (this->SceneItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SceneItems).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateTreeNodes @ 1460fed50

void __thiscall FNavigationToolSerializedTree::UpdateTreeNodes(FNavigationToolSerializedTree *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ItemTreeMap).field_0x28;
  puVar1 = &(this->ItemTreeMap).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ItemTreeMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1460feded;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1460feded:
  uVar10 = *(uint *)&(this->ItemTreeMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ItemTreeMap).field_0x8 -
                       *(int *)&(this->ItemTreeMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ItemTreeMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ItemTreeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1460feef0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1460feef0:
  while( true ) {
    if (*(int *)&(this->ItemTreeMap).field_0x8 - *(int *)&(this->ItemTreeMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    *(FNavigationToolSerializedTree **)
     ((longlong)TStack_60.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)&this->ItemTreeMap) = this;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

