// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StaticStruct @ 146064680

UScriptStruct * __cdecl FNavigationToolSerializedTreeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode,
                         (UObject *)pUVar1,L"NavigationToolSerializedTreeNode");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationToolSerializedTreeNode.OuterSingleton;
}

// CalculateHeight @ 1460b10c0

int __thiscall
FNavigationToolSerializedTreeNode::CalculateHeight(FNavigationToolSerializedTreeNode *this)

{
  FNavigationToolSerializedTree **ppFVar1;
  uint uVar2;
  FNavigationToolSerializedTree *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNavigationToolSerializedTree *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  iVar9 = 0;
  pFVar7 = (FNavigationToolSerializedTree *)GetParentTreeNode(this);
  if (pFVar7 == (FNavigationToolSerializedTree *)0x0) {
    return 0;
  }
LAB_1460b10f0:
  do {
    pFVar3 = (pFVar7->RootNode).OwningTree;
    ppFVar1 = &(pFVar7->RootNode).OwningTree;
    iVar9 = iVar9 + 1;
    if (pFVar3 == (FNavigationToolSerializedTree *)0x0) {
      return iVar9;
    }
    if (pFVar3 == pFVar7) {
      return iVar9;
    }
    uVar2 = (pFVar7->RootNode).ParentIndex;
    if ((-1 < (int)uVar2) && ((int)uVar2 < (pFVar3->SceneItems).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar2 < (pFVar3->SceneItems).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      pFVar8 = (pFVar3->SceneItems).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
      if (((pFVar8 != (FScriptContainerElement *)0x0) && (1 < *(int *)(pFVar8 + 8))) &&
         (pFVar7 = (FNavigationToolSerializedTree *)
                   TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                   ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                           *)&(*ppFVar1)->ItemTreeMap,(FNavigationToolSerializedItem *)pFVar8),
         pFVar7 != (FNavigationToolSerializedTree *)0x0)) goto LAB_1460b10f0;
    }
    pFVar7 = *ppFVar1;
    if (pFVar7 == (FNavigationToolSerializedTree *)0x0) {
      return iVar9;
    }
  } while( true );
}

// FindPath @ 1460c5e60

TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FNavigationToolSerializedTreeNode::FindPath
          (FNavigationToolSerializedTreeNode *this,
          TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FNavigationToolSerializedTreeNode *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  FNavigationToolSerializedTreeNode *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  pFVar11 = (param_1->AllocatorInstance).Data;
  uVar12 = 0;
  iVar1 = param_1->ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  local_res20 = pFVar11 + (longlong)iVar1 * 8;
  while( true ) {
    pFVar4 = local_res20;
    if (param_1->ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FNavigationToolSerializedTreeNode_const_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    uVar5 = local_48;
    if (pFVar11 == pFVar4) break;
    pFVar9 = *(FNavigationToolSerializedTreeNode **)pFVar11;
    local_48 = local_48 & 0xffffffff00000000;
    uVar10 = uVar12;
    if ((longlong)uVar5 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_50,0,(int *)((longlong)&local_48 + 4));
      uVar10 = local_48 & 0xffffffff;
    }
    local_58 = pFVar9;
    if (pFVar9 != (FNavigationToolSerializedTreeNode *)0x0) {
      while( true ) {
        iVar7 = (int)uVar10;
        if (this == pFVar9) {
          if (0 < iVar7 / 2) {
            pFVar11 = local_50.Data + (longlong)(iVar7 + -1) * 8;
            do {
              uVar2 = *(undefined8 *)(local_50.Data + uVar12 * 8);
              *(undefined8 *)(local_50.Data + uVar12 * 8) = *(undefined8 *)pFVar11;
              uVar12 = uVar12 + 1;
              *(undefined8 *)pFVar11 = uVar2;
              pFVar11 = pFVar11 + -8;
            } while ((longlong)uVar12 < (longlong)(iVar7 / 2));
            iVar7 = (int)local_48;
          }
          (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
          __return_storage_ptr__->ArrayMax = local_48._4_4_;
          __return_storage_ptr__->ArrayNum = iVar7;
          return __return_storage_ptr__;
        }
        local_58 = pFVar9;
        if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
           ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<FNavigationToolSerializedTreeNode_const_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar8;
          }
          iVar7 = (int)local_48;
        }
        if (iVar7 == local_48._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar7 + 1);
        *(FNavigationToolSerializedTreeNode **)(local_50.Data + (longlong)iVar7 * 8) = local_58;
        pFVar9 = GetParentTreeNode(local_58);
        local_58 = pFVar9;
        if (pFVar9 == (FNavigationToolSerializedTreeNode *)0x0) break;
        uVar10 = local_48 & 0xffffffff;
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return __return_storage_ptr__;
}

// GetParentTreeNode @ 1460cecb0

FNavigationToolSerializedTreeNode * __thiscall
FNavigationToolSerializedTreeNode::GetParentTreeNode(FNavigationToolSerializedTreeNode *this)

{
  uint uVar1;
  FNavigationToolSerializedTree *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNavigationToolSerializedTreeNode *pFVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = this->OwningTree;
  if ((pFVar2 == (FNavigationToolSerializedTree *)0x0) ||
     (pFVar2 == (FNavigationToolSerializedTree *)this)) {
    return (FNavigationToolSerializedTreeNode *)0x0;
  }
  uVar1 = this->ParentIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->SceneItems).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (pFVar2->SceneItems).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNavigationToolSerializedTreeNode *)(*pcVar3)();
      return pFVar6;
    }
    pFVar7 = (pFVar2->SceneItems).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    if (((pFVar7 != (FScriptContainerElement *)0x0) && (1 < *(int *)(pFVar7 + 8))) &&
       (pFVar6 = TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                 ::Find((TMapBase<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationToolSerializedItem,FNavigationToolSerializedTreeNode,0>_>
                         *)&this->OwningTree->ItemTreeMap,(FNavigationToolSerializedItem *)pFVar7),
       pFVar6 != (FNavigationToolSerializedTreeNode *)0x0)) {
      return pFVar6;
    }
  }
  return &this->OwningTree->RootNode;
}

// Reset @ 1460e94d0

void __thiscall FNavigationToolSerializedTreeNode::Reset(FNavigationToolSerializedTreeNode *this)

{
  this->LocalIndex = -1;
  this->GlobalIndex = -1;
  this->ParentIndex = -1;
  (this->ChildrenIndices).ArrayNum = 0;
  if ((this->ChildrenIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ChildrenIndices).AllocatorInstance,0,&(this->ChildrenIndices).ArrayMax)
    ;
  }
  return;
}

