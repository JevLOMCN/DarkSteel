// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// AddChildNode @ 145526580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLODSceneTree::AddChildNode
          (FLODSceneTree *this,FPrimitiveComponentId param_1,FPrimitiveSceneInfo *param_2)

{
  FScene *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar11;
  uint local_res10 [2];
  int local_res20;
  FPrimitiveSceneInfo *local_48;
  uint *local_40;
  void **local_38;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((param_1.PrimIDValue != 0) && (param_2 != (FPrimitiveSceneInfo *)0x0)) {
    pTVar10 = (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)0x0;
    pTVar6 = pTVar10;
    if (*(int *)&(this->SceneNodes).field_0x8 != *(int *)&(this->SceneNodes).field_0x34) {
      puVar11 = *(undefined1 **)&(this->SceneNodes).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->SceneNodes).field_0x38;
      }
      iVar5 = *(int *)(puVar11 +
                      (ulonglong)(*(int *)&(this->SceneNodes).field_0x48 - 1U & param_1.PrimIDValue)
                      * 4);
      if (iVar5 != -1) {
        do {
          pTVar6 = (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&this->SceneNodes + (longlong)iVar5 * 0x28);
          if (*(uint *)(*(longlong *)&this->SceneNodes + (longlong)iVar5 * 0x28) ==
              param_1.PrimIDValue) break;
          iVar5 = *(int *)&pTVar6[2].AllocatorInstance.Data;
          pTVar6 = pTVar10;
        } while (iVar5 != -1);
      }
    }
    this_00 = (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)&pTVar6->ArrayNum;
    if (pTVar6 == (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)0x0) {
      this_00 = pTVar10;
    }
    local_res10[0] = param_1.PrimIDValue;
    if (this_00 == (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_40 = local_res10;
      local_30 = (void *)0x0;
      local_38 = &local_30;
      local_28 = 0;
      local_20 = 0;
      TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FLODSceneTree::FLODSceneNode_&&>_>
                ((TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
                  *)&this->SceneNodes,
                 (TPairInitializer<FPrimitiveComponentId_const_&,FLODSceneTree::FLODSceneNode_&&> *)
                 &local_res20,(bool *)&local_40);
      this_00 = (TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *)
                (*(longlong *)&this->SceneNodes + ((longlong)local_res20 * 5 + 1) * 8);
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      pFVar1 = this->Scene;
      pFVar2 = (pFVar1->PrimitiveComponentIds).AllocatorInstance.Data;
      for (pFVar8 = pFVar2;
          pFVar8 != pFVar2 + (longlong)(pFVar1->PrimitiveComponentIds).ArrayNum * 4;
          pFVar8 = pFVar8 + 4) {
        if (*(uint *)pFVar8 == local_res10[0]) {
          uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 2);
          if (uVar7 != 0xffffffff) {
            uVar9 = 0;
            if ((int)uVar7 < (pFVar1->Primitives).ArrayNum) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = *(FScriptContainerElement **)
                      ((pFVar1->Primitives).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
            this_00[1].AllocatorInstance.Data = pFVar2;
            if ((*(uint *)(pFVar2 + 0x10) != local_res10[0]) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Parent->SceneInfo->PrimitiveComponentId == ParentId",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                   ,0x17b4,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          break;
        }
      }
    }
    local_48 = param_2;
    TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FPrimitiveSceneInfo_*_const_&>(this_00,&local_48);
  }
  return;
}

// ApplyNodeFadingToChildren @ 145529020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLODSceneTree::ApplyNodeFadingToChildren
          (FLODSceneTree *this,FSceneViewState *param_1,FLODSceneNode *param_2,
          FHLODSceneNodeVisibilityState *param_3,bool param_4,bool param_5)

{
  longlong lVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ForElementType<unsigned_int> FVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FLODSceneNode *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_58 [4];
  uint local_54;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  
  if (param_2->SceneInfo != (FPrimitiveSceneInfo *)0x0) {
    param_3->UpdateCount = (param_1->HLODVisibilityState).UpdateCount;
    local_54 = (param_2->ChildrenSceneInfos).ArrayNum;
    uVar10 = (ulonglong)(int)local_54;
    pFVar16 = (param_2->ChildrenSceneInfos).AllocatorInstance.Data;
    pFVar13 = pFVar16 + uVar10 * 8;
    local_50 = pFVar13;
    while( true ) {
      local_48 = pFVar16;
      if ((param_2->ChildrenSceneInfos).ArrayNum != (int)uVar10) {
        local_58[0] = 0;
        `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_58);
      }
      if (pFVar16 == pFVar13) break;
      lVar2 = *(longlong *)pFVar16;
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) != 0)) &&
          (iVar9 = *(int *)(lVar2 + 0x188), pFVar13 = local_50, iVar9 != -1)) &&
         (iVar9 != 0x7fffffff)) {
        if ((iVar9 < 0) || ((param_1->HLODVisibilityState).PrimitiveFadingLODMap.NumBits <= iVar9))
        {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                             ,0x18d2,
                             L"A HLOD Child\'s PrimitiveSceneInfo PackedIndex was out of FadingMap\'s bounds!"
                            );
          pFVar13 = local_50;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          FVar3 = (param_1->HLODVisibilityState).PrimitiveFadingLODMap.AllocatorInstance.
                  SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)&param_1->HLODVisibilityState;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar3;
          }
          iVar7 = iVar9;
          if (iVar9 < 0) {
            iVar7 = iVar9 + 0x1f;
          }
          lVar1 = (longlong)(iVar7 >> 5) * 4;
          uVar14 = 1 << ((byte)iVar9 & 0x1f);
          uVar8 = *(uint *)(lVar1 + (longlong)FVar11);
          if (param_4) {
            uVar8 = uVar14 | uVar8;
          }
          else {
            uVar8 = ~uVar14 & uVar8;
          }
          *(uint *)(lVar1 + (longlong)FVar11) = uVar8;
          if (((param_1->HLODVisibilityState).PrimitiveFadingOutLODMap.NumBits <= iVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (param_1->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance.
                  SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)
                   &(param_1->HLODVisibilityState).PrimitiveFadingOutLODMap;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar3;
          }
          if (param_5) {
            uVar8 = *(uint *)(lVar1 + (longlong)FVar11) | uVar14;
          }
          else {
            uVar8 = *(uint *)(lVar1 + (longlong)FVar11) & ~uVar14;
          }
          *(uint *)(lVar1 + (longlong)FVar11) = uVar8;
          if (((param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits <= iVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.
                  SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)
                   &(param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar3;
          }
          *(uint *)(lVar1 + (longlong)FVar11) = *(uint *)(lVar1 + (longlong)FVar11) & ~uVar14;
          if (param_4) {
            if (((param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap.NumBits <= iVar9) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar3 = (param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.
                    SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)
                     &(param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar3;
            }
            *(uint *)(lVar1 + (longlong)FVar11) = *(uint *)(lVar1 + (longlong)FVar11) | uVar14;
          }
          pFVar13 = local_50;
          if (*(int *)&(this->SceneNodes).field_0x8 != *(int *)&(this->SceneNodes).field_0x34) {
            puVar4 = *(undefined1 **)&(this->SceneNodes).field_0x40;
            puVar12 = &(this->SceneNodes).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar12 = puVar4;
            }
            iVar9 = *(int *)(puVar12 +
                            (ulonglong)
                            (*(int *)&(this->SceneNodes).field_0x48 - 1U & *(uint *)(lVar2 + 0x10))
                            * 4);
            if (iVar9 != -1) {
              do {
                lVar1 = *(longlong *)&this->SceneNodes + (longlong)iVar9 * 0x28;
                if (*(uint *)(*(longlong *)&this->SceneNodes + (longlong)iVar9 * 0x28) ==
                    *(uint *)(lVar2 + 0x10)) {
                  pFVar15 = (FLODSceneNode *)(lVar1 + 8);
                  if (lVar1 == 0) {
                    pFVar15 = (FLODSceneNode *)0x0;
                  }
                  if (pFVar15 != (FLODSceneNode *)0x0) {
                    HideNodeChildren(this,param_1,pFVar15);
                    pFVar13 = local_50;
                  }
                  break;
                }
                iVar9 = *(int *)(lVar1 + 0x20);
              } while (iVar9 != -1);
            }
          }
        }
      }
      pFVar16 = local_48 + 8;
      uVar10 = (ulonglong)local_54;
    }
  }
  return;
}

// ClearVisibilityState @ 14552b330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FLODSceneTree::ClearVisibilityState(FLODSceneTree *this,FViewInfo *param_1)

{
  TSet<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar1;
  bool bVar2;
  
  lVar1 = param_1->_padding_;
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x5a0) & 2) == 0)) {
    if (0 < *(int *)(lVar1 + 0xef8)) {
      *(undefined4 *)(lVar1 + 0xe98) = 0;
      if ((*(int *)(lVar1 + 0xe9c) < 0) || (0x80 < *(int *)(lVar1 + 0xe9c))) {
        *(undefined4 *)(lVar1 + 0xe9c) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xe80),0);
      }
      *(undefined4 *)(lVar1 + 0xeb8) = 0;
      if ((*(int *)(lVar1 + 0xebc) < 0) || (0x80 < *(int *)(lVar1 + 0xebc))) {
        *(undefined4 *)(lVar1 + 0xebc) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xea0),0);
      }
      *(undefined4 *)(lVar1 + 0xed8) = 0;
      if ((*(int *)(lVar1 + 0xedc) < 0) || (0x80 < *(int *)(lVar1 + 0xedc))) {
        *(undefined4 *)(lVar1 + 0xedc) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xec0),0);
      }
      *(undefined4 *)(lVar1 + 0xef8) = 0;
      if ((*(int *)(lVar1 + 0xefc) < 0) || (0x80 < *(int *)(lVar1 + 0xefc))) {
        *(undefined4 *)(lVar1 + 0xefc) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xee0),0);
      }
    }
    this_00 = (TSet<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>,FDefaultSetAllocator>
               *)(lVar1 + 0xf10);
    if (0 < *(int *)(lVar1 + 0xf18) - *(int *)(lVar1 + 0xf44)) {
      bVar2 = 1 < *(int *)(lVar1 + 0xf58);
      if (!bVar2) {
        TSet<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      *(undefined4 *)(lVar1 + 0xf18) = 0;
      if (*(int *)(lVar1 + 0xf1c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)(lVar1 + 0xf1c));
      }
      *(undefined4 *)(lVar1 + 0xf40) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0xf44) = 0;
      *(undefined4 *)(lVar1 + 0xf38) = 0;
      if ((*(int *)(lVar1 + 0xf3c) < 0) || (0x80 < *(int *)(lVar1 + 0xf3c))) {
        *(undefined4 *)(lVar1 + 0xf3c) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0xf20),0);
      }
      if (bVar2) {
        *(undefined4 *)(lVar1 + 0xf58) = 1;
        TSet<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
    }
  }
  return;
}

// HideNodeChildren @ 145546870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLODSceneTree::HideNodeChildren(FLODSceneTree *this,FSceneViewState *param_1,FLODSceneNode *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  FPrimitiveSceneInfo *pFVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 *puVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FHLODSceneNodeVisibilityState *pFVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  FLODSceneNode *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  
  pFVar6 = param_2->SceneInfo;
  if (pFVar6 != (FPrimitiveSceneInfo *)0x0) {
    pFVar14 = TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
              ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                        ((TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
                          *)&param_1->HLODSceneNodeVisibilityStates,
                         (pFVar6->PrimitiveComponentId).PrimIDValue,&pFVar6->PrimitiveComponentId);
    uVar4 = (param_1->HLODVisibilityState).UpdateCount;
    if (pFVar14->UpdateCount != uVar4) {
      pFVar14->UpdateCount = uVar4;
      uVar5 = (param_2->ChildrenSceneInfos).ArrayNum;
      uVar15 = (ulonglong)(int)uVar5;
      pFVar20 = (param_2->ChildrenSceneInfos).AllocatorInstance.Data;
      pFVar1 = pFVar20 + uVar15 * 8;
LAB_1455468f0:
      do {
        if ((param_2->ChildrenSceneInfos).ArrayNum != (int)uVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar20 == pFVar1) {
          return;
        }
        lVar7 = *(longlong *)pFVar20;
        if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) &&
            (iVar13 = *(int *)(lVar7 + 0x188), iVar13 != -1)) && (iVar13 != 0x7fffffff)) {
          if ((iVar13 < 0) ||
             ((param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits <= iVar13)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                ,0x1900,
                                L"A HLOD Child\'s PrimitiveSceneInfo PackedIndex was out of ForcedHidden\'s bounds!"
                               );
            if (bVar11) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          else {
            if (((param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits <= iVar13) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar8 = (param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.
                    SecondaryData;
            FVar18 = (ForElementType<unsigned_int>)
                     &(param_1->HLODVisibilityState).ForcedHiddenPrimitiveMap;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar8;
            }
            iVar12 = iVar13;
            if (iVar13 < 0) {
              iVar12 = iVar13 + 0x1f;
            }
            uVar17 = 1 << ((byte)iVar13 & 0x1f);
            lVar3 = (longlong)(iVar12 >> 5) * 4;
            puVar2 = (uint *)(lVar3 + (longlong)FVar18);
            *puVar2 = *puVar2 | uVar17;
            if (((param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap.NumBits <= iVar13) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar8 = (param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.
                    SecondaryData;
            FVar18 = (ForElementType<unsigned_int>)
                     &(param_1->HLODVisibilityState).ForcedVisiblePrimitiveMap;
            if (FVar8 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = FVar8;
            }
            puVar2 = (uint *)(lVar3 + (longlong)FVar18);
            *puVar2 = *puVar2 & ~uVar17;
            if (*(int *)&(this->SceneNodes).field_0x8 != *(int *)&(this->SceneNodes).field_0x34) {
              puVar9 = *(undefined1 **)&(this->SceneNodes).field_0x40;
              puVar16 = &(this->SceneNodes).field_0x38;
              if (puVar9 != (undefined1 *)0x0) {
                puVar16 = puVar9;
              }
              iVar13 = *(int *)(puVar16 +
                               (ulonglong)
                               (*(int *)&(this->SceneNodes).field_0x48 - 1U &
                               *(uint *)(lVar7 + 0x10)) * 4);
              if (iVar13 != -1) {
                do {
                  lVar3 = *(longlong *)&this->SceneNodes + (longlong)iVar13 * 0x28;
                  if (*(uint *)(*(longlong *)&this->SceneNodes + (longlong)iVar13 * 0x28) ==
                      *(uint *)(lVar7 + 0x10)) {
                    pFVar19 = (FLODSceneNode *)(lVar3 + 8);
                    if (lVar3 == 0) {
                      pFVar19 = (FLODSceneNode *)0x0;
                    }
                    if (pFVar19 != (FLODSceneNode *)0x0) {
                      HideNodeChildren(this,param_1,pFVar19);
                      uVar15 = (ulonglong)uVar5;
                      pFVar20 = pFVar20 + 8;
                      goto LAB_1455468f0;
                    }
                    break;
                  }
                  iVar13 = *(int *)(lVar3 + 0x20);
                } while (iVar13 != -1);
              }
            }
          }
        }
        uVar15 = (ulonglong)uVar5;
        pFVar20 = pFVar20 + 8;
      } while( true );
    }
  }
  return;
}

// RemoveChildNode @ 14554f5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLODSceneTree::RemoveChildNode
          (FLODSceneTree *this,FPrimitiveComponentId param_1,FPrimitiveSceneInfo *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar11;
  TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
  *this_00;
  FPrimitiveSceneInfo *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  FPrimitiveComponentId local_res10 [4];
  ulonglong *local_res20;
  FPrimitiveSceneInfo *local_48;
  TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
  *local_40;
  ulonglong uVar10;
  
  if (((param_1.PrimIDValue != 0) && (param_2 != (FPrimitiveSceneInfo *)0x0)) &&
     (this_00 = (TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
                 *)&this->SceneNodes,
     *(int *)&(this->SceneNodes).field_0x8 != *(int *)&(this->SceneNodes).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->SceneNodes).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SceneNodes).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SceneNodes).field_0x48 - 1U & param_1.PrimIDValue) *
                              4);
    if (iVar5 != -1) {
      while (lVar1 = *(longlong *)
                      &((TMap<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>_>
                         *)this_00)->field_0x0 + (longlong)iVar5 * 0x28,
            *(uint *)(*(longlong *)
                       &((TMap<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>_>
                          *)this_00)->field_0x0 + (longlong)iVar5 * 0x28) != param_1.PrimIDValue) {
        iVar5 = *(int *)(lVar1 + 0x20);
        if (iVar5 == -1) {
          return;
        }
      }
      puVar9 = (ulonglong *)(lVar1 + 8);
      if (lVar1 == 0) {
        puVar9 = (ulonglong *)0x0;
      }
      if (puVar9 != (ulonglong *)0x0) {
        local_res10[0].PrimIDValue = param_1.PrimIDValue;
        local_res20 = puVar9;
        local_48 = param_2;
        local_40 = this_00;
        if ((((FPrimitiveSceneInfo **)*puVar9 <= &local_48) &&
            (&local_48 < (FPrimitiveSceneInfo **)*puVar9 + *(int *)((longlong)puVar9 + 0xc))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = 0;
        iVar5 = (int)puVar9[1];
        if (iVar5 != 0) {
          plVar2 = (longlong *)*puVar9;
          bVar4 = (FPrimitiveSceneInfo *)*plVar2 != local_48;
          uVar11 = uVar10;
          pFVar12 = local_48;
          uVar14 = uVar10;
          do {
            uVar7 = (uint)uVar10;
            uVar8 = uVar7;
            do {
              uVar11 = uVar11 + 1;
              uVar8 = uVar8 + 1;
              uVar10 = (ulonglong)uVar8;
              if ((longlong)iVar5 <= (longlong)uVar11) break;
            } while (bVar4 == ((FPrimitiveSceneInfo *)plVar2[uVar11] != pFVar12));
            if (bVar4 != false) {
              uVar13 = (uint)uVar14;
              if (uVar13 != uVar7) {
                memmove(plVar2 + (int)uVar13,plVar2 + (int)uVar7,(longlong)(int)(uVar8 - uVar7) << 3
                       );
                pFVar12 = local_48;
              }
              uVar14 = (ulonglong)(uVar13 + (uVar8 - uVar7));
            }
            bVar4 = (bool)(bVar4 ^ 1);
          } while ((longlong)uVar11 < (longlong)iVar5);
          *(int *)(local_res20 + 1) = (int)uVar14;
          this_00 = local_40;
          if ((int)uVar14 != 0) {
            return;
          }
        }
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPrimitiveComponentId>(this_00,param_1.PrimIDValue,local_res10);
        }
      }
    }
  }
  return;
}

// UpdateNodeSceneInfo @ 145554f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLODSceneTree::UpdateNodeSceneInfo
          (FLODSceneTree *this,FPrimitiveComponentId param_1,FPrimitiveSceneInfo *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->SceneNodes).field_0x8 != *(int *)&(this->SceneNodes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SceneNodes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SceneNodes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SceneNodes).field_0x48 - 1U & param_1.PrimIDValue) *
                              4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)&this->SceneNodes + (longlong)iVar2 * 0x28,
            *(uint *)(*(longlong *)&this->SceneNodes + (longlong)iVar2 * 0x28) !=
            param_1.PrimIDValue) {
        iVar2 = *(int *)(lVar1 + 0x20);
        if (iVar2 == -1) {
          return;
        }
      }
      lVar3 = lVar1 + 8;
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        *(FPrimitiveSceneInfo **)(lVar3 + 0x10) = param_2;
      }
    }
  }
  return;
}

// UpdateVisibilityStates @ 145555870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FLODSceneTree::UpdateVisibilityStates(FLODSceneTree *this,FViewInfo *param_1,FTaskEvent *param_2)

{
  TMap<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>_>
  *pTVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> *paVar3;
  FPrimitiveSceneInfo **ppFVar4;
  uint *puVar5;
  FPrimitiveViewRelevance *pFVar6;
  uchar *puVar7;
  float fVar8;
  atomic<unsigned_int> aVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  FSceneViewState *pFVar12;
  FPrimitiveSceneInfo *pFVar13;
  FPrimitiveViewRelevance *pFVar14;
  FScene *pFVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  FHLODVisibilityState *pFVar22;
  undefined4 uVar23;
  FSceneViewState *pFVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  ushort uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<_public:_void___cdecl_FLODSceneTree::UpdateVisibilityStates(FViewInfo_&,UE::Tasks::FTaskEvent_&)_::_5_::FStat_STAT_ViewVisibilityTime_HLODUpdate>
  FVar34;
  longlong lVar35;
  FCachedSystemScalabilityCVars *this_00;
  FHLODSceneNodeVisibilityState *pFVar36;
  FPrimitiveBounds *pFVar37;
  FTaskBase *pFVar38;
  FTask *pFVar39;
  undefined8 uVar40;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  byte bVar41;
  ushort uVar42;
  ForElementType<unsigned_int> FVar43;
  ulonglong uVar44;
  ForElementType<unsigned_int> FVar45;
  FName FVar46;
  ushort uVar47;
  uint uVar48;
  TBitArray<FDefaultBitArrayAllocator> *pTVar49;
  FTaskBase *this_03;
  int *piVar50;
  uint uVar51;
  ForElementType<unsigned_int> FVar52;
  ForElementType<FPrimitiveSceneInfo_*> FVar53;
  float fVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  float fVar63;
  double dVar64;
  ForElementType<FPrimitiveSceneInfo_*> local_1a0;
  undefined8 local_198;
  FSceneViewState *local_190;
  FColor_u_0 local_188 [2];
  FLODSceneNode *local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  undefined4 local_158;
  TMap<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
  *local_150;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  FName local_108;
  FName local_100;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
  *pTStack_d0;
  
  pFVar12 = (FSceneViewState *)param_1->_padding_;
  if (pFVar12 == (FSceneViewState *)0x0) {
    return;
  }
  if (pFVar12->bIsFrozen != 0) {
    return;
  }
  local_190 = pFVar12;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ViewVisibilityTime_HLODUpdate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLODSceneTree::UpdateVisibilityStates(FViewInfo_&,UE::Tasks::FTaskEvent_&)_::_5_::FStat_STAT_ViewVisibilityTime_HLODUpdate>
         )0x0) {
      pFVar33 = ::FName::FName(&local_108,"STAT_ViewVisibilityTime_HLODUpdate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewVisibilityTime_HLODUpdate,*pFVar33,
                 L"STAT_ViewVisibilityTime_HLODUpdate","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar34 = StatPtr_STAT_ViewVisibilityTime_HLODUpdate;
  if (StatPtr_STAT_ViewVisibilityTime_HLODUpdate ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLODSceneTree::UpdateVisibilityStates(FViewInfo_&,UE::Tasks::FTaskEvent_&)_::_5_::FStat_STAT_ViewVisibilityTime_HLODUpdate>
       )0x0) {
    pFVar33 = ::FName::FName(&local_100,"STAT_ViewVisibilityTime_HLODUpdate");
    FVar34 = (FThreadSafeStaticStat<_public:_void___cdecl_FLODSceneTree::UpdateVisibilityStates(FViewInfo_&,UE::Tasks::FTaskEvent_&)_::_5_::FStat_STAT_ViewVisibilityTime_HLODUpdate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewVisibilityTime_HLODUpdate,
                          *pFVar33,L"STAT_ViewVisibilityTime_HLODUpdate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar46 = *(FName *)FVar34;
  bVar21 = false;
  bVar20 = false;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar26 = false;
  bVar25 = false;
  if ((FVar46.ComparisonIndex.Value.Value != 0) || (FVar46.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar21 = false;
      bVar20 = true;
      bVar26 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_178.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x17fe);
        bVar21 = true;
        bVar20 = true;
        bVar26 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170 = FVar46;
      FThreadStats::AddMessage(FVar46,CycleScopeStart);
      bVar25 = true;
      goto LAB_145555a3a;
    }
  }
  bVar21 = bVar26;
  bVar20 = bVar25;
  bVar25 = false;
  local_170 = local_168;
  FVar46 = local_168;
LAB_145555a3a:
  local_150 = &pFVar12->HLODSceneNodeVisibilityStates;
  FVar45 = (ForElementType<unsigned_int>)&pFVar12->HLODVisibilityState;
  iVar31 = (this->Scene->Primitives).ArrayNum;
  (pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.NumBits = iVar31;
  uVar30 = iVar31 + 0x1f;
  uVar51 = uVar30 >> 5;
  if (uVar30 >> 5 != 0) {
    if ((pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.MaxBits + 0x1fU >> 5 < uVar51) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)FVar45,0,uVar51,4);
      (pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.MaxBits = uVar51 << 5;
    }
    FVar52 = (pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.AllocatorInstance.SecondaryData;
    FVar43 = FVar45;
    if (FVar52 != (ForElementType<unsigned_int>)0x0) {
      FVar43 = FVar52;
    }
    memset((void *)FVar43,0,(ulonglong)uVar51 << 2);
    iVar31 = (pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.NumBits;
    uVar51 = iVar31 >> 0x1f & 0x1f;
    uVar30 = iVar31 + uVar51;
    iVar31 = (uVar30 & 0x1f) - uVar51;
    if (iVar31 != 0) {
      FVar52 = (pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.AllocatorInstance.SecondaryData;
      FVar43 = FVar45;
      if (FVar52 != (ForElementType<unsigned_int>)0x0) {
        FVar43 = FVar52;
      }
      puVar5 = (uint *)((longlong)FVar43 + (longlong)((int)uVar30 >> 5) * 4);
      *puVar5 = *puVar5 & 0xffffffffU >> (0x20U - (char)iVar31 & 0x1f);
    }
  }
  iVar31 = (this->Scene->Primitives).ArrayNum;
  (pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.NumBits = iVar31;
  uVar30 = iVar31 + 0x1f;
  uVar51 = uVar30 >> 5;
  if (uVar30 >> 5 != 0) {
    if ((pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.MaxBits + 0x1fU >> 5 < uVar51) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&(pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance,0,
                       uVar51,4);
      (pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.MaxBits = uVar51 << 5;
    }
    FVar52 = (pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance.SecondaryData
    ;
    FVar43 = (ForElementType<unsigned_int>)&(pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap;
    if (FVar52 != (ForElementType<unsigned_int>)0x0) {
      FVar43 = FVar52;
    }
    memset((void *)FVar43,0,(ulonglong)uVar51 << 2);
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
              (&(pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap);
  }
  iVar31 = (this->Scene->Primitives).ArrayNum;
  (pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap.NumBits = iVar31;
  uVar30 = iVar31 + 0x1f;
  uVar51 = uVar30 >> 5;
  if (uVar30 >> 5 != 0) {
    if ((pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap.MaxBits + 0x1fU >> 5 < uVar51) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&(pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance,0
                       ,uVar51,4);
      (pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap.MaxBits = uVar51 << 5;
    }
    FVar52 = (pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.
             SecondaryData;
    FVar43 = (ForElementType<unsigned_int>)&(pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap
    ;
    if (FVar52 != (ForElementType<unsigned_int>)0x0) {
      FVar43 = FVar52;
    }
    memset((void *)FVar43,0,(ulonglong)uVar51 << 2);
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
              (&(pFVar12->HLODVisibilityState).ForcedVisiblePrimitiveMap);
  }
  iVar31 = (this->Scene->Primitives).ArrayNum;
  (pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits = iVar31;
  uVar30 = iVar31 + 0x1f;
  uVar51 = uVar30 >> 5;
  if (uVar30 >> 5 != 0) {
    if ((pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap.MaxBits + 0x1fU >> 5 < uVar51) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&(pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance,0,
                       uVar51,4);
      (pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap.MaxBits = uVar51 << 5;
    }
    FVar52 = (pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.SecondaryData
    ;
    FVar43 = (ForElementType<unsigned_int>)&(pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap;
    if (FVar52 != (ForElementType<unsigned_int>)0x0) {
      FVar43 = FVar52;
    }
    memset((void *)FVar43,0,(ulonglong)uVar51 << 2);
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
              (&(pFVar12->HLODVisibilityState).ForcedHiddenPrimitiveMap);
  }
  if ((pFVar12->HLODVisibilityState).PrimitiveFadingLODMap.NumBits ==
      (this->Scene->Primitives).ArrayNum) {
    uVar47 = (pFVar12->HLODVisibilityState).UpdateCount + 1;
    local_1a0.Data = (FPrimitiveSceneInfo **)0x0;
    (pFVar12->HLODVisibilityState).UpdateCount = uVar47;
    local_198 = 0;
    lVar35 = (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12);
    bVar26 = false;
    if (*(float *)(lVar35 + 0x30) != (pFVar12->HLODVisibilityState).TemporalLODSyncTime) {
      (pFVar12->HLODVisibilityState).TemporalLODSyncTime = *(float *)(lVar35 + 0x30);
      bVar26 = true;
      this_00 = GetCachedScalabilityCVars();
      if (this_00->FieldOfViewAffectsHLOD == 0) {
        (pFVar12->HLODVisibilityState).FOVDistanceScaleSq = 1.0;
      }
      else {
        fVar54 = FCachedSystemScalabilityCVars::CalculateFieldOfViewDistanceScale
                           (this_00,*(float *)((longlong)&param_1->_padding_ + 4));
        (pFVar12->HLODVisibilityState).FOVDistanceScaleSq = fVar54 * fVar54;
      }
    }
    pTVar1 = &this->SceneNodes;
    TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_f8,
               (TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
                *)pTVar1);
    uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar54 = __real_322bcc77;
    local_110 = 0;
    stack0xfffffffffffffec8 = local_f8._16_16_;
    local_148 = (longlong *)local_f8._0_8_;
    auStack_140._0_8_ = local_f8._8_8_;
    local_128 = local_d8;
    pTStack_120 = pTStack_d0;
    uVar44 = local_f8._24_8_ >> 0x20;
    local_118 = (TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
      do {
        pFVar13 = *(FPrimitiveSceneInfo **)(*local_148 + 0x18 + (longlong)(int)uVar44 * 0x28);
        local_180 = (FLODSceneNode *)(*local_148 + 8 + (longlong)(int)uVar44 * 0x28);
        if (pFVar13 != (FPrimitiveSceneInfo *)0x0) {
          uVar51 = (pFVar13->PrimitiveComponentId).PrimIDValue;
          if ((((uVar51 != 0) && (pFVar13->PackedIndex != -1)) &&
              (pFVar13->PackedIndex != 0x7fffffff)) &&
             ((pFVar36 = TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
                         ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                                   ((TMapBase<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FHLODSceneNodeVisibilityState,0>_>
                                     *)local_150,uVar51,&pFVar13->PrimitiveComponentId),
              pFVar36->UpdateCount != uVar47 && (0 < (pFVar13->StaticMeshRelevances).ArrayNum)))) {
            uVar51 = pFVar13->PackedIndex;
            if (uVar51 < (this->Scene->PrimitiveBounds).NumElements) {
              pFVar37 = TScenePrimitiveArray<FPrimitiveBounds>::Get
                                  (&this->Scene->PrimitiveBounds,uVar51);
              fVar8 = pFVar37->MinDrawDistance;
              bVar27 = (float)((uint)fVar8 & uVar30) <= fVar54;
              if (GDistanceCullToSphereEdge == false) {
                dVar62 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.X;
                dVar56 = 0.0;
                dVar60 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.Y;
                dVar17 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.Z;
                dVar55 = (double)param_1->_padding_;
                dVar61 = (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X + dVar62;
                dVar62 = dVar62 - (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X;
                dVar64 = dVar60 - (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y;
                dVar18 = dVar17 - (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z;
                dVar60 = dVar60 + (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y;
                dVar17 = dVar17 + (pFVar37->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z;
                if ((dVar55 < dVar62) || (dVar62 = dVar61, dVar61 < dVar55)) {
                  dVar56 = (dVar55 - dVar62) * (dVar55 - dVar62);
                }
                dVar62 = (double)param_1->_padding_;
                if ((dVar62 < dVar64) || (dVar64 = dVar60, dVar60 < dVar62)) {
                  dVar56 = dVar56 + (dVar62 - dVar64) * (dVar62 - dVar64);
                }
                dVar62 = (double)param_1->_padding_;
                if ((dVar62 < dVar18) || (dVar18 = dVar17, dVar17 < dVar62)) {
                  dVar56 = dVar56 + (dVar62 - dVar18) * (dVar62 - dVar18);
                }
                fVar59 = (float)dVar56;
                fVar63 = fVar59;
              }
              else {
                dVar17 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.Y -
                         (double)param_1->_padding_;
                dVar60 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.X -
                         (double)param_1->_padding_;
                dVar55 = (pFVar37->BoxSphereBounds).Origin.field0_0x0._s_0.Z -
                         (double)param_1->_padding_;
                dVar62 = (pFVar37->BoxSphereBounds).SphereRadius;
                auVar57._0_8_ = dVar55 * dVar55;
                auVar57._8_8_ = 0;
                auVar58._8_8_ = 0;
                auVar58._0_8_ = dVar17 * dVar17 + dVar60 * dVar60 + auVar57._0_8_;
                auVar58 = sqrtpd(auVar57,auVar58);
                dVar60 = (double)(float)auVar58._0_8_;
                fVar59 = (float)(dVar60 + dVar62);
                if (dVar60 < dVar62) {
                  fVar59 = fVar59 * fVar59;
                  fVar63 = 0.0;
                }
                else {
                  fVar59 = fVar59 * fVar59;
                  fVar63 = (float)(dVar60 - dVar62) * (float)(dVar60 - dVar62);
                }
              }
              bVar19 = pFVar37->MaxDrawDistance * pFVar37->MaxDrawDistance *
                       *(float *)((longlong)FVar45 + 0x84) < fVar63;
              if ((fVar59 < fVar8 * fVar8 * *(float *)((longlong)FVar45 + 0x84)) || (bVar19)) {
                uVar29 = 0;
              }
              else {
                uVar29 = 1;
              }
              if (((pFVar13->StaticMeshRelevances).ArrayNum < 1) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              if ((((byte)(pFVar13->StaticMeshRelevances).AllocatorInstance.Data[0x14] & 0x40) == 0)
                 || (bVar27)) {
                uVar11 = *(undefined2 *)&pFVar36->field_0x2;
                if (((char)uVar29 != '\0') || (bVar27)) {
                  uVar29 = 2;
                }
                else {
                  uVar29 = 0;
                }
                *(ushort *)&pFVar36->field_0x2 =
                     ((pFVar36->bIsVisible ^ ZPULL(uVar11,0,1)) & 1 ^ uVar11) & 0xfff9 | uVar29;
              }
              else if (bVar26) {
                uVar42 = *(ushort *)&pFVar36->field_0x2;
                if (pFVar36->bIsFading == 0) {
                  if (uVar29 != ZPULL(uVar42,0,1)) {
                    uVar42 = uVar42 | 4;
                  }
                }
                else {
                  uVar42 = uVar42 & 0xfffb;
                }
                *(ushort *)&pFVar36->field_0x2 =
                     (uVar42 >> 1 & 1 ^ uVar42 & 0xfffe) & 0xfffd | uVar29 * 2;
              }
              if (((((pFVar36->bIsVisible ^ pFVar36->bWasVisible) & 1) != 0) ||
                  (pFVar36->bIsFading != 0)) || (pFVar36->bIsFading != 0)) {
                if ((int)local_198 == local_198._4_4_) {
                  iVar31 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                                     (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
                  local_198 = CONCAT44(local_198._4_4_,iVar31);
                }
                lVar35 = (longlong)(int)local_198;
                local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1);
                local_1a0.Data[lVar35] = pFVar13;
              }
              if (pFVar36->bIsVisible == 0) {
                if (((int)uVar51 < 0) ||
                   ((param_1->PrimitiveViewRelevanceMap).ArrayNum <= (int)uVar51)) {
                  bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                      ,0x188a,
                                      L"A HLOD Node\'s PrimitiveSceneInfo PackedIndex was out of View.Relevancy bounds!"
                                     );
                  if (bVar27) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                }
                else {
                  if (((int)uVar51 < 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pFVar14 = (param_1->PrimitiveViewRelevanceMap).AllocatorInstance.Data;
                  pFVar6 = pFVar14 + (int)uVar51;
                  pFVar6->_padding_ = 0;
                  *(undefined8 *)&pFVar6->field_0x8 = 0;
                  pFVar14[(int)uVar51].bInitializedThisFrame = 1;
                }
              }
              bVar41 = (byte)uVar51;
              if (pFVar36->bIsFading == 0) {
                if (pFVar36->bIsVisible == 0) {
                  if ((((int)uVar51 < 0) || (*(int *)((longlong)FVar45 + 0x78) <= (int)uVar51)) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar27)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pTVar49 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar45 + 0x60);
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar45 + 0x70) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar49 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar45 + 0x70);
                  }
                  if ((int)uVar51 < 0) {
                    uVar51 = uVar51 + 0x1f;
                  }
                  puVar7 = (pTVar49->AllocatorInstance).InlineData +
                           (longlong)((int)uVar51 >> 5) * 4;
                  *(uint *)puVar7 = *(uint *)puVar7 | 1 << (bVar41 & 0x1f);
                  if (!bVar19) goto LAB_14555649d;
                }
                else {
                  if ((((int)uVar51 < 0) || (*(int *)((longlong)FVar45 + 0x58) <= (int)uVar51)) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar27)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pTVar49 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar45 + 0x40);
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar45 + 0x50) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar49 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar45 + 0x50);
                  }
                  if ((int)uVar51 < 0) {
                    uVar51 = uVar51 + 0x1f;
                  }
                  puVar7 = (pTVar49->AllocatorInstance).InlineData +
                           (longlong)((int)uVar51 >> 5) * 4;
                  *(uint *)puVar7 = *(uint *)puVar7 | 1 << (bVar41 & 0x1f);
                }
                HideNodeChildren(this,local_190,local_180);
              }
              else {
                if ((((int)uVar51 < 0) || (*(int *)((longlong)FVar45 + 0x18) <= (int)uVar51)) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar27)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pFVar12 = local_190;
                if (*(ForElementType<unsigned_int> *)((longlong)FVar45 + 0x10) !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar45 = *(ForElementType<unsigned_int> *)((longlong)FVar45 + 0x10);
                }
                uVar32 = uVar51;
                if ((int)uVar51 < 0) {
                  uVar32 = uVar51 + 0x1f;
                }
                uVar48 = 1 << (bVar41 & 0x1f);
                pFVar22 = &local_190->HLODVisibilityState;
                lVar35 = (longlong)((int)uVar32 >> 5) * 4;
                *(uint *)(lVar35 + (longlong)FVar45) = *(uint *)(lVar35 + (longlong)FVar45) | uVar48
                ;
                if ((((int)uVar51 < 0) ||
                    ((local_190->HLODVisibilityState).PrimitiveFadingOutLODMap.NumBits <=
                     (int)uVar51)) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar27)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pFVar24 = local_190;
                FVar45 = (pFVar12->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance.
                         SecondaryData;
                FVar52 = (ForElementType<unsigned_int>)&pFVar22->PrimitiveFadingOutLODMap;
                if (FVar45 != (ForElementType<unsigned_int>)0x0) {
                  FVar52 = FVar45;
                }
                if ((~pFVar36->bIsVisible & 1) == 0) {
                  uVar48 = ~uVar48 & *(uint *)((longlong)FVar52 + lVar35);
                }
                else {
                  uVar48 = uVar48 | *(uint *)((longlong)FVar52 + lVar35);
                }
                *(uint *)((longlong)FVar52 + lVar35) = uVar48;
                FVar45 = (ForElementType<unsigned_int>)&local_190->HLODVisibilityState;
                pFVar22 = &local_190->HLODVisibilityState;
                if ((((int)uVar51 < 0) ||
                    ((local_190->HLODVisibilityState).ForcedVisiblePrimitiveMap.NumBits <=
                     (int)uVar51)) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar27)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                FVar52 = (pFVar24->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.
                         SecondaryData;
                FVar43 = (ForElementType<unsigned_int>)&pFVar22->ForcedVisiblePrimitiveMap;
                if (FVar52 != (ForElementType<unsigned_int>)0x0) {
                  FVar43 = FVar52;
                }
                if ((int)uVar51 < 0) {
                  uVar51 = uVar51 + 0x1f;
                }
                puVar5 = (uint *)((longlong)FVar43 + (longlong)((int)uVar51 >> 5) * 4);
                *puVar5 = *puVar5 | 1 << (bVar41 & 0x1f);
                ApplyNodeFadingToChildren(this,local_190,local_180,pFVar36,true,pFVar36->bIsVisible)
                ;
              }
            }
            else {
              bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                                  ,0x1841,
                                  L"A HLOD Node\'s PrimitiveSceneInfo PackedIndex was out of Scene.Primitive bounds!"
                                 );
              if (bVar27) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
          }
        }
LAB_14555649d:
        uStack_130 = uStack_130 & ~auStack_140._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
        FVar46 = local_170;
        uVar44 = (ulonglong)uStack_12c;
      } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
      if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
        uVar30 = *(int *)&(local_118->Elements).field_0x8 -
                 *(int *)&(local_118->Elements).field_0x34;
        if (uVar30 < 4) {
          iVar31 = 1;
        }
        else {
          uVar44 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
          lVar35 = 0x3f;
          if (uVar44 != 0) {
            for (; uVar44 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          local_158 = (undefined4)lVar35;
          iVar31 = 1 << ((byte)lVar35 & 0x1f);
        }
        if (((0 < (int)uVar30) && (local_118->HashSize < iVar31)) || (iVar31 < local_118->HashSize))
        {
          local_118->HashSize = iVar31;
          TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
          ::Rehash(local_118);
        }
      }
      FVar53.Data = local_1a0.Data;
      iVar31 = (int)local_198;
      if ((int)local_198 != 0) {
        uVar23 = local_198._4_4_;
        this_03 = (FTaskBase *)0x0;
        pFVar15 = this->Scene;
        local_1a0.Data = (FPrimitiveSceneInfo **)0x0;
        local_198 = 0;
        pFVar38 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&UE::Tasks::Private::SmallTaskAllocator);
        if (pFVar38 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(pFVar38,2,true);
          pFVar38->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<`FLODSceneTree::UpdateVisibilityStates'::`103'::<lambda_1>,void,void>
                ::_vftable_;
          if (((*(ulonglong *)&(pFVar38->LowLevelTask).field_0x38 & 0x20) == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsCompleted()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                  ,0x1dd,L"State: %d"), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          (**(code **)(*(longlong *)&(pFVar38->LowLevelTask).field_0x28 + 0x18))
                    (&(pFVar38->LowLevelTask).field_0x28,&pFVar38->LowLevelTask);
          *(FTaskBase **)&pFVar38->LowLevelTask = pFVar38;
          *(undefined ***)&(pFVar38->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&(pFVar38->LowLevelTask).field_0x8 = pFVar38;
          pFVar39 = LowLevelTasks::FTask::GetActiveTask();
          uVar40 = 0;
          if (pFVar39 != (FTask *)0x0) {
            uVar40 = *(undefined8 *)&pFVar39->field_0x30;
          }
          *(undefined8 *)&(pFVar38->LowLevelTask).field_0x30 = uVar40;
          *(undefined8 *)&(pFVar38->LowLevelTask).field_0x38 = 0xc80000543f0e5400;
          pFVar38->ExtendedPriority = None;
          UE::FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar38->_padding_);
          pFVar38[1]._padding_ = (longlong)this;
          pFVar38[1]._padding_ = (longlong)FVar53.Data;
          FVar53.Data = (FPrimitiveSceneInfo **)0x0;
          *(undefined4 *)((longlong)&pFVar38[1]._padding_ + 4) = uVar23;
          *(int *)&pFVar38[1]._padding_ = iVar31;
          pFVar38->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<`FLODSceneTree::UpdateVisibilityStates'::`103'::<lambda_1>_>::
                _vftable_;
          this_03 = pFVar38;
        }
        pFVar38 = (pFVar15->CreateLightPrimitiveInteractionsTask).Pimpl.Reference;
        if (pFVar38 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites(this_03,pFVar38);
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(this_03,0x100);
        if (this_03 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)*param_2,this_03);
          LOCK();
          paVar3 = &this_03->RefCount;
          aVar9 = *paVar3;
          *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar9 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_03->_padding_)(this_03);
          }
        }
        if (FVar53.Data != (FPrimitiveSceneInfo **)0x0) {
          ppFVar4 = FVar53.Data + -1;
          MemoryTrace_Free((ulong64)ppFVar4,0,0);
          if (FLowLevelMemTracker::EnabledState != Disabled) {
            this_01 = FLowLevelMemTracker::TrackerInstance;
            if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
              this_01 = FLowLevelMemTracker::Construct();
            }
            FLowLevelMemTracker::OnLowLevelFree(this_01,Default,ppFVar4,FMalloc,true);
          }
          piVar50 = (int *)((longlong)ppFVar4 - (ulonglong)*(uint *)ppFVar4);
          LOCK();
          iVar31 = *piVar50;
          *piVar50 = *piVar50 + -1;
          UNLOCK();
          if (iVar31 == 1) {
            lVar35 = *(longlong *)(piVar50 + 0x10);
            MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar50,0,0);
            if (lVar35 - (longlong)piVar50 == 0x10000) {
              this_02 = FPageAllocator::Get();
              FPageAllocator::Free(this_02,piVar50);
            }
            else {
              (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar50);
            }
          }
        }
      }
    }
    if (local_1a0.Data != (FPrimitiveSceneInfo **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_1a0.Data);
    }
  }
  else {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                        ,0x180c,L"HLOD update incorrectly allocated primitive maps");
    if (bVar26) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
  return;
}

