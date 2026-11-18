// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 43

// PostSceneUpdate @ 14488a0c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFirstPersonSceneExtension::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FPrimitiveSceneInfo **ppFVar3;
  FFirstPersonSceneExtension *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FPrimitiveSceneInfo **ppFVar9;
  FPrimitiveSceneInfo *local_18 [2];
  
  ppFVar9 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar3 = ppFVar9 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar9 == ppFVar3) {
      return;
    }
    local_18[0] = *ppFVar9;
    if (local_18[0]->Proxy->bIsFirstPerson == 0) {
      if (local_18[0]->Proxy->bIsFirstPersonWorldSpaceRepresentation != '\0') {
        pFVar4 = this->SceneExtension;
        pFVar8 = (pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar8 + (longlong)(pFVar4->WorldSpaceRepresentationPrimitives).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
        piVar1 = &(pFVar4->WorldSpaceRepresentationPrimitives).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance,
                             piVar1);
        }
        (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum = iVar7 + 1;
        pFVar8 = (pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data;
        goto LAB_14488a242;
      }
    }
    else {
      pFVar4 = this->SceneExtension;
      pFVar8 = (pFVar4->FirstPersonPrimitives).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar8 + (longlong)(pFVar4->FirstPersonPrimitives).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (pFVar4->FirstPersonPrimitives).ArrayNum;
      piVar1 = &(pFVar4->FirstPersonPrimitives).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar4->FirstPersonPrimitives).AllocatorInstance,piVar1);
      }
      (pFVar4->FirstPersonPrimitives).ArrayNum = iVar7 + 1;
      pFVar8 = (pFVar4->FirstPersonPrimitives).AllocatorInstance.Data;
LAB_14488a242:
      *(FPrimitiveSceneInfo **)(pFVar8 + (longlong)iVar7 * 8) = local_18[0];
    }
    ppFVar9 = ppFVar9 + 1;
  } while( true );
}

// PreSceneUpdate @ 14488a2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFirstPersonSceneExtension::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FFirstPersonSceneExtension *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  FPrimitiveSceneInfo **ppFVar16;
  FPrimitiveSceneInfo *local_48;
  FPrimitiveSceneInfo **local_40;
  
  ppFVar16 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  local_40 = ppFVar16 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  if (ppFVar16 != local_40) {
    do {
      local_48 = *ppFVar16;
      if (local_48->Proxy->bIsFirstPerson == 0) {
        if (local_48->Proxy->bIsFirstPersonWorldSpaceRepresentation != '\0') {
          pFVar4 = this->SceneExtension;
          pFVar5 = (pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar5 + (longlong)(pFVar4->WorldSpaceRepresentationPrimitives).ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar15 = (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
          bVar8 = false;
          uVar13 = 0;
          if (0 < iVar15) {
            lVar11 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar13 < iVar15) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar12 = uVar13;
              if (*(FPrimitiveSceneInfo **)
                   ((pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data + lVar11) ==
                  local_48) {
                uVar12 = uVar13 - 1;
                lVar11 = lVar11 + -8;
                bVar8 = true;
                uVar10 = 0;
                if ((int)uVar13 < (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum) {
                  uVar10 = ~uVar13 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar3 = (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
                pFVar5 = (pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data;
                iVar15 = ~uVar13 + iVar3;
                if (1 < iVar15) {
                  iVar15 = 1;
                }
                if (iVar15 != 0) {
                  memmove(pFVar5 + (longlong)(int)uVar13 * 8,pFVar5 + (longlong)(iVar3 - iVar15) * 8
                          ,(longlong)iVar15 << 3);
                }
                piVar1 = &(pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
                *piVar1 = *piVar1 + -1;
              }
              iVar15 = (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
              uVar13 = uVar12 + 1;
              lVar11 = lVar11 + 8;
            } while ((int)uVar13 < iVar15);
            if (bVar8) {
              pTVar7 = &pFVar4->WorldSpaceRepresentationPrimitives;
              pTVar14 = &pFVar4->WorldSpaceRepresentationPrimitives;
              goto LAB_14488a68a;
            }
          }
        }
      }
      else {
        pFVar4 = this->SceneExtension;
        pFVar5 = (pFVar4->FirstPersonPrimitives).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar5 + (longlong)(pFVar4->FirstPersonPrimitives).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar15 = (pFVar4->FirstPersonPrimitives).ArrayNum;
        bVar8 = false;
        uVar13 = 0;
        if (0 < iVar15) {
          lVar11 = 0;
          do {
            uVar12 = 0;
            if ((int)uVar13 < iVar15) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar12 = uVar13;
            if (*(FPrimitiveSceneInfo **)
                 ((pFVar4->FirstPersonPrimitives).AllocatorInstance.Data + lVar11) == local_48) {
              uVar12 = uVar13 - 1;
              lVar11 = lVar11 + -8;
              bVar8 = true;
              uVar10 = 0;
              if ((int)uVar13 < (pFVar4->FirstPersonPrimitives).ArrayNum) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar3 = (pFVar4->FirstPersonPrimitives).ArrayNum;
              pFVar5 = (pFVar4->FirstPersonPrimitives).AllocatorInstance.Data;
              iVar15 = ~uVar13 + iVar3;
              if (1 < iVar15) {
                iVar15 = 1;
              }
              if (iVar15 != 0) {
                memmove(pFVar5 + (longlong)(int)uVar13 * 8,pFVar5 + (longlong)(iVar3 - iVar15) * 8,
                        (longlong)iVar15 << 3);
              }
              piVar1 = &(pFVar4->FirstPersonPrimitives).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            iVar15 = (pFVar4->FirstPersonPrimitives).ArrayNum;
            uVar13 = uVar12 + 1;
            lVar11 = lVar11 + 8;
          } while ((int)uVar13 < iVar15);
          if (bVar8) {
            pTVar7 = &pFVar4->FirstPersonPrimitives;
            pTVar14 = &pFVar4->FirstPersonPrimitives;
LAB_14488a68a:
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar14->AllocatorInstance,iVar15,&pTVar7->ArrayMax);
          }
        }
      }
      ppFVar16 = ppFVar16 + 1;
    } while (ppFVar16 != local_40);
  }
  return;
}

// FUpdater @ 144a5aa80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUpdater * __thiscall
RenderCurve::FRenderCurveSceneExtension::FUpdater::FUpdater
          (FUpdater *this,FRenderCurveSceneExtension *param_1)

{
  this->SceneData = param_1;
  this->_padding_ = (longlong)&___7FUpdater_FRenderCurveSceneExtension_RenderCurve__6B_;
  return this;
}

// End @ 144a726a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RenderCurve::FRenderCurveSceneExtension::FUpdater::End(FUpdater *this)

{
  return;
}

// PostSceneUpdate @ 144a9c3f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  FPrimitiveSceneInfo **ppFVar1;
  uint uVar2;
  FPrimitiveSceneInfo *pFVar3;
  FRenderCurveSceneExtension *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  FSparseArrayAllocationInfo *pFVar11;
  FPrimitiveSceneInfo **ppFVar12;
  undefined1 *puVar13;
  FSparseArrayAllocationInfo local_28;
  
  ppFVar12 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar1 = ppFVar12 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar12 == ppFVar1) {
      return;
    }
    pFVar3 = *ppFVar12;
    if ((pFVar3->Proxy != (FPrimitiveSceneProxy *)0x0) &&
       (lVar9 = (**(code **)(pFVar3->Proxy->_padding_ + 0x1c8))(), lVar9 != 0)) {
      uVar2 = (pFVar3->PersistentIndex).Index;
      pFVar4 = this->SceneData;
      if (((int)uVar2 < 0) || (*(int *)&(pFVar4->Datas).field_0x28 <= (int)uVar2)) {
LAB_144a9c4d8:
        pFVar11 = TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *)&pFVar4->Datas,
                             &local_28,uVar2);
        plVar10 = pFVar11->Pointer;
      }
      else {
        if ((*(int *)&(pFVar4->Datas).field_0x28 <= (int)uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar5 = *(undefined1 **)&(pFVar4->Datas).field_0x20;
        puVar13 = &(pFVar4->Datas).field_0x10;
        if (puVar5 != (undefined1 *)0x0) {
          puVar13 = puVar5;
        }
        uVar8 = uVar2;
        if ((int)uVar2 < 0) {
          uVar8 = uVar2 + 0x1f;
        }
        if ((*(uint *)(puVar13 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
        goto LAB_144a9c4d8;
        plVar10 = (longlong *)((longlong)(int)uVar2 * 0x10 + *(longlong *)&pFVar4->Datas);
      }
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)pFVar3;
        plVar10[1] = lVar9;
      }
      this->SceneData->bDirtyData = true;
    }
    ppFVar12 = ppFVar12 + 1;
  } while( true );
}

// PreSceneUpdate @ 144a9c540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  FPersistentPrimitiveIndex *pFVar1;
  FRenderCurveSceneExtension *pFVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  FPersistentPrimitiveIndex *pFVar15;
  
  FinishBufferUpload(this->SceneData,param_1,(FRenderCurveSceneParameters *)0x0);
  pFVar2 = this->SceneData;
  bVar7 = InternalIsEnabled((FScene *)pFVar2->_padding_);
  FRenderCurveSceneExtension::SetEnabled(pFVar2,bVar7);
  if ((this->SceneData->Buffers).Ptr != (FBuffers *)0x0) {
    pFVar15 = (param_2->RemovedPrimitiveIds).DataPtr;
    pFVar1 = pFVar15 + (param_2->RemovedPrimitiveIds).ArrayNum;
    for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 1) {
      uVar8 = pFVar15->Index;
      pFVar2 = this->SceneData;
      if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(pFVar2->Datas).field_0x28)) {
        puVar11 = *(undefined1 **)&(pFVar2->Datas).field_0x20;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &(pFVar2->Datas).field_0x10;
        }
        uVar14 = uVar8 & 0x1f;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar8 >> 5) * 4) >> uVar14 & 1) != 0) {
          iVar12 = pFVar15->Index;
          lVar13 = (longlong)iVar12;
          pFVar2 = this->SceneData;
          puVar11 = &(pFVar2->Datas).field_0x10;
          bVar6 = (byte)iVar12 & 0x1f;
          uVar8 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          lVar3 = *(longlong *)&pFVar2->Datas;
          if ((*(int *)&(pFVar2->Datas).field_0x28 <= iVar12) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4 = *(undefined1 **)&(pFVar2->Datas).field_0x20;
          puVar10 = puVar11;
          if (puVar4 != (undefined1 *)0x0) {
            puVar10 = puVar4;
          }
          iVar9 = iVar12;
          if (iVar12 < 0) {
            iVar9 = iVar12 + 0x1f;
          }
          if (((*(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) & uVar8) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(pFVar2->Datas).field_0x34 != 0) {
            *(int *)(lVar3 + (longlong)*(int *)&(pFVar2->Datas).field_0x30 * 0x10) = iVar12;
          }
          *(undefined4 *)(lVar3 + lVar13 * 0x10) = 0xffffffff;
          if (*(int *)&(pFVar2->Datas).field_0x34 < 1) {
            *(undefined4 *)(lVar3 + 4 + lVar13 * 0x10) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar3 + 4 + lVar13 * 0x10) = *(undefined4 *)&(pFVar2->Datas).field_0x30;
          }
          puVar4 = &(pFVar2->Datas).field_0x34;
          *(int *)puVar4 = *(int *)puVar4 + 1;
          *(int *)&(pFVar2->Datas).field_0x30 = iVar12;
          if ((*(int *)&(pFVar2->Datas).field_0x28 <= iVar12) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4 = *(undefined1 **)&(pFVar2->Datas).field_0x20;
          if (puVar4 != (undefined1 *)0x0) {
            puVar11 = puVar4;
          }
          if (iVar12 < 0) {
            iVar12 = iVar12 + 0x1f;
          }
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) & ~uVar8;
          this->SceneData->bDirtyData = true;
        }
      }
    }
  }
  return;
}

// FUpdater @ 145037600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUpdater * __thiscall
Nanite::FMaterialsSceneExtension::FUpdater::FUpdater
          (FUpdater *this,FMaterialsSceneExtension *param_1)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  FUpdater *pFVar4;
  
  this->SceneData = param_1;
  this->_padding_ = (longlong)&___7FUpdater_FMaterialsSceneExtension_Nanite__6B_;
  (this->AddedList).DataPtr = (FPrimitiveSceneInfo **)0x0;
  (this->AddedList).ArrayNum = 0;
  (this->MaterialUpdateList).DataPtr = (FPrimitiveSceneInfo **)0x0;
  (this->MaterialUpdateList).ArrayNum = 0;
  (this->DirtyPrimitiveList).AllocatorInstance.Data = (int *)0x0;
  (this->DirtyPrimitiveList).ArrayNum = 0;
  pTVar2 = CVarNaniteMaterialBufferAsyncUpdates.Ref;
  (this->DirtyPrimitiveList).ArrayMax = 0;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUpdater *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->bEnableAsync = pTVar2->ShadowedValue[1];
  this->bForceFullUpload = false;
  this->bDefragging = false;
  return this;
}

// operator() @ 14503c900

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>::operator()
          (void *this)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ForElementType<FSpanAllocator::FLinearAllocation> *pFVar13;
  ForElementType<FSpanAllocator::FLinearAllocation> *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ForElementType<FSpanAllocator::FLinearAllocation> *pFVar18;
  longlong lVar19;
  uint *puVar20;
  int local_38;
  int iStack_34;
  
  puVar20 = *(uint **)((longlong)this + 8);
  puVar2 = puVar20 + *(int *)((longlong)this + 0x10);
  iVar5 = local_38;
  do {
    local_38 = iVar5;
    if (puVar20 == puVar2) {
      *(bool *)(*(longlong *)this + 0x41) = GNaniteMaterialBufferForceFullUpload != 0;
      if (GNaniteMaterialBufferForceFullUpload == 1) {
        GNaniteMaterialBufferForceFullUpload = 0;
      }
      bVar9 = Nanite::FMaterialsSceneExtension::ProcessBufferDefragmentation
                        (*(FMaterialsSceneExtension **)(*(longlong *)this + 8));
      *(bool *)(*(longlong *)this + 0x42) = bVar9;
      pbVar1 = (byte *)(*(longlong *)this + 0x41);
      *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)this + 0x42);
      return;
    }
    uVar15 = *puVar20;
    lVar6 = *(longlong *)(*(longlong *)this + 8);
    if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(lVar6 + 0x110))) {
      lVar19 = *(longlong *)(lVar6 + 0x108);
      if (lVar19 == 0) {
        lVar19 = lVar6 + 0xf8;
      }
      uVar17 = uVar15 & 0x1f;
      if ((int)uVar15 < 0) {
        uVar15 = uVar15 + 0x1f;
      }
      if ((*(uint *)(lVar19 + (longlong)((int)uVar15 >> 5) * 4) >> uVar17 & 1) != 0) {
        lVar6 = *(longlong *)(*(longlong *)this + 8);
        local_38 = *(int *)(*(longlong *)(lVar6 + 0xe8) + 8 + (longlong)(int)*puVar20 * 0x18);
        if (local_38 != -1) {
          iVar5 = *(int *)(*(longlong *)(lVar6 + 0xe8) + 0xc + (longlong)(int)*puVar20 * 0x18);
          pFVar18 = (ForElementType<FSpanAllocator::FLinearAllocation> *)(lVar6 + 0x80);
          pFVar14 = *(ForElementType<FSpanAllocator::FLinearAllocation> **)(lVar6 + 0xd0);
          pFVar13 = pFVar14;
          if (pFVar14 == (ForElementType<FSpanAllocator::FLinearAllocation> *)0x0) {
            pFVar13 = pFVar18;
          }
          iStack_34 = iVar5;
          if (pFVar13 <=
              (ForElementType<FSpanAllocator::FLinearAllocation> *)&stack0xffffffffffffffc8) {
            if (pFVar14 == (ForElementType<FSpanAllocator::FLinearAllocation> *)0x0) {
              pFVar14 = pFVar18;
            }
            if ((&stack0xffffffffffffffc8 <
                 pFVar14->InlineData + (longlong)*(int *)(lVar6 + 0xdc) * 8) &&
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
          }
          iVar10 = *(int *)(lVar6 + 0xd8);
          if (iVar10 == *(int *)(lVar6 + 0xdc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FSpanAllocator::FLinearAllocation>_>
                               (0x408,pFVar18,(int *)(lVar6 + 0xdc));
          }
          *(int *)(lVar6 + 0xd8) = iVar10 + 1;
          if (*(ForElementType<FSpanAllocator::FLinearAllocation> **)(lVar6 + 0xd0) !=
              (ForElementType<FSpanAllocator::FLinearAllocation> *)0x0) {
            pFVar18 = *(ForElementType<FSpanAllocator::FLinearAllocation> **)(lVar6 + 0xd0);
          }
          *(ulonglong *)(pFVar18->InlineData + (longlong)iVar10 * 8) = CONCAT44(iStack_34,local_38);
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) - iVar5;
          iVar5 = local_38;
        }
        local_38 = iVar5;
        uVar15 = *puVar20;
        bVar8 = (byte)uVar15 & 0x1f;
        uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
        lVar6 = *(longlong *)(*(longlong *)this + 8);
        lVar19 = *(longlong *)(lVar6 + 0xe8);
        if ((((int)uVar15 < 0) || (*(int *)(lVar6 + 0x110) <= (int)uVar15)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar16 = lVar6 + 0xf8;
        if (*(longlong *)(lVar6 + 0x108) != 0) {
          lVar16 = *(longlong *)(lVar6 + 0x108);
        }
        uVar11 = uVar15;
        if ((int)uVar15 < 0) {
          uVar11 = uVar15 + 0x1f;
        }
        if (((*(uint *)(lVar16 + (longlong)((int)uVar11 >> 5) * 4) & uVar17) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(lVar6 + 0x11c) != 0) {
          *(uint *)(lVar19 + (longlong)*(int *)(lVar6 + 0x118) * 0x18) = uVar15;
        }
        puVar3 = (undefined4 *)(lVar19 + (longlong)(int)uVar15 * 0x18);
        *puVar3 = 0xffffffff;
        if (*(int *)(lVar6 + 0x11c) < 1) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = *(undefined4 *)(lVar6 + 0x118);
        }
        puVar3[1] = uVar12;
        *(int *)(lVar6 + 0x11c) = *(int *)(lVar6 + 0x11c) + 1;
        *(uint *)(lVar6 + 0x118) = uVar15;
        if ((((int)uVar15 < 0) || (*(int *)(lVar6 + 0x110) <= (int)uVar15)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar19 = lVar6 + 0xf8;
        if (*(longlong *)(lVar6 + 0x108) != 0) {
          lVar19 = *(longlong *)(lVar6 + 0x108);
        }
        if ((int)uVar15 < 0) {
          uVar15 = uVar15 + 0x1f;
        }
        puVar4 = (uint *)(lVar19 + (longlong)((int)uVar15 >> 5) * 4);
        *puVar4 = *puVar4 & ~uVar17;
      }
    }
    puVar20 = puVar20 + 1;
    iVar5 = local_38;
  } while( true );
}

// operator() @ 14503d170

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint local_58 [2];
  undefined8 local_50;
  longlong *plStack_48;
  FSparseArrayAllocationInfo local_40;
  longlong local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined2 uStack_1f;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  
  plVar11 = *(longlong **)(*(longlong *)this + 0x10);
  plVar1 = plVar11 + *(int *)(*(longlong *)this + 0x18);
  do {
    if (plVar11 == plVar1) {
      return;
    }
    local_30 = *plVar11;
    lVar3 = *(longlong *)(local_30 + 8);
    if ((*(byte *)(lVar3 + 0x81) & 2) != 0) {
      uVar2 = *(uint *)(local_30 + 0x18c);
      local_20 = *(char *)(lVar3 + 0x290) + '\x01';
      uStack_28 = 0xffffffff;
      uStack_1d = (*(byte *)(lVar3 + 0x2a1) & 0xc) != 0;
      uStack_24 = 0;
      uStack_1f = 0;
      lVar3 = *(longlong *)(*(longlong *)this + 8);
      local_58[0] = uVar2;
      if (((int)uVar2 < 0) || (*(int *)(lVar3 + 0x110) <= (int)uVar2)) {
LAB_14503d290:
        pFVar8 = TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)(lVar3 + 0xe8),
                            &local_40,uVar2);
        local_50 = *(undefined8 *)pFVar8;
        plStack_48 = pFVar8->Pointer;
        plVar9 = pFVar8->Pointer;
      }
      else {
        if ((*(int *)(lVar3 + 0x110) <= (int)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = lVar3 + 0xf8;
        if (*(longlong *)(lVar3 + 0x108) != 0) {
          lVar10 = *(longlong *)(lVar3 + 0x108);
        }
        uVar6 = uVar2;
        if ((int)uVar2 < 0) {
          uVar6 = uVar2 + 0x1f;
        }
        if ((*(uint *)(lVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
        goto LAB_14503d290;
        plVar9 = (longlong *)(*(longlong *)(lVar3 + 0xe8) + (longlong)(int)uVar2 * 0x18);
        plStack_48 = plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = local_30;
        plVar9[1] = CONCAT44(uStack_24,uStack_28);
        plVar9[2] = CONCAT44(uStack_1c,CONCAT13(uStack_1d,CONCAT21(uStack_1f,local_20)));
      }
      lVar3 = *(longlong *)this;
      if (*(char *)(lVar3 + 0x41) == '\0') {
        if (((*(uint **)(lVar3 + 0x30) <= local_58) &&
            (local_58 < *(uint **)(lVar3 + 0x30) + *(int *)(lVar3 + 0x3c))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)(lVar3 + 0x38);
        if (iVar7 == *(int *)(lVar3 + 0x3c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)(lVar3 + 0x30),(int *)(lVar3 + 0x3c));
        }
        *(int *)(lVar3 + 0x38) = iVar7 + 1;
        *(uint *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 4) = local_58[0];
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
}

// operator() @ 14503eb10

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_2>::
operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FUploader *pFVar9;
  FUploader *pFVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  longlong *local_res20;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  int local_98;
  uint uStack_94;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  lVar12 = *(longlong *)this;
  if (*(char *)(lVar12 + 0x42) == '\0') {
    plVar17 = *(longlong **)(lVar12 + 0x20);
    plVar16 = plVar17 + *(int *)(lVar12 + 0x28);
    for (; plVar17 != plVar16; plVar17 = plVar17 + 1) {
      uVar18 = *(uint *)(*plVar17 + 0x18c);
      lVar13 = (longlong)(int)uVar18;
      lVar12 = *(longlong *)(*(longlong *)this + 8);
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(lVar12 + 0x110))) {
        lVar14 = *(longlong *)(lVar12 + 0x108);
        if (lVar14 == 0) {
          lVar14 = lVar12 + 0xf8;
        }
        uVar20 = uVar18 & 0x1f;
        if ((int)uVar18 < 0) {
          uVar18 = uVar18 + 0x1f;
        }
        if ((*(uint *)(lVar14 + (longlong)((int)uVar18 >> 5) * 4) >> uVar20 & 1) != 0) {
          lVar12 = *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0xe8);
          *(undefined2 *)(lVar12 + 0x11 + lVar13 * 0x18) = 0;
          plVar2 = (longlong *)(lVar12 + lVar13 * 0x18);
          bVar11 = 1;
          for (lVar12 = *plVar2 + 0xb0; lVar12 != *plVar2 + 0xe0; lVar12 = lVar12 + 0x10) {
            if (0 < *(int *)(lVar12 + 8)) {
              *(char *)((longlong)plVar2 + 0x11) = *(char *)((longlong)plVar2 + 0x11) + '\x01';
              *(byte *)((longlong)plVar2 + 0x12) = *(byte *)((longlong)plVar2 + 0x12) | bVar11;
            }
            bVar11 = bVar11 * '\x02';
          }
          iVar8 = *(int *)((longlong)plVar2 + 0xc);
          iVar15 = ((-(uint)(*(char *)((longlong)plVar2 + 0x13) != '\0') & 4) +
                   (uint)*(byte *)((longlong)plVar2 + 0x11) * 2) * (uint)*(byte *)(plVar2 + 2);
          if (iVar15 != iVar8) {
            if (iVar8 != 0) {
              FSpanAllocator::Free
                        ((FSpanAllocator *)
                         (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x10),
                         (int)plVar2[1],iVar8);
            }
            if (iVar15 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = FSpanAllocator::Allocate
                                ((FSpanAllocator *)
                                 (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x10),
                                 iVar15);
            }
            *(int *)(plVar2 + 1) = iVar8;
            *(int *)((longlong)plVar2 + 0xc) = iVar15;
            lVar12 = *(longlong *)((longlong)this + 8);
            if (*(char *)(lVar12 + 0x41) == '\0') {
              local_a4 = *(undefined4 *)(*plVar2 + 0x18c);
              if (((*(undefined4 **)(lVar12 + 0x30) <= &local_a4) &&
                  (&local_a4 < *(undefined4 **)(lVar12 + 0x30) + *(int *)(lVar12 + 0x3c))) &&
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
              iVar8 = *(int *)(lVar12 + 0x38);
              if (iVar8 == *(int *)(lVar12 + 0x3c)) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                                  (0x404,(ForElementType<int> *)(lVar12 + 0x30),
                                   (int *)(lVar12 + 0x3c));
              }
              *(int *)(lVar12 + 0x38) = iVar8 + 1;
              *(undefined4 *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 4) = local_a4;
            }
          }
        }
      }
    }
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 8);
    plVar16 = (longlong *)(lVar12 + 0xe8);
    iVar8 = *(int *)(lVar12 + 0x110);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0xf8);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar8 != 0) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x108);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x108) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar18 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar13 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14503ebe9;
        uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uStack_94 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uStack_94 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res10 = (int)lVar13;
      iStack_84 = local_res10 + -1 + iStack_80;
      if (iVar8 < iStack_84) {
LAB_14503ebe9:
        iStack_84 = iVar8;
      }
    }
    local_88 = 0xffffffff;
    uVar18 = *(uint *)(lVar12 + 0x110);
    local_50 = *(int *)(lVar12 + 0xf0) - *(int *)(lVar12 + 0x11c);
    local_70._padding_ = CONCAT44(uStack_94,local_98);
    local_70.CurrentBitIndex = iStack_84;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    iVar15 = (int)uVar18 >> 5;
    uVar20 = uVar18 & 0xffffffe0;
    local_res20 = plVar16;
    pTStack_90 = pTVar1;
    local_78 = plVar16;
    local_70.Array = pTVar1;
    if ((((int)uVar18 < 0) || (iVar8 < (int)uVar18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar17 = local_res20;
    uVar4 = *(uint *)(lVar12 + 0x110);
    if (uVar18 != uVar4) {
      pTVar19 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x108) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x108);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14503ecd3;
        uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar18 = local_res18 + -1 + uVar20;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_14503ecd3:
    while( true ) {
      if ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34) != local_50) {
        local_res8[0] = 0;
        `TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_70.CurrentBitIndex == uVar18) && (local_70.Array == pTVar1)) &&
         (plVar16 == plVar17)) break;
      lVar12 = *plVar16;
      *(undefined2 *)(lVar12 + 0x11 + (longlong)local_70.CurrentBitIndex * 0x18) = 0;
      plVar16 = (longlong *)(lVar12 + (longlong)local_70.CurrentBitIndex * 0x18);
      bVar11 = 1;
      for (lVar12 = *plVar16 + 0xb0; lVar12 != *plVar16 + 0xe0; lVar12 = lVar12 + 0x10) {
        if (0 < *(int *)(lVar12 + 8)) {
          *(char *)((longlong)plVar16 + 0x11) = *(char *)((longlong)plVar16 + 0x11) + '\x01';
          *(byte *)((longlong)plVar16 + 0x12) = *(byte *)((longlong)plVar16 + 0x12) | bVar11;
        }
        bVar11 = bVar11 * '\x02';
      }
      iVar8 = *(int *)((longlong)plVar16 + 0xc);
      iVar15 = ((-(uint)(*(char *)((longlong)plVar16 + 0x13) != '\0') & 4) +
               (uint)*(byte *)((longlong)plVar16 + 0x11) * 2) * (uint)*(byte *)(plVar16 + 2);
      if (iVar15 != iVar8) {
        if (iVar8 != 0) {
          FSpanAllocator::Free
                    ((FSpanAllocator *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x10)
                     ,(int)plVar16[1],iVar8);
        }
        if (iVar15 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = FSpanAllocator::Allocate
                            ((FSpanAllocator *)
                             (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x10),iVar15);
        }
        *(int *)(plVar16 + 1) = iVar8;
        *(int *)((longlong)plVar16 + 0xc) = iVar15;
        lVar12 = *(longlong *)((longlong)this + 8);
        if (*(char *)(lVar12 + 0x41) == '\0') {
          local_a8 = *(undefined4 *)(*plVar16 + 0x18c);
          if (((*(undefined4 **)(lVar12 + 0x30) <= &local_a8) &&
              (&local_a8 < *(undefined4 **)(lVar12 + 0x30) + *(int *)(lVar12 + 0x3c))) &&
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
          iVar8 = *(int *)(lVar12 + 0x38);
          if (iVar8 == *(int *)(lVar12 + 0x3c)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                              (0x404,(ForElementType<int> *)(lVar12 + 0x30),(int *)(lVar12 + 0x3c));
          }
          *(int *)(lVar12 + 0x38) = iVar8 + 1;
          *(undefined4 *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 4) = local_a8;
        }
      }
      local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
      plVar16 = local_78;
    }
  }
  pFVar10 = (FUploader *)0x0;
  lVar12 = *(longlong *)this;
  if (((*(char *)(lVar12 + 0x41) != '\0') || (0 < *(int *)(lVar12 + 0x38))) ||
     (0 < *(int *)(lVar12 + 0x28))) {
    pFVar9 = ::operator_new(0x60);
    if (pFVar9 != (FUploader *)0x0) {
      (pFVar9->PrimitiveDataUploader)._padding_ = 0;
      (pFVar9->PrimitiveDataUploader).UploadDataProxy = (FUploadData *)0x0;
      (pFVar9->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar9->PrimitiveDataUploader).UploadData.Values.ArrayNum = 0;
      (pFVar9->PrimitiveDataUploader).UploadData.Values.ArrayMax = 0;
      (pFVar9->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar9->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
      (pFVar9->PrimitiveDataUploader).UploadData.ScatterOffsets.ArrayMax = 0;
      (pFVar9->MaterialDataUploader)._padding_ = 0;
      (pFVar9->MaterialDataUploader).UploadDataProxy = (FUploadData *)0x0;
      (pFVar9->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar9->MaterialDataUploader).UploadData.Values.ArrayNum = 0;
      (pFVar9->MaterialDataUploader).UploadData.Values.ArrayMax = 0;
      (pFVar9->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar9->MaterialDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
      (pFVar9->MaterialDataUploader).UploadData.ScatterOffsets.ArrayMax = 0;
      pFVar10 = Nanite::FMaterialsSceneExtension::FUploader::FUploader(pFVar9);
    }
    plVar16 = (longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x128);
    if (plVar16 == &local_a0) {
      if (pFVar10 == (FUploader *)0x0) {
        return;
      }
      pFVar5 = (pFVar10->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar10->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar10->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar10->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data;
      pFVar9 = pFVar10;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
    else {
      pFVar9 = (FUploader *)*plVar16;
      *plVar16 = (longlong)pFVar10;
      if (pFVar9 == (FUploader *)0x0) {
        return;
      }
      pFVar5 = (pFVar9->MaterialDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar9->MaterialDataUploader).UploadData.Values.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar9->PrimitiveDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      pFVar5 = (pFVar9->PrimitiveDataUploader).UploadData.Values.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
    }
    ::operator_delete(pFVar9,0x60);
  }
  return;
}

// operator() @ 145040930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_3>::
operator()(void *this,FPrimitiveData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPackedPrimitiveData local_res8;
  
  iVar1 = (param_1->PrimitiveSceneInfo->PersistentIndex).Index;
  if (param_1->MaterialBufferSizeDwords == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7753438364769975674>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                       ,0x286,"Data.MaterialBufferSizeDwords != INDEX_NONE");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x128) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData->MaterialUploader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8.MaterialBufferOffset = param_1->MaterialBufferOffset;
  uVar4 = param_1->NumMaterials - 1 & 0xff | (uint)param_1->MeshPassMask << 8 |
          local_res8._4_4_ & 0xffff0000;
  local_res8._4_4_ = ((uint)param_1->bHasUVDensities << 0x10 ^ uVar4) & 0x10000 ^ uVar4;
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  ::Add(*(TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
          **)(*(longlong *)(*(longlong *)this + 8) + 0x128),&local_res8,iVar1);
  return;
}

// operator() @ 1450415c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_4>::
operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  uint *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FPackedPrimitiveData local_b4;
  longlong *local_a8;
  int local_a0;
  uint uStack_9c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  lVar9 = *(longlong *)this;
  if (*(char *)(lVar9 + 0x41) == '\0') {
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              (*(int **)(lVar9 + 0x30),*(int *)(lVar9 + 0x38),local_res8[0],
               (TLess<void> *)local_res10);
    lVar9 = *(longlong *)this;
    puVar14 = *(uint **)(lVar9 + 0x30);
    iVar4 = *(int *)(lVar9 + 0x38);
    puVar2 = puVar14 + iVar4;
    uVar16 = 0xffffffff;
    while( true ) {
      if (*(int *)(lVar9 + 0x38) != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar14 == puVar2) break;
      uVar17 = *puVar14;
      if (((uVar17 != uVar16) && (lVar10 = *(longlong *)(*(longlong *)this + 8), -1 < (int)uVar17))
         && ((int)uVar17 < *(int *)(lVar10 + 0x110))) {
        lVar11 = *(longlong *)(lVar10 + 0x108);
        if (lVar11 == 0) {
          lVar11 = lVar10 + 0xf8;
        }
        uVar16 = uVar17;
        if ((int)uVar17 < 0) {
          uVar16 = uVar17 + 0x1f;
        }
        if ((*(uint *)(lVar11 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) {
          __l2::<lambda_3>::operator()
                    ((void *)((longlong)this + 8),
                     (FPrimitiveData *)
                     (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0xe8) +
                     (longlong)(int)uVar17 * 0x18));
        }
      }
      puVar14 = puVar14 + 1;
      uVar16 = uVar17;
    }
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 8);
    plVar13 = (longlong *)(lVar9 + 0xe8);
    local_a0 = 0;
    iVar4 = *(int *)(lVar9 + 0x110);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar9 + 0xf8);
    uStack_9c = 1;
    iStack_8c = 0;
    iStack_88 = 0;
    if (iVar4 != 0) {
      pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x108);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x108) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = pTVar1;
      }
      uVar16 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      iStack_88 = 0;
      local_a0 = 0;
      while (uVar16 == 0) {
        iStack_88 = iStack_88 + 0x20;
        lVar10 = (longlong)local_a0;
        local_a0 = local_a0 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0) goto LAB_14504168d;
        uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uStack_9c = -uVar16 & uVar16;
      uVar3 = (ulonglong)uStack_9c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_8c = local_res20 + -1 + iStack_88;
      if (iVar4 < iStack_8c) {
LAB_14504168d:
        iStack_8c = iVar4;
      }
    }
    local_90 = 0xffffffff;
    uVar16 = *(uint *)(lVar9 + 0x110);
    local_58 = *(int *)(lVar9 + 0xf0) - *(int *)(lVar9 + 0x11c);
    local_78._padding_ = CONCAT44(uStack_9c,local_a0);
    local_78.CurrentBitIndex = iStack_8c;
    local_78.UnvisitedBitMask = 0xffffffff;
    local_78._28_4_ = uStack_84;
    local_78.BaseBitIndex = iStack_88;
    iVar12 = (int)uVar16 >> 5;
    uVar17 = uVar16 & 0xffffffe0;
    local_a8 = plVar13;
    pTStack_98 = pTVar1;
    local_80 = plVar13;
    local_78.Array = pTVar1;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar7 = local_a8;
    uVar5 = *(uint *)(lVar9 + 0x110);
    if (uVar16 != uVar5) {
      pTVar15 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x108) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x108);
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) &
               *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar9 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_145041780;
        uVar16 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar16 = (int)lVar9 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_145041780:
    while( true ) {
      if ((int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34) != local_58) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar9 = (longlong)local_78.CurrentBitIndex;
      if (((local_78.CurrentBitIndex == uVar16) && (local_78.Array == pTVar1)) &&
         (plVar13 == plVar7)) break;
      lVar11 = *plVar13;
      lVar10 = lVar11 + lVar9 * 0x18;
      iVar4 = *(int *)(*(longlong *)(lVar11 + lVar9 * 0x18) + 0x18c);
      if ((*(int *)(lVar11 + 0xc + lVar9 * 0x18) == -1) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7753438364769975674>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                             ,0x286,"Data.MaterialBufferSizeDwords != INDEX_NONE"), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x128) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SceneData->MaterialUploader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                             ,0x288,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_b4.MaterialBufferOffset = *(uint *)(lVar10 + 8);
      uVar17 = *(byte *)(lVar10 + 0x10) - 1 & 0xff | (uint)*(byte *)(lVar10 + 0x12) << 8 |
               local_b4._4_4_ & 0xffff0000;
      local_b4._4_4_ = ((uint)*(byte *)(lVar10 + 0x13) << 0x10 ^ uVar17) & 0x10000 ^ uVar17;
      UE::RendererPrivateUtils::Implementation::
      TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
      ::Add(*(TBufferScatterUploader<Nanite::FMaterialsSceneExtension::FPackedPrimitiveData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
              **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x128),&local_b4,iVar4);
      local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
      plVar13 = local_80;
    }
  }
  return;
}

// operator() @ 145041970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_5>::
operator()(void *this,FPrimitiveData *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  FPrimitiveSceneProxy *pFVar7;
  FPrimitiveSceneInfo *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *pTVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  FPrimitiveData *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  TArrayView<unsigned_int,int> local_60 [2];
  
  pFVar7 = param_1->PrimitiveSceneInfo->Proxy;
  uVar5 = *(undefined4 *)&pFVar7[1].DebugMassData.AllocatorInstance.Data;
  local_res10 = param_1;
  if ((*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x128) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneData->MaterialUploader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                          ,0x2ba,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((param_1->MaterialBufferOffset & 1) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data.MaterialBufferOffset % FUploader::MaterialScatterStride == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                          ,699,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((param_1->MaterialBufferSizeDwords & 1) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data.MaterialBufferSizeDwords % FUploader::MaterialScatterStride == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                          ,700,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
  ::AddMultiple_GetRef
            ((TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,2>
              *)(*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x128) + 0x30),local_60,
             param_1->MaterialBufferOffset >> 1,param_1->MaterialBufferSizeDwords);
  if ((((ulonglong)local_60[0].DataPtr & 3) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsAligned(OutputBase, alignof(FNaniteMaterialSlot::FPacked))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                          ,0x2c5,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = param_1->PrimitiveSceneInfo;
  pTVar20 = pFVar8->NaniteMaterialSlots;
  local_res20 = 1;
  puVar21 = local_60[0].DataPtr;
  do {
    if (pTVar20 == (TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *)&pFVar8->OctreeId) {
      if (param_1->bHasUVDensities != false) {
        if ((((ulonglong)puVar21 & 3) != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsAligned(UVDensitiesOut, alignof(float))",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                                ,0x2ed,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar6 = (int)pFVar7[1]._padding_;
        lVar13 = pFVar7[1]._padding_;
        lVar19 = (longlong)iVar6 * 0x50 + lVar13;
        while( true ) {
          if ((int)pFVar7[1]._padding_ != iVar6) {
            `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (lVar13 == lVar19) break;
          piVar1 = (int *)(lVar13 + 0x10);
          puVar2 = (undefined8 *)(lVar13 + 0x30);
          uVar10 = *(undefined8 *)(lVar13 + 0x38);
          lVar13 = lVar13 + 0x50;
          puVar4 = (undefined8 *)((ulonglong)(uint)(*piVar1 << 4) + (longlong)puVar21);
          *puVar4 = *puVar2;
          puVar4[1] = uVar10;
        }
      }
      return;
    }
    if ((param_1->MeshPassMask & (byte)local_res20) != 0) {
      pFVar17 = (pTVar20->AllocatorInstance).Data;
      iVar6 = pTVar20->ArrayNum;
      uVar18 = 0;
      uVar16 = (1L << ((char)uVar5 + 1U & 0x3f)) - 1;
      pFVar3 = pFVar17 + (longlong)iVar6 * 8;
      while( true ) {
        if (pTVar20->ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FNaniteMaterialSlot,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar17 == pFVar3) break;
        uVar12 = 0;
        if ((int)uVar18 < (int)pFVar7[1]._padding_) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar13 = (longlong)(int)uVar18;
        uVar18 = uVar18 + 1;
        uVar15 = (ulonglong)*(int *)(pFVar7[1]._padding_ + 0x10 + lVar13 * 0x50);
        uVar16 = uVar16 & ~(1L << (uVar15 & 0x3f));
        uVar10 = *(undefined8 *)pFVar17;
        pFVar17 = pFVar17 + 8;
        *(undefined8 *)(puVar21 + uVar15 * 2) = uVar10;
      }
      for (; uVar16 != 0; uVar16 = uVar16 & ~(1L << (uVar14 & 0x3f))) {
        uVar15 = 0;
        if (uVar16 != 0) {
          for (; (uVar16 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
        uVar14 = 0x40;
        if (uVar16 != 0) {
          uVar14 = uVar15 & 0xffffffff;
        }
        (puVar21 + uVar14 * 2)[0] = 0xffffffff;
        (puVar21 + uVar14 * 2)[1] = 0xffffffff;
      }
      puVar21 = puVar21 + (ulonglong)local_res10->NumMaterials * 2;
      param_1 = local_res10;
    }
    local_res20 = local_res20 * 2;
    pTVar20 = pTVar20 + 1;
  } while( true );
}

// operator() @ 145041cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins'::__l2::<lambda_6>::
operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  longlong *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  lVar5 = *(longlong *)this;
  if (*(char *)(lVar5 + 0x41) == '\0') {
    plVar9 = *(longlong **)(lVar5 + 0x20);
    plVar13 = plVar9 + *(int *)(lVar5 + 0x28);
    if (plVar9 != plVar13) {
      do {
        if ((*(byte *)(*(longlong *)(*plVar9 + 8) + 0x81) & 2) != 0) {
          __l2::<lambda_5>::operator()
                    ((void *)((longlong)this + 8),
                     (FPrimitiveData *)
                     (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0xe8) +
                     (longlong)*(int *)(*plVar9 + 0x18c) * 0x18));
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar13);
      return;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 8);
    plVar13 = (longlong *)(lVar5 + 0xe8);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0xf8);
    iVar3 = *(int *)(lVar5 + 0x110);
    local_88 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    iStack_70 = 0;
    if (iVar3 != 0) {
      pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x108);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x108) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar11 == 0) {
        iStack_70 = iStack_70 + 0x20;
        lVar8 = (longlong)local_88;
        local_88 = local_88 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145041d97;
        uVar11 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uStack_84 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (int)lVar8;
      iStack_74 = local_res10 + -1 + iStack_70;
      if (iVar3 < iStack_74) {
LAB_145041d97:
        iStack_74 = iVar3;
      }
    }
    uVar11 = *(uint *)(lVar5 + 0x110);
    local_40 = *(int *)(lVar5 + 0xf0) - *(int *)(lVar5 + 0x11c);
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    iVar10 = (int)uVar11 >> 5;
    local_60.CurrentBitIndex = iStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    uVar14 = uVar11 & 0xffffffe0;
    local_res18 = plVar13;
    local_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar9 = local_res18;
    uVar4 = *(uint *)(lVar5 + 0x110);
    if (uVar11 != uVar4) {
      pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x108);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x108) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_145041e90;
        uVar11 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar14;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_145041e90:
    while( true ) {
      if (*(int *)(lVar5 + 0xf0) - *(int *)(lVar5 + 0x11c) != local_40) {
        `TSparseArray<Nanite::FMaterialsSceneExtension::FPrimitiveData,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_60.CurrentBitIndex == uVar11) && (local_60.Array == pTVar1)) &&
         (plVar13 == plVar9)) break;
      __l2::<lambda_5>::operator()
                ((void *)((longlong)this + 8),
                 (FPrimitiveData *)(*plVar13 + (longlong)local_60.CurrentBitIndex * 0x18));
      local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    }
  }
  return;
}

// End @ 1450592d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FMaterialsSceneExtension::FUpdater::End(FUpdater *this)

{
  UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>
            (&this->SceneData->TaskHandles,(FTimespan)0x7fffffffffffffff);
  return;
}

// PostCacheNaniteMaterialBins @ 14506e900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins
          (FUpdater *this,FRDGBuilder *param_1,TArrayView<FPrimitiveSceneInfo_*_const,int> *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  bool bVar5;
  FMaterialsSceneExtension *pFVar6;
  FTaskBase *pFVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  FTaskHandle *pFVar10;
  undefined1 *puVar11;
  FTaskBase *pFVar12;
  longlong lVar13;
  undefined1 auStackY_c8 [32];
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_88;
  undefined4 local_80;
  undefined1 local_78 [40];
  atomic<UE::Tasks::Private::FTaskBase_*> local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  TEventCount<unsigned_int> *local_40;
  FSharedReferencer<1> local_38;
  
  local_38.ReferenceController =
       (TReferenceControllerBase<1> *)(__security_cookie.value ^ (ulonglong)auStackY_c8);
  pFVar6 = this->SceneData;
  if ((pFVar6->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) {
    iVar4 = param_2->ArrayNum;
    uVar9 = *(undefined4 *)&param_2->field_0xc;
    bVar5 = this->bEnableAsync;
    (this->MaterialUpdateList).DataPtr = param_2->DataPtr;
    (this->MaterialUpdateList).ArrayNum = iVar4;
    *(undefined4 *)&(this->MaterialUpdateList).field_0xc = uVar9;
    local_50 = (atomic<UE::Tasks::Private::FTaskBase_*>)
               (pFVar6->TaskHandles).Elements[0].Pimpl.Reference;
    if (local_50 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)local_50 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)local_50 + 0x30) + 1);
      UNLOCK();
    }
    _local_48 = (atomic<unsigned___int64>)(this->SceneData->TaskHandles).Elements[1].Pimpl.Reference
    ;
    if (_local_48 != (atomic<unsigned___int64>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)_local_48 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)_local_48 + 0x30) + 1);
      UNLOCK();
    }
    local_40 = *(TEventCount<unsigned_int> **)(this->SceneData->_padding_ + 0x5060);
    if (local_40 != (TEventCount<unsigned_int> *)0x0) {
      LOCK();
      local_40[0xc].Count = (atomic<unsigned_int>)((int)local_40[0xc].Count + 1);
      UNLOCK();
    }
    local_88.Reference = (FTaskBase *)&stack0xffffffffffffffb0;
    lVar13 = 3;
    local_80 = 3;
    local_78._0_8_ = this;
    local_78._8_8_ = this;
    FRDGBuilder::
    AddSetupTask<_Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins_::__l2::<lambda_2>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_2> *)(local_78 + 0x10),(FPipe *)local_78,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&local_88,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 2;
    pFVar12 = (FTaskBase *)0x0;
    if (pFVar10 != (FTaskHandle *)(local_78 + 0x10)) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_78._16_8_;
      local_78._16_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        local_78._16_8_ = (FTaskBase *)0x0;
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    if ((FTaskBase *)local_78._16_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_78._16_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78._16_8_)->_padding_)(local_78._16_8_,1);
      }
    }
    puVar11 = (undefined1 *)&stack0xffffffffffffffc8;
    do {
      puVar8 = *(undefined8 **)(puVar11 + -8);
      puVar11 = puVar11 + -8;
      lVar13 = lVar13 + -1;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar8 + 6);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    } while (lVar13 != 0);
    bVar5 = this->bEnableAsync;
    local_88.Reference = (this->SceneData->TaskHandles).Elements[2].Pimpl.Reference;
    if (local_88.Reference != (FTaskBase *)0x0) {
      LOCK();
      (local_88.Reference)->RefCount =
           (atomic<unsigned_int>)((int)(local_88.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_78._0_8_ = &local_88;
    local_78._8_4_ = 1;
    local_50 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    _local_48 = (atomic<unsigned___int64>)this;
    FRDGBuilder::
    AddSetupTask<_Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins_::__l2::<lambda_4>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_4> *)(local_78 + 0x18),(FPipe *)&stack0xffffffffffffffb0,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,(ETaskPriority)local_78
               ,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 3;
    if (pFVar10 != (FTaskHandle *)(local_78 + 0x18)) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_78._24_8_;
      local_78._24_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
          local_78._24_8_ = (FTaskBase *)0x0;
        }
      }
    }
    if ((FTaskBase *)local_78._24_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_78._24_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78._24_8_)->_padding_)(local_78._24_8_,1);
      }
    }
    if (local_88.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &(local_88.Reference)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)(local_88.Reference)->_padding_)(local_88.Reference,1);
      }
    }
    bVar5 = this->bEnableAsync;
    local_88.Reference = (this->SceneData->TaskHandles).Elements[2].Pimpl.Reference;
    if (local_88.Reference != (FTaskBase *)0x0) {
      LOCK();
      (local_88.Reference)->RefCount =
           (atomic<unsigned_int>)((int)(local_88.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_50 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_88;
    local_48 = 1;
    local_78._0_8_ = this;
    local_78._8_8_ = this;
    FRDGBuilder::
    AddSetupTask<_Nanite::FMaterialsSceneExtension::FUpdater::PostCacheNaniteMaterialBins_::__l2::<lambda_6>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_6> *)(local_78 + 0x20),(FPipe *)local_78,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&stack0xffffffffffffffb0,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 4;
    if (pFVar10 != (FTaskHandle *)(local_78 + 0x20)) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_78._32_8_;
      local_78._32_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    if ((FTaskBase *)local_78._32_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_78._32_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78._32_8_)->_padding_)(local_78._32_8_,1);
      }
    }
    if (local_88.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &(local_88.Reference)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)(local_88.Reference)->_padding_)(local_88.Reference,1);
      }
    }
    if (this->bEnableAsync == false) {
      FinishMaterialBufferUpload(this->SceneData,param_1,(FNaniteMaterialsParameters *)0x0);
    }
  }
  return;
}

// PostSceneUpdate @ 14506ecb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  FMaterialsSceneExtension *pFVar4;
  FTaskBase *pFVar5;
  int iVar6;
  undefined4 uVar7;
  FTaskHandle *pFVar8;
  FTaskBase *pFVar9;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_res8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_res20;
  FTaskHandle local_28;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_20;
  undefined4 local_18;
  
  pFVar4 = this->SceneData;
  if ((pFVar4->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) {
    iVar6 = (param_2->AddedPrimitiveSceneInfos).ArrayNum;
    uVar7 = *(undefined4 *)&(param_2->AddedPrimitiveSceneInfos).field_0xc;
    (this->AddedList).DataPtr = (param_2->AddedPrimitiveSceneInfos).DataPtr;
    (this->AddedList).ArrayNum = iVar6;
    *(undefined4 *)&(this->AddedList).field_0xc = uVar7;
    if (0 < (this->AddedList).ArrayNum) {
      local_res8.Reference = (pFVar4->TaskHandles).Elements[0].Pimpl.Reference;
      bVar3 = this->bEnableAsync;
      if (local_res8.Reference != (FTaskBase *)0x0) {
        LOCK();
        (local_res8.Reference)->RefCount =
             (atomic<unsigned_int>)((int)(local_res8.Reference)->RefCount + 1);
        UNLOCK();
      }
      local_20 = &local_res8;
      local_18 = 1;
      local_res20 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
      FRDGBuilder::
      AddSetupTask<_Nanite::FMaterialsSceneExtension::FUpdater::PostSceneUpdate_::__l8::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
                (param_1,(<lambda_1> *)&local_28,(FPipe *)&local_res20,
                 (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
                 (ETaskPriority)&local_20,true,bVar3);
      pFVar8 = (this->SceneData->TaskHandles).Elements + 1;
      if (pFVar8 != &local_28) {
        pFVar5 = (pFVar8->Pimpl).Reference;
        pFVar9 = (FTaskBase *)0x0;
        (pFVar8->Pimpl).Reference = (FTaskBase *)local_28.Pimpl.Reference;
        local_28.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar9;
        if (pFVar5 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar5->RefCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar5->_padding_)(pFVar5,1);
          }
        }
      }
      if (local_28.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &((FTaskBase *)local_28.Pimpl.Reference)->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)((FTaskBase *)local_28.Pimpl.Reference)->_padding_)
                    (local_28.Pimpl.Reference,1);
        }
      }
      if (local_res8.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &(local_res8.Reference)->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)(local_res8.Reference)->_padding_)(local_res8.Reference,1);
        }
      }
    }
  }
  return;
}

// PostSceneUpdate @ 14506edf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FOwnershipVisibilitySceneExtension::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FPrimitiveSceneInfo **ppFVar3;
  FPrimitiveSceneProxy *pFVar4;
  FOwnershipVisibilitySceneExtension *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FPrimitiveSceneInfo **ppFVar10;
  int local_18 [4];
  
  ppFVar10 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar3 = ppFVar10 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar10 == ppFVar3) {
      return;
    }
    pFVar4 = (*ppFVar10)->Proxy;
    if ((pFVar4->bIsNaniteMesh != '\0') &&
       (((bool)pFVar4->bOwnerNoSee || (pFVar4->bOnlyOwnerSee != '\0')))) {
      local_18[0] = ((*ppFVar10)->PersistentIndex).Index;
      pFVar5 = this->SceneExtension;
      pFVar6 = (pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance.Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar6 + (longlong)(pFVar5->NanitePrimitivesWithOwnership).ArrayMax * 4 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (pFVar5->NanitePrimitivesWithOwnership).ArrayNum;
      piVar2 = &(pFVar5->NanitePrimitivesWithOwnership).ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance,piVar2);
      }
      (pFVar5->NanitePrimitivesWithOwnership).ArrayNum = iVar9 + 1;
      *(int *)((pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance.Data + (longlong)iVar9 * 4)
           = local_18[0];
    }
    ppFVar10 = ppFVar10 + 1;
  } while( true );
}

// PreSceneUpdate @ 14506ef20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FTaskBase *pFVar4;
  FPersistentPrimitiveIndex *pFVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *pTVar8;
  FTaskBase *pFVar9;
  <lambda_1> local_38;
  atomic<UE::Tasks::Private::FTaskBase_*> local_20;
  atomic<unsigned___int64> local_18;
  TEventCount<unsigned_int> *pTStack_10;
  
  FinishMaterialBufferUpload(this->SceneData,param_1,(FNaniteMaterialsParameters *)0x0);
  iVar3 = *(int *)(this->SceneData->_padding_ + 8);
  if (iVar3 == 5) {
    EVar7 = SP_NumPlatforms;
  }
  else {
    EVar7 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar3];
  }
  bVar6 = UseNanite(EVar7,true,true);
  FMaterialsSceneExtension::SetEnabled(this->SceneData,bVar6);
  if ((this->SceneData->MaterialBuffers).Ptr != (FMaterialBuffers *)0x0) {
    local_18 = (atomic<unsigned___int64>)(param_2->RemovedPrimitiveIds).DataPtr;
    pTStack_10 = *(TEventCount<unsigned_int> **)&(param_2->RemovedPrimitiveIds).ArrayNum;
    pFVar9 = (FTaskBase *)0x0;
    local_38.RemovedList.DataPtr = (FPersistentPrimitiveIndex *)0x0;
    local_38.RemovedList.ArrayNum = 0;
    local_38.RemovedList._12_4_ = 0;
    local_20 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    FRDGBuilder::
    AddSetupTask<_Nanite::FMaterialsSceneExtension::FUpdater::PreSceneUpdate_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_38,(FPipe *)&stack0xffffffffffffffe0,
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (char)&local_38 + 8,true,this->bEnableAsync);
    pFVar5 = local_38.RemovedList.DataPtr;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_38.RemovedList.DataPtr,local_38.RemovedList.ArrayNum);
    if ((FTaskHandle *)pFVar5 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar5);
    }
    pTVar8 = &this->SceneData->TaskHandles;
    if ((<lambda_1> *)pTVar8 != &local_38) {
      pFVar4 = pTVar8->Elements[0].Pimpl.Reference;
      pTVar8->Elements[0].Pimpl.Reference = (FTaskBase *)local_38.__this;
      local_38.__this = (FUpdater *)pFVar9;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if ((FTaskBase *)local_38.__this != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_38.__this)->RefCount;
      iVar3 = *(int *)&paVar1->field_0x0;
      *(int *)&paVar1->field_0x0 = *(int *)&paVar1->field_0x0 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)((FTaskBase *)local_38.__this)->_padding_)(local_38.__this,1);
      }
    }
  }
  return;
}

// PreSceneUpdate @ 14506f080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FOwnershipVisibilitySceneExtension::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FPrimitiveSceneProxy *pFVar4;
  FOwnershipVisibilitySceneExtension *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FPrimitiveSceneInfo **ppFVar15;
  int local_48 [2];
  FPrimitiveSceneInfo **local_40;
  
  ppFVar15 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  local_40 = ppFVar15 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  if (ppFVar15 != local_40) {
    do {
      pFVar4 = (*ppFVar15)->Proxy;
      if ((pFVar4->bIsNaniteMesh != '\0') &&
         (((bool)pFVar4->bOwnerNoSee || (pFVar4->bOnlyOwnerSee != '\0')))) {
        local_48[0] = ((*ppFVar15)->PersistentIndex).Index;
        pFVar5 = this->SceneExtension;
        pFVar6 = (pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance.Data;
        if ((pFVar6 <= (FScriptContainerElement *)local_48) &&
           (((FScriptContainerElement *)local_48 <
             pFVar6 + (longlong)(pFVar5->NanitePrimitivesWithOwnership).ArrayMax * 4 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (pFVar5->NanitePrimitivesWithOwnership).ArrayNum;
        bVar8 = false;
        uVar13 = 0;
        if (0 < iVar14) {
          lVar11 = 0;
          do {
            uVar12 = 0;
            if ((int)uVar13 < iVar14) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar12 = uVar13;
            if (*(int *)((pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance.Data + lVar11) ==
                local_48[0]) {
              uVar12 = uVar13 - 1;
              lVar11 = lVar11 + -4;
              bVar8 = true;
              uVar10 = 0;
              if ((int)uVar13 < (pFVar5->NanitePrimitivesWithOwnership).ArrayNum) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar3 = (pFVar5->NanitePrimitivesWithOwnership).ArrayNum;
              pFVar6 = (pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance.Data;
              iVar14 = ~uVar13 + iVar3;
              if (1 < iVar14) {
                iVar14 = 1;
              }
              if (iVar14 != 0) {
                memmove(pFVar6 + (longlong)(int)uVar13 * 4,pFVar6 + (longlong)(iVar3 - iVar14) * 4,
                        (longlong)iVar14 << 2);
              }
              piVar2 = &(pFVar5->NanitePrimitivesWithOwnership).ArrayNum;
              *piVar2 = *piVar2 + -1;
            }
            iVar14 = (pFVar5->NanitePrimitivesWithOwnership).ArrayNum;
            uVar13 = uVar12 + 1;
            lVar11 = lVar11 + 4;
          } while ((int)uVar13 < iVar14);
          if (bVar8) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&(pFVar5->NanitePrimitivesWithOwnership).AllocatorInstance,iVar14,
                       &(pFVar5->NanitePrimitivesWithOwnership).ArrayMax);
          }
        }
      }
      ppFVar15 = ppFVar15 + 1;
    } while (ppFVar15 != local_40);
  }
  return;
}

// ~FUpdater @ 145479990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCulling::FUpdater::~FUpdater(FUpdater *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  this->_padding_ = (longlong)&___7FUpdater_FSceneCulling__6B_;
  pFVar3 = (this->PreUpdateTaskHandle).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISceneExtensionUpdater__6B_;
  return;
}

// operator() @ 14547ddb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FSceneCulling::FUpdater::PreSceneUpdate'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_Pre> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  bool bVar13;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"SceneCulling_Update");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2701,"SceneCulling_Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0xa8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2701);
  }
  FVar9 = StatPtr_STAT_SceneCulling_Update_Pre;
  if (StatPtr_STAT_SceneCulling_Update_Pre ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_Pre>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_SceneCulling_Update_Pre");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_Pre>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_Update_Pre,*pFVar8,
                       L"Update Pre","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                   ,0xa8e);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar11.Value;
      uStackX_14 = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14547df57;
    }
  }
  bVar5 = false;
  FVar12 = local_60;
LAB_14547df57:
  if (__CsvProfilerStat2704 == false) {
    FCsvProfilerTrace::OutputInlineStat("PreSceneUpdate",_GCsvCategory_SceneCulling.Index);
    __CsvProfilerStat2704 = true;
  }
  uVar10 = _GCsvCategory_SceneCulling.Index;
  FCsvProfiler::BeginStat("PreSceneUpdate",_GCsvCategory_SceneCulling.Index,"CSV_PreSceneUpdate");
  LOCK();
  piVar1 = (int *)(*(longlong *)this + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DebugTaskCounter++ == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0xa92,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FSceneCullingBuilder::ProcessPreSceneUpdate
            (*(FSceneCullingBuilder **)(*(longlong *)(*(longlong *)this + 0x18) + 0x2f8),
             (FScenePreUpdateChangeSet *)((longlong)this + 8));
  LOCK();
  piVar1 = (int *)(*(longlong *)this + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("--DebugTaskCounter == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0xa96,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FCsvProfiler::EndStat("PreSceneUpdate",uVar10);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// PostSceneUpdate @ 1454ad6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSceneCulling::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FTaskBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTaskHandle FVar7;
  FTaskHandle *pFVar8;
  FLLMScope local_res8 [2];
  FTaskHandle local_res20;
  FName local_88;
  undefined1 local_80 [16];
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  FPipe local_60;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *local_38;
  FViewSceneChangeSet *pFStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_SceneCulling.UniqueName,false,None,Default,true)
  ;
  local_88 = LLMTagDeclaration_SceneCulling.UniqueName;
  FMemScope::FMemScope((FMemScope *)(local_80 + 8),&local_88,true);
  if ((this->SceneCulling->ActiveUpdaterImplementation).Ptr != (FSceneCullingBuilder *)0x0) {
    pFVar4 = (this->SceneCulling->PostUpdateTaskHandle).Pimpl.Reference;
    if (((pFVar4 != (FTaskBase *)0x0) && ((pFVar4->Subsequents).bIsClosed == (atomic<bool>)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneCulling.PostUpdateTaskHandle.IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                           ,0xaaa,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = this->SceneCulling->bUseAsyncUpdate;
    local_res20.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->PreUpdateTaskHandle).Pimpl.Reference;
    if (local_res20.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      ((FTaskBase *)local_res20.Pimpl.Reference)->RefCount =
           (atomic<unsigned_int>)((int)((FTaskBase *)local_res20.Pimpl.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_68 = 1;
    local_70.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_70,1,&local_64);
    ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
              (local_70.Data,&local_res20,1);
    local_60.TaskCount = (atomic<unsigned___int64>)(param_2->AddedPrimitiveIds).DataPtr;
    local_60.EmptyEventRef.Object =
         *(TEventCount<unsigned_int> **)&(param_2->AddedPrimitiveIds).ArrayNum;
    local_60.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(param_2->AddedPrimitiveSceneInfos).DataPtr;
    local_60.DebugName = *(wchar_t **)&(param_2->AddedPrimitiveSceneInfos).ArrayNum;
    local_38 = param_2->PrimitiveUpdates;
    pFStack_30 = param_2->ViewUpdateChangeSet;
    local_60.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    FVar7 = FRDGBuilder::
            AddSetupTask<_FSceneCulling::FUpdater::PostSceneUpdate_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                      (param_1,(<lambda_1> *)local_80,&local_60,
                       (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                       (ETaskPriority)&local_70,true,bVar6);
    pFVar8 = &this->SceneCulling->PostUpdateTaskHandle;
    if ((TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar8 != FVar7.Pimpl.Reference) {
      pFVar4 = (pFVar8->Pimpl).Reference;
      (pFVar8->Pimpl).Reference = *(FTaskBase **)FVar7.Pimpl.Reference;
      *(undefined8 *)FVar7.Pimpl.Reference = 0;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if ((FUpdater *)local_80._0_8_ != (FUpdater *)0x0) {
      LOCK();
      pFVar8 = &((FUpdater *)(local_80._0_8_ + 0x28))->PreUpdateTaskHandle;
      iVar3 = *(int *)&(pFVar8->Pimpl).Reference;
      *(int *)&(pFVar8->Pimpl).Reference = *(int *)&(pFVar8->Pimpl).Reference + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*(longlong *)local_80._0_8_)(local_80._0_8_,1);
      }
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_70.Data,local_68);
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    if (local_res20.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)((longlong)local_res20.Pimpl.Reference + 0x30);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_res20.Pimpl.Reference)(local_res20.Pimpl.Reference,1);
      }
    }
  }
  FMemScope::~FMemScope((FMemScope *)(local_80 + 8));
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PreSceneUpdate @ 1454ad900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSceneCulling::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  FTaskBase *pFVar7;
  FLLMScope local_res8 [2];
  undefined1 local_68 [32];
  FPipe local_48;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *local_20;
  FViewSceneChangeSet *pFStack_18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_SceneCulling.UniqueName,false,None,Default,true)
  ;
  local_68._8_4_ = LLMTagDeclaration_SceneCulling.UniqueName.ComparisonIndex.Value;
  local_68._12_4_ = LLMTagDeclaration_SceneCulling.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)(local_68 + 0x18),(FName *)(local_68 + 8),true);
  FinalizeUpdateAndClear(this->SceneCulling,param_1,param_3,false);
  bVar6 = BeginUpdate(this->SceneCulling,param_1,true);
  if (bVar6) {
    local_48.TaskCount = (atomic<unsigned___int64>)(param_2->RemovedPrimitiveIds).DataPtr;
    local_48.EmptyEventRef.Object =
         *(TEventCount<unsigned_int> **)&(param_2->RemovedPrimitiveIds).ArrayNum;
    pFVar7 = (FTaskBase *)0x0;
    local_48.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(param_2->RemovedPrimitiveSceneInfos).DataPtr;
    local_48.DebugName = *(wchar_t **)&(param_2->RemovedPrimitiveSceneInfos).ArrayNum;
    local_20 = param_2->PrimitiveUpdates;
    pFStack_18 = param_2->ViewUpdateChangeSet;
    local_68._8_4_ = 0;
    local_68._12_4_ = 0;
    local_68._16_8_ = 0;
    local_48.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    FRDGBuilder::
    AddSetupTask<_FSceneCulling::FUpdater::PreSceneUpdate_::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,(<lambda_1> *)local_68,&local_48,
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (char)local_68 + 8,true,this->SceneCulling->bUseAsyncUpdate);
    uVar5 = local_68._8_8_;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_68._8_8_,local_68._16_4_);
    if ((FName)uVar5 != (FName)0x0) {
      FMemory::Free((void *)uVar5);
    }
    pFVar1 = &this->PreUpdateTaskHandle;
    if (pFVar1 != (FTaskHandle *)local_68) {
      pFVar4 = (pFVar1->Pimpl).Reference;
      (pFVar1->Pimpl).Reference = (FTaskBase *)local_68._0_8_;
      local_68._0_8_ = pFVar7;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar4->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if ((FTaskBase *)local_68._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &((FTaskBase *)local_68._0_8_)->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_68._0_8_)->_padding_)(local_68._0_8_,1);
      }
    }
  }
  FMemScope::~FMemScope((FMemScope *)(local_68 + 0x18));
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// operator() @ 14560d760

void __thiscall `FShadowScene::FUpdater::PostLightsUpdate'::__l5::<lambda_1>::operator()(void *this)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FSparseArrayAllocationInfo *pFVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  FSparseArrayAllocationInfo local_a8;
  FSparseArrayAllocationInfo local_98;
  longlong local_88;
  longlong *local_80;
  uint local_78;
  longlong local_70;
  longlong *local_68;
  uint local_60;
  
  iVar9 = *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x3c) < *(int *)((longlong)this + 0x38)) {
    iVar9 = *(int *)((longlong)this + 0x38);
  }
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            ((TBitArray<FDefaultBitArrayAllocator> *)(*(longlong *)(*(longlong *)this + 8) + 0x58),
             iVar9,false);
  uVar7 = __real_3f800000;
  puVar15 = *(uint **)((longlong)this + 0x18);
  lVar3 = *(longlong *)this;
  puVar2 = puVar15 + *(int *)((longlong)this + 0x20);
  for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
    uVar11 = *puVar15;
    lVar20 = (longlong)(int)uVar11;
    lVar4 = *(longlong *)(*(longlong *)this + 8);
    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 8) + 0x2a98) + 0x38 + lVar20 * 0x40) & 3) ==
        0) {
      puVar14 = *(uint **)(lVar4 + 0x48);
      puVar1 = puVar14 + *(int *)(lVar4 + 0x50);
      for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
        if (*puVar14 == uVar11) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShadowScene.DirectionalLights.FindByPredicate([LightId](const FDirectionalLightData& DirectionalLightData) { return DirectionalLightData.LightId == LightId; }) == nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowScene.cpp"
                             ,0x79,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
      }
      lVar4 = *(longlong *)(*(longlong *)this + 8);
      iVar9 = *(int *)(lVar4 + 0x50);
      if (iVar9 == *(int *)(lVar4 + 0x54)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar4 + 0x48),(int *)(lVar4 + 0x54));
      }
      *(int *)(lVar4 + 0x50) = iVar9 + 1;
      *(uint *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar9 * 4) = uVar11;
    }
    lVar4 = *(longlong *)(lVar3 + 8);
    lVar19 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x2a98);
    if (((int)uVar11 < 0) || (*(int *)(lVar4 + 0x38) <= (int)uVar11)) {
LAB_14560d8cc:
      if (((int)uVar11 < 0) || (*(int *)(lVar4 + 0x38) <= (int)uVar11)) {
LAB_14560d943:
        pFVar13 = TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)(lVar4 + 0x10),
                             &local_a8,uVar11);
        pFVar18 = pFVar13->Pointer;
      }
      else {
        if ((*(int *)(lVar4 + 0x38) <= (int)uVar11) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar21 = lVar4 + 0x20;
        if (*(longlong *)(lVar4 + 0x30) != 0) {
          lVar21 = *(longlong *)(lVar4 + 0x30);
        }
        uVar10 = uVar11;
        if ((int)uVar11 < 0) {
          uVar10 = uVar11 + 0x1f;
        }
        if ((*(uint *)(lVar21 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
        goto LAB_14560d943;
        pFVar18 = (((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)(lVar4 + 0x10))->Data).
                  AllocatorInstance.Data + lVar20 * 8;
      }
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar18 = 0;
      }
    }
    else {
      lVar21 = *(longlong *)(lVar4 + 0x30);
      if (lVar21 == 0) {
        lVar21 = lVar4 + 0x20;
      }
      uVar10 = uVar11;
      if ((int)uVar11 < 0) {
        uVar10 = uVar11 + 0x1f;
      }
      if ((*(uint *)(lVar21 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
      goto LAB_14560d8cc;
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    *(undefined4 *)(lVar20 * 8 + lVar4) = 0xffffffff;
    lVar21 = *(longlong *)(lVar3 + 8);
    bVar6 = (byte)uVar11;
    if ((*(byte *)(lVar19 + 0x38 + lVar20 * 0x40) & 0x80) == 0) {
      if ((((int)uVar11 < 0) || (*(int *)(lVar21 + 0x70) <= (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar19 = lVar21 + 0x58;
      if (*(longlong *)(lVar21 + 0x68) != 0) {
        lVar19 = *(longlong *)(lVar21 + 0x68);
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 0x1f;
      }
      uVar23 = 0;
      puVar1 = (uint *)(lVar19 + (longlong)((int)uVar11 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar6 & 0x1f));
    }
    else {
      if ((((int)uVar11 < 0) || (*(int *)(lVar21 + 0x70) <= (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar19 = lVar21 + 0x58;
      if (*(longlong *)(lVar21 + 0x68) != 0) {
        lVar19 = *(longlong *)(lVar21 + 0x68);
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 0x1f;
      }
      puVar1 = (uint *)(lVar19 + (longlong)((int)uVar11 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
      uVar23 = uVar7;
    }
    *(undefined4 *)(lVar20 * 8 + 4 + lVar4) = uVar23;
  }
  lVar4 = *(longlong *)((longlong)this + 0x28);
  if (((*(longlong *)(lVar4 + 8) != 0) && (*(int *)(*(longlong *)(lVar4 + 8) + 8) != 0xa0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  *(int *)(lVar4 + 0x288) = *(int *)(lVar4 + 0x288) + 1;
  UNLOCK();
  if (((*(longlong *)(lVar4 + 8) != 0) && (*(int *)(*(longlong *)(lVar4 + 8) + 8) != 0xa0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_88 = *(longlong *)(lVar4 + 8);
  local_78 = 0;
  local_80 = (longlong *)(lVar4 + 0x200);
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
  TConstPayloadIterator<FUpdateLightTransformParameters>::SkipDeleted(&local_88);
  if (((*(longlong *)(lVar4 + 8) != 0) && (*(int *)(*(longlong *)(lVar4 + 8) + 8) != 0xa0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_70 = *(longlong *)(lVar4 + 8);
  if (local_70 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = *(uint *)(local_70 + 0x18);
  }
  plVar16 = &local_70;
  local_68 = (longlong *)(lVar4 + 0x200);
  do {
    TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
    TConstPayloadIterator<FUpdateLightTransformParameters>::SkipDeleted(plVar16);
    if ((local_88 != local_70) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payloads == It.Payloads",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0x17d,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = local_78;
    if (local_78 == local_60) {
      LOCK();
      *(int *)(lVar4 + 0x288) = *(int *)(lVar4 + 0x288) + -1;
      UNLOCK();
      return;
    }
    if (((local_88 == 0) || (*(int *)(local_88 + 0x28) <= (int)local_78)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payloads && Index < Payloads->CommandSlots.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0x175,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar16 = local_80;
    lVar20 = local_88;
    uVar10 = 0;
    if ((int)uVar11 < *(int *)(local_88 + 0x28)) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = *(uint *)(*(longlong *)(lVar20 + 0x20) + (longlong)(int)uVar11 * 4);
    uVar12 = 0;
    if ((int)uVar10 < (int)plVar16[1]) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar20 = *plVar16;
    if ((*(char *)(lVar20 + 0x18 + (longlong)(int)uVar10 * 0x50) != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Command.bDeleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0x177,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar12 = 0;
    if ((int)uVar11 < *(int *)(local_88 + 0x18)) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar19 = *(longlong *)(lVar3 + 8);
    uVar11 = *(uint *)(*(longlong *)(lVar20 + (longlong)(int)uVar10 * 0x50) + 0x34);
    lVar21 = (longlong)(int)uVar11;
    lVar20 = *(longlong *)(*(longlong *)(lVar19 + 8) + 0x2a98);
    if (((int)uVar11 < 0) || (*(int *)(lVar19 + 0x38) <= (int)uVar11)) {
LAB_14560dd66:
      if (((int)uVar11 < 0) || (*(int *)(lVar19 + 0x38) <= (int)uVar11)) {
LAB_14560dddd:
        pFVar13 = TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)(lVar19 + 0x10),
                             &local_98,uVar11);
        pFVar18 = pFVar13->Pointer;
      }
      else {
        if ((*(int *)(lVar19 + 0x38) <= (int)uVar11) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = lVar19 + 0x20;
        if (*(longlong *)(lVar19 + 0x30) != 0) {
          lVar17 = *(longlong *)(lVar19 + 0x30);
        }
        uVar10 = uVar11;
        if ((int)uVar11 < 0) {
          uVar10 = uVar11 + 0x1f;
        }
        if ((*(uint *)(lVar17 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
        goto LAB_14560dddd;
        pFVar18 = (((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)(lVar19 + 0x10))->Data).
                  AllocatorInstance.Data + lVar21 * 8;
      }
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar18 = 0;
      }
    }
    else {
      lVar17 = *(longlong *)(lVar19 + 0x30);
      if (lVar17 == 0) {
        lVar17 = lVar19 + 0x20;
      }
      uVar10 = uVar11;
      if ((int)uVar11 < 0) {
        uVar10 = uVar11 + 0x1f;
      }
      if ((*(uint *)(lVar17 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
      goto LAB_14560dd66;
    }
    lVar22 = lVar21 * 8;
    lVar19 = *(longlong *)(lVar19 + 0x10);
    *(undefined4 *)(lVar19 + lVar22) = 0xffffffff;
    lVar17 = *(longlong *)(lVar3 + 8);
    bVar6 = (byte)uVar11;
    if ((*(byte *)(lVar21 * 0x40 + lVar20 + 0x38) & 0x80) == 0) {
      if ((((int)uVar11 < 0) || (*(int *)(lVar17 + 0x70) <= (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = lVar17 + 0x58;
      if (*(longlong *)(lVar17 + 0x68) != 0) {
        lVar20 = *(longlong *)(lVar17 + 0x68);
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 0x1f;
      }
      plVar16 = &local_88;
      puVar2 = (uint *)(lVar20 + (longlong)((int)uVar11 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar6 & 0x1f));
      *(undefined4 *)(lVar19 + 4 + lVar22) = 0;
      local_78 = local_78 + 1;
    }
    else {
      if ((((int)uVar11 < 0) || (*(int *)(lVar17 + 0x70) <= (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = lVar17 + 0x58;
      if (*(longlong *)(lVar17 + 0x68) != 0) {
        lVar20 = *(longlong *)(lVar17 + 0x68);
      }
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 0x1f;
      }
      plVar16 = &local_88;
      puVar2 = (uint *)(lVar20 + (longlong)((int)uVar11 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << (bVar6 & 0x1f);
      *(undefined4 *)(lVar19 + 4 + lVar22) = uVar7;
      local_78 = local_78 + 1;
    }
  } while( true );
}

// PostLightsUpdate @ 14563b9b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FShadowScene::FUpdater::PostLightsUpdate
          (FUpdater *this,FRDGBuilder *param_1,FLightSceneChangeSet *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FTaskBase *pFVar4;
  undefined8 uVar5;
  FTaskHandle *pFVar6;
  FTaskBase *pFVar7;
  undefined1 local_68 [32];
  int *local_48;
  TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *pTStack_40;
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *local_38;
  undefined8 uStack_30;
  TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *local_28;
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTStack_20;
  undefined8 local_18;
  
  iVar3 = (param_2->SceneLightInfoUpdates->Commands).ArrayNum;
  if (0 < iVar3) {
    pFVar7 = (this->ShadowScene->SceneChangeUpdateTask).Pimpl.Reference;
    if (pFVar7 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar7);
    }
    local_48 = (param_2->RemovedLightIds).DataPtr;
    pTStack_40 = *(TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> **)
                  &(param_2->RemovedLightIds).ArrayNum;
    local_38 = (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
               (param_2->AddedLightIds).DataPtr;
    uStack_30._0_4_ = (param_2->AddedLightIds).ArrayNum;
    uStack_30._4_4_ = *(int *)&(param_2->AddedLightIds).field_0xc;
    local_28 = param_2->SceneLightInfoUpdates;
    pTStack_20 = param_2->RemovedLightsMask;
    local_18._0_4_ = param_2->PreUpdateMaxIndex;
    local_18._4_4_ = param_2->PostUpdateMaxIndex;
    pFVar7 = (FTaskBase *)0x0;
    local_68._8_8_ = (FTaskHandle *)0x0;
    local_68._16_8_ = 0;
    local_68._24_8_ = this;
    FRDGBuilder::
    AddSetupTask<_FShadowScene::FUpdater::PostLightsUpdate_::__l5::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,(<lambda_1> *)local_68,(FPipe *)(local_68 + 0x18),
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (char)local_68 + 8,true,0x40 < iVar3);
    uVar5 = local_68._8_8_;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_68._8_8_,local_68._16_4_);
    if ((FTaskHandle *)uVar5 != (FTaskHandle *)0x0) {
      FMemory::Free((void *)uVar5);
    }
    pFVar6 = &this->ShadowScene->SceneChangeUpdateTask;
    if (pFVar6 != (FTaskHandle *)local_68) {
      pFVar4 = (pFVar6->Pimpl).Reference;
      (pFVar6->Pimpl).Reference = (FTaskBase *)local_68._0_8_;
      local_68._0_8_ = pFVar7;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if ((FTaskBase *)local_68._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_68._0_8_)->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_68._0_8_)->_padding_)(local_68._0_8_,1);
      }
    }
  }
  return;
}

// PostSceneUpdate @ 14563bb10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShadowScene::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  int *piVar1;
  FPrimitiveSceneInfo **ppFVar2;
  longlong *plVar3;
  FShadowScene *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  bool bVar10;
  EShaderPlatform EVar11;
  int iVar12;
  int iVar13;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FPrimitiveSceneInfo **ppFVar15;
  longlong *plVar16;
  undefined1 local_res8 [8];
  FPrimitiveSceneInfo *local_38;
  longlong local_30;
  
  ppFVar15 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar2 = ppFVar15 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar15 == ppFVar2) {
      EVar11 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->ShadowScene->_padding_);
      pTVar8 = CVarVirtualShadowMapFirstPersonClipmap.Ref;
      bVar9 = IsInParallelRenderingThread();
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar9 = pTVar8->ShadowedValue[1];
      bVar10 = HasFirstPersonGBufferBit(EVar11);
      if ((bVar9 == false) || (!bVar10)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
        if (this->ShadowScene->bEnableVirtualShadowMapFirstPersonClipmap == false) {
          lVar6 = this->ShadowScene->_padding_;
          plVar16 = *(longlong **)(lVar6 + 0x2888);
          iVar12 = *(int *)(lVar6 + 0x2890);
          plVar3 = plVar16 + iVar12;
          while( true ) {
            if (*(int *)(lVar6 + 0x2890) != iVar12) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (plVar16 == plVar3) break;
            local_30 = *plVar16;
            if ((*(byte *)(*(longlong *)(local_30 + 8) + 0x85) & 2) != 0) {
              pFVar4 = this->ShadowScene;
              pTVar14 = &pFVar4->FirstPersonWorldSpacePrimitives;
              pFVar5 = (pTVar14->AllocatorInstance).Data;
              if (((pFVar5 <= (FScriptContainerElement *)&local_30) &&
                  ((FScriptContainerElement *)&local_30 <
                   pFVar5 + (longlong)(pFVar4->FirstPersonWorldSpacePrimitives).ArrayMax * 8)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (pFVar4->FirstPersonWorldSpacePrimitives).ArrayNum;
              piVar1 = &(pFVar4->FirstPersonWorldSpacePrimitives).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar14->AllocatorInstance,piVar1);
              }
              (pFVar4->FirstPersonWorldSpacePrimitives).ArrayNum = iVar13 + 1;
              *(longlong *)((pTVar14->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_30;
            }
            plVar16 = plVar16 + 1;
          }
        }
      }
      this->ShadowScene->bEnableVirtualShadowMapFirstPersonClipmap = bVar9;
      pFVar4 = this->ShadowScene;
      if (pFVar4->bEnableVirtualShadowMapFirstPersonClipmap == false) {
        piVar1 = &(pFVar4->FirstPersonWorldSpacePrimitives).ArrayMax;
        (pFVar4->FirstPersonWorldSpacePrimitives).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(pFVar4->FirstPersonWorldSpacePrimitives).AllocatorInstance,0,piVar1);
        }
      }
      return;
    }
    local_38 = *ppFVar15;
    if (local_38->Proxy->ShadowCacheInvalidationBehavior == Always) {
      pFVar4 = this->ShadowScene;
      pTVar14 = &pFVar4->AlwaysInvalidatingPrimitives;
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar5 + (longlong)(pFVar4->AlwaysInvalidatingPrimitives).ArrayMax * 8)) &&
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
      iVar12 = (pFVar4->AlwaysInvalidatingPrimitives).ArrayNum;
      piVar1 = &(pFVar4->AlwaysInvalidatingPrimitives).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar14->AllocatorInstance,piVar1);
      }
      (pFVar4->AlwaysInvalidatingPrimitives).ArrayNum = iVar12 + 1;
      *(FPrimitiveSceneInfo **)((pTVar14->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_38
      ;
    }
    pFVar4 = this->ShadowScene;
    if ((pFVar4->bEnableVirtualShadowMapFirstPersonClipmap != false) &&
       (local_38->Proxy->bIsFirstPersonWorldSpaceRepresentation != '\0')) {
      pTVar14 = &pFVar4->FirstPersonWorldSpacePrimitives;
      pFVar5 = (pTVar14->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
         (((FScriptContainerElement *)&local_38 <
           pFVar5 + (longlong)(pFVar4->FirstPersonWorldSpacePrimitives).ArrayMax * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = (pFVar4->FirstPersonWorldSpacePrimitives).ArrayNum;
      piVar1 = &(pFVar4->FirstPersonWorldSpacePrimitives).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar14->AllocatorInstance,piVar1);
      }
      (pFVar4->FirstPersonWorldSpacePrimitives).ArrayNum = iVar12 + 1;
      *(FPrimitiveSceneInfo **)((pTVar14->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_38
      ;
    }
    ppFVar15 = ppFVar15 + 1;
  } while( true );
}

// PreLightsUpdate @ 14563cd60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FShadowScene::FUpdater::PreLightsUpdate
          (FUpdater *this,FRDGBuilder *param_1,FLightSceneChangeSet *param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  FTaskBase *this_00;
  FShadowScene *pFVar4;
  ForElementType<unsigned_int> FVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  uint *puVar21;
  
  if ((param_2->RemovedLightIds).ArrayNum != 0) {
    this_00 = (this->ShadowScene->SceneChangeUpdateTask).Pimpl.Reference;
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(this_00);
    }
    puVar21 = (uint *)(param_2->RemovedLightIds).DataPtr;
    puVar18 = puVar21 + (param_2->RemovedLightIds).ArrayNum;
    for (; puVar21 != puVar18; puVar21 = puVar21 + 1) {
      pFVar4 = this->ShadowScene;
      uVar15 = *puVar21;
      lVar19 = (longlong)(int)uVar15;
      if ((((int)uVar15 < 0) || ((pFVar4->ActiveLights).NumBits <= (int)uVar15)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar5 = (pFVar4->ActiveLights).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&pFVar4->ActiveLights;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar5;
      }
      uVar11 = uVar15;
      if ((int)uVar15 < 0) {
        uVar11 = uVar15 + 0x1f;
      }
      lVar2 = (longlong)((int)uVar11 >> 5) * 4;
      puVar1 = (uint *)(lVar2 + (longlong)FVar16);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar15 & 0x1f));
      pFVar4 = this->ShadowScene;
      if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)&(pFVar4->LightsCommonData).field_0x28)) {
        puVar14 = *(undefined1 **)&(pFVar4->LightsCommonData).field_0x20;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(pFVar4->LightsCommonData).field_0x10;
        }
        if ((*(uint *)(puVar14 + lVar2) >> (uVar15 & 0x1f) & 1) != 0) {
          pFVar4 = this->ShadowScene;
          puVar14 = &(pFVar4->LightsCommonData).field_0x10;
          bVar9 = (byte)uVar15 & 0x1f;
          uVar11 = 1 << bVar9 | 1U >> 0x20 - bVar9;
          lVar2 = *(longlong *)&pFVar4->LightsCommonData;
          if ((*(int *)&(pFVar4->LightsCommonData).field_0x28 <= (int)uVar15) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar6 = *(undefined1 **)&(pFVar4->LightsCommonData).field_0x20;
          puVar13 = puVar14;
          if (puVar6 != (undefined1 *)0x0) {
            puVar13 = puVar6;
          }
          uVar12 = uVar15;
          if ((int)uVar15 < 0) {
            uVar12 = uVar15 + 0x1f;
          }
          if (((*(uint *)(puVar13 + (longlong)((int)uVar12 >> 5) * 4) & uVar11) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)&(pFVar4->LightsCommonData).field_0x34 != 0) {
            *(uint *)(lVar2 + (longlong)*(int *)&(pFVar4->LightsCommonData).field_0x30 * 8) = uVar15
            ;
          }
          *(undefined4 *)(lVar2 + lVar19 * 8) = 0xffffffff;
          if (*(int *)&(pFVar4->LightsCommonData).field_0x34 < 1) {
            *(undefined4 *)(lVar2 + 4 + lVar19 * 8) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar2 + 4 + lVar19 * 8) =
                 *(undefined4 *)&(pFVar4->LightsCommonData).field_0x30;
          }
          puVar6 = &(pFVar4->LightsCommonData).field_0x34;
          *(int *)puVar6 = *(int *)puVar6 + 1;
          *(uint *)&(pFVar4->LightsCommonData).field_0x30 = uVar15;
          if ((*(int *)&(pFVar4->LightsCommonData).field_0x28 <= (int)uVar15) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar6 = *(undefined1 **)&(pFVar4->LightsCommonData).field_0x20;
          if (puVar6 != (undefined1 *)0x0) {
            puVar14 = puVar6;
          }
          uVar12 = uVar15;
          if ((int)uVar15 < 0) {
            uVar12 = uVar15 + 0x1f;
          }
          *(uint *)(puVar14 + (longlong)((int)uVar12 >> 5) * 4) =
               *(uint *)(puVar14 + (longlong)((int)uVar12 >> 5) * 4) & ~uVar11;
        }
      }
      pFVar4 = this->ShadowScene;
      if ((*(byte *)(*(longlong *)(pFVar4->_padding_ + 0x2a98) + 0x38 + lVar19 * 0x40) & 3) == 0) {
        pFVar7 = (pFVar4->DirectionalLights).AllocatorInstance.Data;
        for (pFVar17 = pFVar7;
            pFVar17 != pFVar7 + (longlong)(pFVar4->DirectionalLights).ArrayNum * 4;
            pFVar17 = pFVar17 + 4) {
          if (*(uint *)pFVar17 == uVar15) {
            uVar15 = (uint)((longlong)pFVar17 - (longlong)pFVar7 >> 2);
            if (uVar15 != 0xffffffff) {
              uVar11 = 0;
              if ((int)uVar15 < (pFVar4->DirectionalLights).ArrayNum) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar3 = (pFVar4->DirectionalLights).ArrayNum;
              pFVar7 = (pFVar4->DirectionalLights).AllocatorInstance.Data;
              iVar20 = iVar3 + ~uVar15;
              if (1 < iVar20) {
                iVar20 = 1;
              }
              if (iVar20 != 0) {
                memmove(pFVar7 + (longlong)(int)uVar15 * 4,pFVar7 + (longlong)(iVar3 - iVar20) * 4,
                        (longlong)iVar20 << 2);
              }
              iVar20 = (pFVar4->DirectionalLights).ArrayNum + -1;
              (pFVar4->DirectionalLights).ArrayNum = iVar20;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,&(pFVar4->DirectionalLights).AllocatorInstance,iVar20,
                         &(pFVar4->DirectionalLights).ArrayMax);
            }
            break;
          }
        }
      }
    }
  }
  return;
}

// PreSceneUpdate @ 14563d0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FShadowScene::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  int *piVar1;
  int iVar2;
  FShadowScene *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FPrimitiveSceneInfo **ppFVar14;
  FPrimitiveSceneInfo *local_48;
  FPrimitiveSceneInfo **local_40;
  
  ppFVar14 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  local_40 = ppFVar14 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  if (ppFVar14 != local_40) {
    do {
      local_48 = *ppFVar14;
      if (local_48->Proxy->ShadowCacheInvalidationBehavior == Always) {
        pFVar3 = this->ShadowScene;
        pTVar9 = &pFVar3->AlwaysInvalidatingPrimitives;
        pFVar4 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar4 + (longlong)(pFVar3->AlwaysInvalidatingPrimitives).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = (pFVar3->AlwaysInvalidatingPrimitives).ArrayNum;
        bVar6 = false;
        uVar12 = 0;
        if (0 < iVar13) {
          lVar10 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar12 < iVar13) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar11 = uVar12;
            if (*(FPrimitiveSceneInfo **)((pTVar9->AllocatorInstance).Data + lVar10) == local_48) {
              uVar11 = uVar12 - 1;
              lVar10 = lVar10 + -8;
              bVar6 = true;
              uVar8 = 0;
              if ((int)uVar12 < (pFVar3->AlwaysInvalidatingPrimitives).ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar2 = (pFVar3->AlwaysInvalidatingPrimitives).ArrayNum;
              pFVar4 = (pTVar9->AllocatorInstance).Data;
              iVar13 = ~uVar12 + iVar2;
              if (1 < iVar13) {
                iVar13 = 1;
              }
              if (iVar13 != 0) {
                memmove(pFVar4 + (longlong)(int)uVar12 * 8,pFVar4 + (longlong)(iVar2 - iVar13) * 8,
                        (longlong)iVar13 << 3);
              }
              piVar1 = &(pFVar3->AlwaysInvalidatingPrimitives).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            iVar13 = (pFVar3->AlwaysInvalidatingPrimitives).ArrayNum;
            uVar12 = uVar11 + 1;
            lVar10 = lVar10 + 8;
          } while ((int)uVar12 < iVar13);
          if (bVar6) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar9->AllocatorInstance,iVar13,
                       &(pFVar3->AlwaysInvalidatingPrimitives).ArrayMax);
          }
        }
      }
      pFVar3 = this->ShadowScene;
      if ((pFVar3->bEnableVirtualShadowMapFirstPersonClipmap != false) &&
         (local_48->Proxy->bIsFirstPersonWorldSpaceRepresentation != '\0')) {
        pTVar9 = &pFVar3->FirstPersonWorldSpacePrimitives;
        pFVar4 = (pTVar9->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
           (((FScriptContainerElement *)&local_48 <
             pFVar4 + (longlong)(pFVar3->FirstPersonWorldSpacePrimitives).ArrayMax * 8 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = (pFVar3->FirstPersonWorldSpacePrimitives).ArrayNum;
        bVar6 = false;
        uVar12 = 0;
        if (0 < iVar13) {
          lVar10 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar12 < iVar13) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar11 = uVar12;
            if (*(FPrimitiveSceneInfo **)((pTVar9->AllocatorInstance).Data + lVar10) == local_48) {
              uVar11 = uVar12 - 1;
              lVar10 = lVar10 + -8;
              bVar6 = true;
              uVar8 = 0;
              if ((int)uVar12 < (pFVar3->FirstPersonWorldSpacePrimitives).ArrayNum) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar2 = (pFVar3->FirstPersonWorldSpacePrimitives).ArrayNum;
              pFVar4 = (pTVar9->AllocatorInstance).Data;
              iVar13 = ~uVar12 + iVar2;
              if (1 < iVar13) {
                iVar13 = 1;
              }
              if (iVar13 != 0) {
                memmove(pFVar4 + (longlong)(int)uVar12 * 8,pFVar4 + (longlong)(iVar2 - iVar13) * 8,
                        (longlong)iVar13 << 3);
              }
              piVar1 = &(pFVar3->FirstPersonWorldSpacePrimitives).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            iVar13 = (pFVar3->FirstPersonWorldSpacePrimitives).ArrayNum;
            uVar12 = uVar11 + 1;
            lVar10 = lVar10 + 8;
          } while ((int)uVar12 < iVar13);
          if (bVar6) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar9->AllocatorInstance,iVar13,
                       &(pFVar3->FirstPersonWorldSpacePrimitives).ArrayMax);
          }
        }
      }
      ppFVar14 = ppFVar14 + 1;
    } while (ppFVar14 != local_40);
  }
  return;
}

// FUpdater @ 145666640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUpdater * __thiscall
FSkinningSceneExtension::FUpdater::FUpdater(FUpdater *this,FSkinningSceneExtension *param_1)

{
  this->SceneData = param_1;
  this->_padding_ = (longlong)&___7FUpdater_FSkinningSceneExtension__6B_;
  (this->AddedList).DataPtr = (FPrimitiveSceneInfo **)0x0;
  (this->AddedList).ArrayNum = 0;
  (this->UpdateList).DataPtr = (FPrimitiveSceneInfo **)0x0;
  (this->UpdateList).ArrayNum = 0;
  (this->DirtyPrimitiveList).AllocatorInstance.Data = (int *)0x0;
  (this->DirtyPrimitiveList).ArrayNum = 0;
  (this->DirtyPrimitiveList).ArrayMax = 0;
  this->bEnableAsync = GSkinningBuffersAsyncUpdate;
  this->bForceFullUpload = false;
  this->bDefragging = false;
  return this;
}

// operator() @ 145669a70

void __thiscall
`FSkinningSceneExtension::FUpdater::PreSceneUpdate'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  bool bVar15;
  uint local_res10 [2];
  longlong local_res18;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId690,"Skinning::FreeBufferSpace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x2b2);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId690);
  }
  puVar14 = *(uint **)((longlong)this + 8);
  puVar2 = puVar14 + *(int *)((longlong)this + 0x10);
  do {
    if (puVar14 == puVar2) {
      *(bool *)(*(longlong *)this + 0x41) = GSkinningBuffersForceFullUpload != 0;
      if (GSkinningBuffersForceFullUpload == 1) {
        GSkinningBuffersForceFullUpload = 0;
      }
      bVar6 = FSkinningSceneExtension::ProcessBufferDefragmentation
                        (*(FSkinningSceneExtension **)(*(longlong *)this + 8));
      *(bool *)(*(longlong *)this + 0x42) = bVar6;
      pbVar1 = (byte *)(*(longlong *)this + 0x41);
      *pbVar1 = *pbVar1 | *(byte *)(*(longlong *)this + 0x42);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      return;
    }
    uVar9 = *puVar14;
    lVar13 = *(longlong *)(*(longlong *)this + 8);
    if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar13 + 0x2c0))) {
      lVar12 = *(longlong *)(lVar13 + 0x2b8);
      if (lVar12 == 0) {
        lVar12 = lVar13 + 0x2a8;
      }
      uVar11 = uVar9 & 0x1f;
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 0x1f;
      }
      if ((*(uint *)(lVar12 + (longlong)((int)uVar9 >> 5) * 4) >> uVar11 & 1) != 0) {
        lVar13 = *(longlong *)this;
        lVar12 = (longlong)(int)*puVar14 * 0x50 + *(longlong *)(*(longlong *)(lVar13 + 8) + 0x298);
        if ((*(byte *)(lVar12 + 0x48) & 2) == 0) {
          if (*(int *)(lVar12 + 0x28) != -1) {
            FSpanAllocator::Free
                      ((FSpanAllocator *)(*(longlong *)(lVar13 + 8) + 0x10),*(int *)(lVar12 + 0x28),
                       *(int *)(lVar12 + 0x2c));
            lVar13 = *(longlong *)this;
          }
          if (*(int *)(lVar12 + 0x30) != -1) {
            FSpanAllocator::Free
                      ((FSpanAllocator *)(*(longlong *)(lVar13 + 8) + 0xe8),*(int *)(lVar12 + 0x30),
                       *(int *)(lVar12 + 0x34));
            lVar13 = *(longlong *)this;
          }
          if (*(int *)(lVar12 + 0x38) != -1) {
            FSpanAllocator::Free
                      ((FSpanAllocator *)(*(longlong *)(lVar13 + 8) + 0x1c0),*(int *)(lVar12 + 0x38)
                       ,*(int *)(lVar12 + 0x3c));
          }
        }
        uVar9 = *puVar14;
        bVar5 = (byte)uVar9 & 0x1f;
        uVar11 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        lVar13 = *(longlong *)(*(longlong *)this + 8);
        local_res18 = *(longlong *)(lVar13 + 0x298);
        if ((((int)uVar9 < 0) || (*(int *)(lVar13 + 0x2c0) <= (int)uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = lVar13 + 0x2a8;
        if (*(longlong *)(lVar13 + 0x2b8) != 0) {
          lVar10 = *(longlong *)(lVar13 + 0x2b8);
        }
        uVar7 = uVar9;
        if ((int)uVar9 < 0) {
          uVar7 = uVar9 + 0x1f;
        }
        if (((*(uint *)(lVar10 + (longlong)((int)uVar7 >> 5) * 4) & uVar11) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(lVar13 + 0x2cc) != 0) {
          *(uint *)(local_res18 + (longlong)*(int *)(lVar13 + 0x2c8) * 0x50) = uVar9;
        }
        *(undefined4 *)(local_res18 + (longlong)(int)uVar9 * 0x50) = 0xffffffff;
        if (*(int *)(lVar13 + 0x2cc) < 1) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = *(undefined4 *)(lVar13 + 0x2c8);
        }
        *(undefined4 *)(local_res18 + 4 + (longlong)(int)uVar9 * 0x50) = uVar8;
        *(int *)(lVar13 + 0x2cc) = *(int *)(lVar13 + 0x2cc) + 1;
        *(uint *)(lVar13 + 0x2c8) = uVar9;
        if ((((int)uVar9 < 0) || (*(int *)(lVar13 + 0x2c0) <= (int)uVar9)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = lVar13 + 0x2a8;
        if (*(longlong *)(lVar13 + 0x2b8) != 0) {
          lVar10 = *(longlong *)(lVar13 + 0x2b8);
        }
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        puVar3 = (uint *)(lVar10 + (longlong)((int)uVar9 >> 5) * 4);
        *puVar3 = *puVar3 & ~uVar11;
        if ((*(byte *)(lVar12 + 0x48) & 2) == 0) {
          local_res10[0] = *puVar14;
          lVar13 = *(longlong *)(*(longlong *)this + 8);
          if (*(int *)(lVar13 + 0x2d8) != *(int *)(lVar13 + 0x304)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar13 + 0x2d0),
                       local_res10[0],(int *)local_res10);
          }
        }
      }
    }
    puVar14 = puVar14 + 1;
  } while( true );
}

// operator() @ 14566a8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  longlong *plVar12;
  char cVar13;
  undefined2 uVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18 [2];
  FName local_res20;
  undefined4 local_c8 [2];
  FString local_c0;
  FString local_b0;
  FName local_a0;
  undefined8 *local_98;
  longlong *local_90;
  FSkeletonBatchKey local_88;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar15 = 0;
  plVar12 = (longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x298) + (longlong)param_1 * 0x50)
  ;
  lVar8 = plVar12[1];
  *(undefined2 *)(plVar12 + 8) = *(undefined2 *)(lVar8 + 0x38);
  *(undefined2 *)((longlong)plVar12 + 0x42) = *(undefined2 *)(lVar8 + 0x38);
  uVar14 = 0;
  if ((*(byte *)(lVar8 + 0x3e) & 4) == 0) {
    uVar14 = *(undefined2 *)(lVar8 + 0x38);
  }
  *(undefined2 *)((longlong)plVar12 + 0x44) = uVar14;
  *(undefined1 *)((longlong)plVar12 + 0x46) = *(undefined1 *)(lVar8 + 0x3a);
  *(undefined1 *)((longlong)plVar12 + 0x47) = *(undefined1 *)(lVar8 + 0x3c);
  local_res10 = param_1;
  if ((*(byte *)(lVar8 + 0x3e) & 2) != 0) {
    lVar8 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x400))();
    local_88.SkeletonName = *(FName *)(lVar8 + 0x18);
    lVar8 = (**(code **)(**(longlong **)(plVar12[1] + 8) + 0x400))();
    local_88.SkeletonGuid.A = *(uint *)(lVar8 + 0x160);
    local_88.SkeletonGuid.B = *(uint *)(lVar8 + 0x164);
    local_88.SkeletonGuid.C = *(uint *)(lVar8 + 0x168);
    local_88.SkeletonGuid.D = *(uint *)(lVar8 + 0x16c);
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)plVar12[1] + 0x18))();
    local_88.TransformProviderId._0_8_ = *puVar9;
    local_88.TransformProviderId._8_8_ = puVar9[1];
    lVar8 = *(longlong *)(*(longlong *)this + 8);
    uVar10 = ::GetTypeHash(&local_88);
    iVar6 = TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FSkeletonBatchKey>
                      ((TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
                        *)(lVar8 + 800),(uint)uVar10,&local_88);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(*(longlong *)this + 8);
      uVar10 = ::GetTypeHash(&local_88);
      iVar6 = TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FSkeletonBatchKey>
                        ((TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
                          *)(lVar8 + 800),(uint)uVar10,&local_88);
      if (((iVar6 == -1) ||
          (lVar15 = (longlong)iVar6 * 0x80 + *(longlong *)(lVar8 + 800), lVar15 == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(plVar12 + 5) = *(undefined4 *)(lVar15 + 0x50);
      *(undefined4 *)((longlong)plVar12 + 0x2c) = *(undefined4 *)(lVar15 + 0x54);
      *(undefined4 *)(plVar12 + 6) = *(undefined4 *)(lVar15 + 0x58);
      *(undefined4 *)((longlong)plVar12 + 0x34) = *(undefined4 *)(lVar15 + 0x5c);
      *(undefined4 *)(plVar12 + 7) = *(undefined4 *)(lVar15 + 0x60);
      uVar2 = *(undefined4 *)(lVar15 + 100);
      *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) | 2;
      *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar2;
      local_res20 = *(FName *)(*(longlong *)(plVar12[1] + 8) + 0x18);
      ::FName::ToString(&local_res20,&local_b0);
      lVar8 = (**(code **)(**(longlong **)(plVar12[1] + 8) + 0x400))();
      local_a0 = *(FName *)(lVar8 + 0x18);
      ::FName::ToString(&local_a0,&local_c0);
      iVar6 = 7;
      if ((*(byte *)(plVar12[1] + 0x3e) & 1) != 0) {
        iVar6 = 10;
      }
      if ((*(int *)((longlong)plVar12 + 0x2c) != iVar6 * (uint)*(ushort *)((longlong)plVar12 + 0x44)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Data.ObjectSpaceBufferCount == (Data.MaxObjectSpaceCount * ObjectSpaceFloatCount)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                   ,0x367,
                                   L"Mismatch between ObjectSpaceBufferCount=%d and (MaxObjectSpaceCount * ObjectSpaceFloatCount)=%d for mesh %s with skeleton %s."
                                  ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(uint *)((longlong)plVar12 + 0x34) != (uint)*(ushort *)((longlong)plVar12 + 0x42)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HierarchyBufferCount == Data.MaxHierarchyCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                             ,0x36c,
                             L"Mismatch between HierarchyBufferCount=%d and MaxHierarchyCount=%d for mesh %s with skeleton %s."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)((longlong)plVar12 + 0x3c) !=
           (uint)*(ushort *)(plVar12 + 8) * (uint)*(byte *)((longlong)plVar12 + 0x47) * 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.TransformBufferCount == (Data.UniqueAnimationCount * Data.MaxTransformCount * 2u)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                             ,0x371,
                             L"Mismatch between TransformBufferCount=%d and (Data.UniqueAnimationCount * Data.MaxTransformCount * 2u)=%d for mesh %s with skeleton %s."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      return;
    }
  }
  iVar6 = *(int *)((longlong)plVar12 + 0x2c);
  iVar7 = -1;
  iVar11 = 7;
  if ((*(byte *)(plVar12[1] + 0x3e) & 1) != 0) {
    iVar11 = 10;
  }
  iVar11 = iVar11 * (uint)*(ushort *)((longlong)plVar12 + 0x44);
  if (iVar11 != iVar6) {
    if (iVar6 != 0) {
      FSpanAllocator::Free
                ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0x10),(int)plVar12[5],
                 iVar6);
    }
    if (iVar11 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = FSpanAllocator::Allocate
                        ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0x10),iVar11);
    }
    *(int *)(plVar12 + 5) = iVar6;
    *(int *)((longlong)plVar12 + 0x2c) = iVar11;
    lVar15 = 0;
    if (*(char *)(*(longlong *)this + 0x41) == '\0') {
      lVar15 = 1;
    }
  }
  cVar13 = (char)lVar15;
  uVar1 = *(ushort *)((longlong)plVar12 + 0x42);
  uVar3 = *(uint *)((longlong)plVar12 + 0x34);
  if (uVar1 == uVar3) {
LAB_14566acac:
    iVar6 = (uint)*(byte *)((longlong)plVar12 + 0x47) * (uint)*(ushort *)(plVar12 + 8) * 2;
    if ((cVar13 == '\0') && (iVar6 == *(int *)((longlong)plVar12 + 0x3c))) goto LAB_14566adbd;
  }
  else {
    if (uVar3 != 0) {
      FSpanAllocator::Free
                ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0xe8),(int)plVar12[6],
                 uVar3);
    }
    if (uVar1 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = FSpanAllocator::Allocate
                        ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0xe8),(uint)uVar1
                        );
    }
    *(int *)(plVar12 + 6) = iVar6;
    *(uint *)((longlong)plVar12 + 0x34) = (uint)uVar1;
    if (*(char *)(*(longlong *)this + 0x41) != '\0') goto LAB_14566acac;
    cVar13 = '\x01';
    iVar6 = (uint)*(byte *)((longlong)plVar12 + 0x47) * (uint)*(ushort *)(plVar12 + 8) * 2;
  }
  if (*(int *)((longlong)plVar12 + 0x3c) != 0) {
    FSpanAllocator::Free
              ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0x1c0),(int)plVar12[7],
               *(int *)((longlong)plVar12 + 0x3c));
  }
  if (iVar6 != 0) {
    iVar7 = FSpanAllocator::Allocate
                      ((FSpanAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0x1c0),iVar6);
  }
  *(int *)(plVar12 + 7) = iVar7;
  *(int *)((longlong)plVar12 + 0x3c) = iVar6;
  lVar8 = *(longlong *)this;
  if ((*(char *)(lVar8 + 0x41) == '\0') || (cVar13 != '\0')) {
    local_c8[0] = *(undefined4 *)(*plVar12 + 0x18c);
    if ((*(undefined4 **)(lVar8 + 0x30) <= local_c8) &&
       ((local_c8 < *(undefined4 **)(lVar8 + 0x30) + *(int *)(lVar8 + 0x3c) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)(lVar8 + 0x38);
    if (iVar6 == *(int *)(lVar8 + 0x3c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                        (0x404,(ForElementType<int> *)(lVar8 + 0x30),(int *)(lVar8 + 0x3c));
    }
    *(int *)(lVar8 + 0x38) = iVar6 + 1;
    *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 4) = local_c8[0];
  }
LAB_14566adbd:
  if ((*(byte *)(plVar12[1] + 0x3e) & 2) == 0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)(*(longlong *)this + 8) + 0x2d0),local_res18,(bool *)&local_res10);
  }
  else {
    *(byte *)(plVar12 + 9) = *(byte *)(plVar12 + 9) | 2;
    lVar8 = (**(code **)(**(longlong **)(plVar12[1] + 8) + 0x400))();
    local_60 = *(undefined8 *)(lVar8 + 0x18);
    lVar8 = (**(code **)(**(longlong **)(plVar12[1] + 8) + 0x400))();
    local_58 = *(undefined4 *)(lVar8 + 0x160);
    uStack_54 = *(undefined4 *)(lVar8 + 0x164);
    uStack_50 = *(undefined4 *)(lVar8 + 0x168);
    uStack_4c = *(undefined4 *)(lVar8 + 0x16c);
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)plVar12[1] + 0x18))();
    local_48 = *puVar9;
    uStack_40 = puVar9[1];
    local_98 = &local_60;
    local_90 = plVar12;
    TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FSkeletonBatchKey_const_&,FSkinningSceneExtension::FHeaderData_const_&>_>
              ((TSet<TTuple<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData>,TDefaultMapHashableKeyFuncs<FSkeletonBatchKey,FSkinningSceneExtension::FHeaderData,0>,FDefaultSetAllocator>
                *)(*(longlong *)(*(longlong *)this + 8) + 800),
               (TPairInitializer<FSkeletonBatchKey_const_&,FSkinningSceneExtension::FHeaderData_const_&>
                *)local_res8,(bool *)&local_98);
  }
  return;
}

// operator() @ 14566af90

void __thiscall
`FSkinningSceneExtension::FUpdater::PostSceneUpdate'::__l8::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  FSparseArrayAllocationInfo *pFVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  uint local_b8 [4];
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  byte bStack_60;
  undefined7 uStack_5f;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  FSparseArrayAllocationInfo local_38;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId760,"Skinning::InitHeaderData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x2f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId760);
  }
  plVar13 = *(longlong **)(*(longlong *)this + 0x10);
  plVar1 = plVar13 + *(int *)(*(longlong *)this + 0x18);
  do {
    if (plVar13 == plVar1) {
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar11 = *plVar13;
    if (((*(byte *)((longlong)*(longlong **)(lVar11 + 8) + 0x84) & 0x40) != 0) &&
       (plVar8 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x180))(),
       plVar8 != (longlong *)0x0)) {
      local_b8[0] = *(uint *)(lVar11 + 0x18c);
      local_88 = *(undefined4 *)(lVar11 + 0x224);
      uStack_84 = *(undefined4 *)(lVar11 + 0x228);
      uStack_80 = 0xffffffff;
      uStack_7c = 0;
      local_78 = 0xffffffff;
      uStack_74 = 0;
      uStack_70 = 0xffffffff;
      uStack_6c = 0;
      plVar9 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
      uVar4 = local_b8[0];
      local_68 = (undefined2)plVar8[7];
      local_98 = *plVar9;
      lStack_90 = plVar9[1];
      uStack_64 = 0;
      if ((*(byte *)((longlong)plVar8 + 0x3e) & 4) == 0) {
        uStack_64 = local_68;
      }
      uStack_62 = *(undefined1 *)((longlong)plVar8 + 0x3a);
      uStack_61 = *(undefined1 *)((longlong)plVar8 + 0x3c);
      lVar12 = (longlong)(int)local_b8[0];
      bStack_60 = *(byte *)((longlong)plVar8 + 0x3e) & 1 | bStack_60 & 0xfc;
      lVar2 = *(longlong *)(*(longlong *)this + 8);
      local_a8 = lVar11;
      plStack_a0 = plVar8;
      uStack_66 = local_68;
      local_58 = local_98;
      lStack_50 = lStack_90;
      if (((int)local_b8[0] < 0) || (*(int *)(lVar2 + 0x2c0) <= (int)local_b8[0])) {
LAB_14566b179:
        pFVar10 = TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)(lVar2 + 0x298),
                             &local_38,uVar4);
        local_48 = *(undefined8 *)pFVar10;
        plStack_40 = pFVar10->Pointer;
        plVar8 = pFVar10->Pointer;
      }
      else {
        if ((*(int *)(lVar2 + 0x2c0) <= (int)local_b8[0]) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar11 = lVar2 + 0x2a8;
        if (*(longlong *)(lVar2 + 0x2b8) != 0) {
          lVar11 = *(longlong *)(lVar2 + 0x2b8);
        }
        uVar6 = uVar4;
        if ((int)uVar4 < 0) {
          uVar6 = uVar4 + 0x1f;
        }
        if ((*(uint *)(lVar11 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)
        goto LAB_14566b179;
        plVar8 = (longlong *)(lVar12 * 0x50 + *(longlong *)(lVar2 + 0x298));
        plStack_40 = plVar8;
      }
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = local_a8;
        plVar8[1] = (longlong)plStack_a0;
        plVar8[2] = local_58;
        plVar8[3] = lStack_50;
        plVar8[4] = CONCAT44(uStack_84,local_88);
        plVar8[5] = CONCAT44(uStack_7c,uStack_80);
        plVar8[6] = CONCAT44(uStack_74,local_78);
        plVar8[7] = CONCAT44(uStack_6c,uStack_70);
        plVar8[8] = CONCAT17(uStack_61,
                             CONCAT16(uStack_62,CONCAT24(uStack_64,CONCAT22(uStack_66,local_68))));
        plVar8[9] = CONCAT71(uStack_5f,bStack_60);
      }
      lVar11 = *(longlong *)this;
      if (*(char *)(lVar11 + 0x41) == '\0') {
        if (((*(uint **)(lVar11 + 0x30) <= local_b8) &&
            (local_b8 < *(uint **)(lVar11 + 0x30) + *(int *)(lVar11 + 0x3c))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar11 + 0x38);
        if (iVar7 == *(int *)(lVar11 + 0x3c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)(lVar11 + 0x30),(int *)(lVar11 + 0x3c));
        }
        *(int *)(lVar11 + 0x38) = iVar7 + 1;
        *(uint *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 4) = local_b8[0];
      }
    }
    plVar13 = plVar13 + 1;
  } while( true );
}

// operator() @ 14566c010

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_2>::operator()(void *this)

{
  ulonglong uVar1;
  int iVar2;
  FUploader *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FUploader *pFVar7;
  longlong lVar8;
  TDefaultDelete<FSkinningSceneExtension::FUploader> *this_00;
  longlong lVar9;
  longlong *plVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<unsigned_int> local_res18;
  longlong *local_res20;
  TDefaultDelete<FSkinningSceneExtension::FUploader> local_a8 [8];
  int local_a0;
  uint uStack_9c;
  ForElementType<unsigned_int> FStack_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId972,"Skinning::AllocBufferSpace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x3cc);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId972);
  }
  lVar8 = *(longlong *)this;
  if (*(char *)(lVar8 + 0x42) == '\0') {
    plVar10 = *(longlong **)(lVar8 + 0x20);
    plVar15 = plVar10 + *(int *)(lVar8 + 0x28);
    for (; plVar10 != plVar15; plVar10 = plVar10 + 1) {
      uVar13 = *(uint *)(*plVar10 + 0x18c);
      lVar8 = *(longlong *)(*(longlong *)this + 8);
      if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar8 + 0x2c0))) {
        lVar9 = *(longlong *)(lVar8 + 0x2b8);
        if (lVar9 == 0) {
          lVar9 = lVar8 + 0x2a8;
        }
        uVar12 = uVar13;
        if ((int)uVar13 < 0) {
          uVar12 = uVar13 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar13 & 0x1f) & 1) != 0) {
          __l5::<lambda_1>::operator()((void *)((longlong)this + 8),uVar13);
        }
      }
    }
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 8);
    plVar15 = (longlong *)(lVar8 + 0x298);
    local_a0 = 0;
    iVar2 = *(int *)(lVar8 + 0x2c0);
    local_res18 = (ForElementType<unsigned_int>)(lVar8 + 0x2a8);
    uStack_9c = 1;
    iStack_8c = 0;
    iStack_88 = 0;
    if (iVar2 != 0) {
      FVar11 = (ForElementType<unsigned_int>)
               *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        FVar11 = local_res18;
      }
      uVar13 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar11)->AllocatorInstance).
                        InlineData;
      iStack_88 = 0;
      local_a0 = 0;
      while (uVar13 == 0) {
        iStack_88 = iStack_88 + 0x20;
        lVar9 = (longlong)local_a0;
        local_a0 = local_a0 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0) goto LAB_14566c158;
        uVar13 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar11)->AllocatorInstance).
                           InlineData + lVar9 * 4 + 4);
      }
      uStack_9c = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_9c * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iStack_8c = local_res10 + -1 + iStack_88;
      if (iVar2 < iStack_8c) {
LAB_14566c158:
        iStack_8c = iVar2;
      }
    }
    local_90 = 0xffffffff;
    uVar13 = *(uint *)(lVar8 + 0x2c0);
    local_58 = *(int *)(lVar8 + 0x2a0) - *(int *)(lVar8 + 0x2cc);
    local_78._padding_ = CONCAT44(uStack_9c,local_a0);
    local_78.CurrentBitIndex = iStack_8c;
    local_78.UnvisitedBitMask = 0xffffffff;
    local_78._28_4_ = uStack_84;
    local_78.BaseBitIndex = iStack_88;
    iVar14 = (int)uVar13 >> 5;
    uVar12 = uVar13 & 0xffffffe0;
    local_res20 = plVar15;
    FStack_98 = local_res18;
    local_80 = plVar15;
    local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res18;
    if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar10 = local_res20;
    uVar6 = *(int *)((longlong)local_res18 + 0x18);
    if (uVar13 != uVar6) {
      FVar11 = local_res18;
      if (*(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = *(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10);
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar8 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14566c254;
        uVar13 = *(uint *)((longlong)FVar11 + 4 + lVar8 * 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar13 = (int)lVar8 + -1 + uVar12;
      if ((int)uVar6 < (int)uVar13) {
        uVar13 = uVar6;
      }
    }
LAB_14566c254:
    while( true ) {
      if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != local_58) {
        `TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_78.CurrentBitIndex == uVar13) &&
          ((ForElementType<unsigned_int>)local_78.Array == local_res18)) && (plVar15 == plVar10))
      break;
      uVar12 = *(uint *)(*(longlong *)(*plVar15 + (longlong)local_78.CurrentBitIndex * 0x50) + 0x18c
                        );
      lVar8 = *(longlong *)(*(longlong *)this + 8);
      if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(lVar8 + 0x2c0))) {
        lVar9 = *(longlong *)(lVar8 + 0x2b8);
        if (lVar9 == 0) {
          lVar9 = lVar8 + 0x2a8;
        }
        uVar6 = uVar12;
        if ((int)uVar12 < 0) {
          uVar6 = uVar12 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
          __l5::<lambda_1>::operator()((void *)((longlong)this + 8),uVar12);
        }
      }
      local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
      plVar15 = local_80;
    }
  }
  lVar8 = *(longlong *)this;
  if (((*(char *)(lVar8 + 0x41) != '\0') || (0 < *(int *)(lVar8 + 0x38))) ||
     (0 < *(int *)(lVar8 + 0x28))) {
    pFVar7 = ::operator_new(0xc0);
    if (pFVar7 == (FUploader *)0x0) {
      pFVar7 = (FUploader *)0x0;
    }
    else {
      memset(pFVar7,0,0xc0);
      pFVar7 = FSkinningSceneExtension::FUploader::FUploader(pFVar7);
    }
    this_00 = (TDefaultDelete<FSkinningSceneExtension::FUploader> *)
              (*(longlong *)(*(longlong *)this + 8) + 0x378);
    if (this_00 != local_a8) {
      pFVar3 = *(FUploader **)this_00;
      *(FUploader **)this_00 = pFVar7;
      pFVar7 = (FUploader *)0x0;
      TDefaultDelete<FSkinningSceneExtension::FUploader>::operator()(this_00,pFVar3);
    }
    TDefaultDelete<FSkinningSceneExtension::FUploader>::operator()(local_a8,pFVar7);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14566cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_3>::operator()
          (void *this,FHeaderData *param_1)

{
  int iVar1;
  TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *this_00;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStackY_58 [32];
  FSkinningHeader local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_58;
  iVar1 = (param_1->PrimitiveSceneInfo->PersistentIndex).Index;
  if ((param_1->HierarchyBufferCount == 0xffffffff) || (param_1->TransformBufferCount == 0xffffffff)
     ) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6342129600411206658>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                       ,0x402,
                       "Data.HierarchyBufferCount != INDEX_NONE && Data.TransformBufferCount != INDEX_NONE"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x378) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData->Uploader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                       ,0x404,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
              **)(*(longlong *)(*(longlong *)this + 8) + 0x378);
  if ((((0x400000 < param_1->HierarchyBufferOffset) || (0x400000 < param_1->TransformBufferOffset))
      || ((param_1->ObjectSpaceBufferOffset != 0xffffffff &&
          (0x400000 < param_1->ObjectSpaceBufferOffset)))) || (0x40 < param_1->MaxInfluenceCount)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HierarchyBufferOffset <= (1 << 22) && TransformBufferOffset <= (1 << 22) && (ObjectSpaceBufferOffset == INDEX_NONE || ObjectSpaceBufferOffset <= (1 << 22)) && MaxInfluenceCount <= (1 << 6)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.h"
                       ,0x7b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.HierarchyBufferOffset = param_1->HierarchyBufferOffset;
  local_28.TransformBufferOffset = param_1->TransformBufferOffset;
  uVar3 = param_1->ObjectSpaceBufferOffset;
  if (param_1->ObjectSpaceBufferOffset == 0xffffffff) {
    uVar3 = 0;
  }
  local_28.ObjectSpaceBufferOffset = uVar3;
  local_28._12_4_ =
       ((param_1->bHasScale << 7 | param_1->UniqueAnimationCount & 0x7f) << 6 |
       param_1->MaxInfluenceCount & 0x3f) << 0x10 |
       (uint)param_1->MaxTransformCount | local_28._12_4_ & 0xc0000000;
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  ::Add(this_00,&local_28,iVar1);
  return;
}

// operator() @ 14566ccb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_4>::operator()(void *this)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *this_00;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStackY_e8 [32];
  char local_b8;
  FIdentityFunctor local_b7;
  undefined1 local_b6 [6];
  ForElementType<unsigned_int> local_b0;
  int local_a8;
  uint uStack_a4;
  ForElementType<unsigned_int> FStack_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  int local_60;
  int local_58;
  int local_54;
  longlong *local_50;
  FSkinningHeader local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar18 = CpuChannel->Enabled < 0;
  if (bVar18) {
    local_b8 = '\0';
  }
  else {
    local_b8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1036,"Skinning::UploadHeaderData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x40c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1036);
  }
  lVar8 = *(longlong *)this;
  if (*(char *)(lVar8 + 0x41) == '\0') {
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              (*(int **)(lVar8 + 0x30),*(int *)(lVar8 + 0x38),local_b7,(TLess<void> *)&local_b7);
    lVar8 = *(longlong *)this;
    puVar12 = *(uint **)(lVar8 + 0x30);
    iVar3 = *(int *)(lVar8 + 0x38);
    puVar1 = puVar12 + iVar3;
    uVar17 = 0xffffffff;
    while( true ) {
      if (*(int *)(lVar8 + 0x38) != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b6);
      }
      cVar11 = local_b8;
      if (puVar12 == puVar1) break;
      uVar16 = *puVar12;
      if (((uVar16 != uVar17) && (lVar9 = *(longlong *)(*(longlong *)this + 8), -1 < (int)uVar16))
         && ((int)uVar16 < *(int *)(lVar9 + 0x2c0))) {
        lVar10 = *(longlong *)(lVar9 + 0x2b8);
        if (lVar10 == 0) {
          lVar10 = lVar9 + 0x2a8;
        }
        uVar17 = uVar16;
        if ((int)uVar16 < 0) {
          uVar17 = uVar16 + 0x1f;
        }
        if ((*(uint *)(lVar10 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
          __l5::<lambda_3>::operator()
                    ((void *)((longlong)this + 8),
                     (FHeaderData *)
                     ((longlong)(int)uVar16 * 0x50 +
                     *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x298)));
        }
      }
      puVar12 = puVar12 + 1;
      uVar17 = uVar16;
    }
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 8);
    plVar14 = (longlong *)(lVar8 + 0x298);
    local_a8 = 0;
    iVar3 = *(int *)(lVar8 + 0x2c0);
    local_b0 = (ForElementType<unsigned_int>)(lVar8 + 0x2a8);
    uStack_a4 = 1;
    iStack_94 = 0;
    iStack_90 = 0;
    if (iVar3 != 0) {
      FVar15 = (ForElementType<unsigned_int>)
               *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        FVar15 = local_b0;
      }
      uVar17 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar15)->AllocatorInstance).
                        InlineData;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar17 == 0) {
        iStack_90 = iStack_90 + 0x20;
        lVar9 = (longlong)local_a8;
        local_a8 = local_a8 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a8) goto LAB_14566ce0b;
        uVar17 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar15)->AllocatorInstance).
                           InlineData + lVar9 * 4 + 4);
      }
      uStack_a4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_58 = (int)lVar9;
      iStack_94 = local_58 + -1 + iStack_90;
      if (iVar3 < iStack_94) {
LAB_14566ce0b:
        iStack_94 = iVar3;
      }
    }
    local_98 = 0xffffffff;
    uVar17 = *(uint *)(lVar8 + 0x2c0);
    local_60 = *(int *)(lVar8 + 0x2a0) - *(int *)(lVar8 + 0x2cc);
    local_80._padding_ = CONCAT44(uStack_a4,local_a8);
    local_80.CurrentBitIndex = iStack_94;
    local_80.UnvisitedBitMask = 0xffffffff;
    local_80._28_4_ = uStack_8c;
    local_80.BaseBitIndex = iStack_90;
    iVar13 = (int)uVar17 >> 5;
    uVar16 = uVar17 & 0xffffffe0;
    FStack_a0 = local_b0;
    local_88 = plVar14;
    local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
    local_50 = plVar14;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar6 = local_50;
    uVar4 = *(int *)((longlong)local_b0 + 0x18);
    if (uVar17 != uVar4) {
      FVar15 = local_b0;
      if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar13 * 4);
      while (uVar17 == 0) {
        lVar8 = (longlong)iVar13;
        uVar16 = uVar16 + 0x20;
        iVar13 = iVar13 + 1;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14566cf06;
        uVar17 = *(uint *)((longlong)FVar15 + 4 + lVar8 * 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_54 = (int)lVar8;
      uVar17 = local_54 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar17) {
        uVar17 = uVar4;
      }
    }
LAB_14566cf06:
    while( true ) {
      if ((int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34) != local_60) {
        local_b8 = '\0';
        `TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b8);
      }
      if (((local_80.CurrentBitIndex == uVar17) &&
          ((ForElementType<unsigned_int>)local_80.Array == local_b0)) &&
         (cVar11 = !bVar18, plVar14 == plVar6)) break;
      plVar14 = (longlong *)((longlong)local_80.CurrentBitIndex * 0x50 + *plVar14);
      iVar3 = *(int *)(*plVar14 + 0x18c);
      if (((*(int *)((longlong)plVar14 + 0x34) == -1) || (*(int *)((longlong)plVar14 + 0x3c) == -1))
         && (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6342129600411206658>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                ,0x402,
                                "Data.HierarchyBufferCount != INDEX_NONE && Data.TransformBufferCount != INDEX_NONE"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SceneData->Uploader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                             ,0x404,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                  **)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378);
      if (((((0x400000 < *(uint *)(plVar14 + 6)) || (0x400000 < *(uint *)(plVar14 + 7))) ||
           ((*(uint *)(plVar14 + 5) != 0xffffffff && (0x400000 < *(uint *)(plVar14 + 5))))) ||
          (0x40 < *(byte *)((longlong)plVar14 + 0x46))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("HierarchyBufferOffset <= (1 << 22) && TransformBufferOffset <= (1 << 22) && (ObjectSpaceBufferOffset == INDEX_NONE || ObjectSpaceBufferOffset <= (1 << 22)) && MaxInfluenceCount <= (1 << 6)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.h"
                             ,0x7b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_48.HierarchyBufferOffset = *(uint *)(plVar14 + 6);
      local_48.TransformBufferOffset = *(uint *)(plVar14 + 7);
      uVar16 = *(uint *)(plVar14 + 5);
      if (*(uint *)(plVar14 + 5) == 0xffffffff) {
        uVar16 = 0;
      }
      local_48.ObjectSpaceBufferOffset = uVar16;
      local_48._12_4_ =
           (((*(byte *)(plVar14 + 9) & 1) << 7 | *(byte *)((longlong)plVar14 + 0x47) & 0x7f) << 6 |
           *(byte *)((longlong)plVar14 + 0x46) & 0x3f) << 0x10 |
           (uint)*(ushort *)(plVar14 + 8) | local_48._12_4_ & 0xc0000000;
      UE::RendererPrivateUtils::Implementation::
      TBufferScatterUploader<FSkinningHeader,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
      ::Add(this_00,&local_48,iVar3);
      local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
      plVar14 = local_88;
    }
  }
  if (cVar11 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14566d2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_5>::operator()
          (void *this,FHeaderData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TArrayView<unsigned_int,int> local_48;
  TArrayView<float,int> local_38;
  ulonglong uVar7;
  
  if (param_1->MaxHierarchyCount != 0) {
    uVar4 = (param_1->Proxy->BoneHierarchy).ArrayNum;
    pFVar9 = (param_1->Proxy->BoneHierarchy).AllocatorInstance.Data;
    if (((int)uVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar4 != param_1->MaxHierarchyCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BoneHierarchy.Num() == Data.MaxHierarchyCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                           ,0x434,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x378) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneData->Uploader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                           ,0x435,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::RendererPrivateUtils::Implementation::
    TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
    ::AddMultiple_GetRef
              ((TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                *)(*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x378) + 0x30),&local_48,
               param_1->HierarchyBufferOffset,param_1->HierarchyBufferCount);
    uVar7 = 0;
    if (param_1->MaxHierarchyCount != 0) {
      do {
        uVar5 = (uint)uVar7;
        uVar6 = 0;
        if ((int)uVar5 < (int)uVar4) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *local_48.DataPtr = *(uint *)pFVar9;
        pFVar9 = pFVar9 + 4;
        uVar7 = (ulonglong)(uVar5 + 1);
        local_48.DataPtr = local_48.DataPtr + 1;
      } while ((int)(uVar5 + 1) < (int)(uint)param_1->MaxHierarchyCount);
    }
  }
  if (param_1->MaxObjectSpaceCount != 0) {
    iVar1 = (param_1->Proxy->BoneObjectSpace).ArrayNum;
    pFVar9 = (param_1->Proxy->BoneObjectSpace).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = 7;
    if (param_1->Proxy->bHasScale != 0) {
      iVar8 = 10;
    }
    if ((iVar1 != (uint)param_1->MaxObjectSpaceCount * iVar8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BoneObjectSpace.Num() == Data.MaxObjectSpaceCount * FloatCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                           ,0x448,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::RendererPrivateUtils::Implementation::
    TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
    ::AddMultiple_GetRef
              ((TBufferScatterUploader<float,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                *)(*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x378) + 0x60),&local_38,
               param_1->ObjectSpaceBufferOffset,param_1->ObjectSpaceBufferCount);
    uVar7 = 0;
    if ((uint)param_1->MaxObjectSpaceCount * iVar8 != 0) {
      do {
        uVar6 = (uint)uVar7;
        uVar4 = 0;
        if ((int)uVar6 < iVar1) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_38.DataPtr[uVar7] = *(float *)(pFVar9 + (longlong)(int)uVar6 * 4);
        uVar7 = (ulonglong)(uVar6 + 1);
      } while (uVar6 + 1 < (uint)param_1->MaxObjectSpaceCount * iVar8);
    }
  }
  return;
}

// operator() @ 14566d550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_7>::operator()(void *this)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ForElementType<unsigned_int> FVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<unsigned_int> local_res18;
  longlong *local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1149,"Skinning::UploadHierarchyData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x47d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1149);
  }
  lVar6 = *(longlong *)this;
  if (*(char *)(lVar6 + 0x41) == '\0') {
    plVar10 = *(longlong **)(lVar6 + 0x20);
    plVar12 = plVar10 + *(int *)(lVar6 + 0x28);
    for (; plVar10 != plVar12; plVar10 = plVar10 + 1) {
      uVar9 = *(uint *)(*plVar10 + 0x18c);
      lVar7 = (longlong)(int)uVar9;
      lVar6 = *(longlong *)(*(longlong *)this + 8);
      if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar6 + 0x2c0))) {
        lVar8 = *(longlong *)(lVar6 + 0x2b8);
        if (lVar8 == 0) {
          lVar8 = lVar6 + 0x2a8;
        }
        uVar13 = uVar9 & 0x1f;
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x1f;
        }
        if ((*(uint *)(lVar8 + (longlong)((int)uVar9 >> 5) * 4) >> uVar13 & 1) != 0) {
          plVar3 = *(longlong **)(*plVar10 + 8);
          if (((plVar3 == (longlong *)0x0) || (lVar6 = (**(code **)(*plVar3 + 0x180))(), lVar6 == 0)
              ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidSkinnedSceneInfo(PrimitiveSceneInfo)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                       ,0x490,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          __l5::<lambda_5>::operator()
                    ((void *)((longlong)this + 8),
                     (FHeaderData *)
                     (lVar7 * 0x50 + *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x298)));
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 8);
    plVar12 = (longlong *)(lVar6 + 0x298);
    iVar14 = *(int *)(lVar6 + 0x2c0);
    local_res18 = (ForElementType<unsigned_int>)(lVar6 + 0x2a8);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar14 != 0) {
      FVar11 = (ForElementType<unsigned_int>)
               *(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 0x2b8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 0x2b8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        FVar11 = local_res18;
      }
      uVar9 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar11)->AllocatorInstance).
                       InlineData;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar9 == 0) {
        iStack_80 = iStack_80 + 0x20;
        lVar7 = (longlong)local_98;
        local_98 = local_98 + 1;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_14566d687;
        uVar9 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar11)->AllocatorInstance).
                          InlineData + lVar7 * 4 + 4);
      }
      uStack_94 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uStack_94 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res10 = (int)lVar7;
      iStack_84 = local_res10 + -1 + iStack_80;
      if (iVar14 < iStack_84) {
LAB_14566d687:
        iStack_84 = iVar14;
      }
    }
    uVar9 = *(uint *)(lVar6 + 0x2c0);
    local_50 = *(int *)(lVar6 + 0x2a0) - *(int *)(lVar6 + 0x2cc);
    local_70._padding_ = CONCAT44(uStack_94,local_98);
    iVar14 = (int)uVar9 >> 5;
    local_70.CurrentBitIndex = iStack_84;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = iStack_80;
    uVar13 = uVar9 & 0xffffffe0;
    local_res20 = plVar12;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res18;
    if ((((int)uVar9 < 0) || (*(int *)(lVar6 + 0x2c0) < (int)uVar9)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar10 = local_res20;
    uVar2 = *(int *)((longlong)local_res18 + 0x18);
    if (uVar9 != uVar2) {
      FVar11 = local_res18;
      if (*(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = *(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10);
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar14 * 4);
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar14;
        uVar13 = uVar13 + 0x20;
        iVar14 = iVar14 + 1;
        uVar9 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14566d780;
        uVar9 = *(uint *)((longlong)FVar11 + 4 + lVar7 * 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar13;
      if ((int)uVar2 < (int)uVar9) {
        uVar9 = uVar2;
      }
    }
LAB_14566d780:
    while( true ) {
      if (*(int *)(lVar6 + 0x2a0) - *(int *)(lVar6 + 0x2cc) != local_50) {
        `TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_70.CurrentBitIndex == uVar9) &&
          ((ForElementType<unsigned_int>)local_70.Array == local_res18)) && (plVar12 == plVar10))
      break;
      __l5::<lambda_5>::operator()
                ((void *)((longlong)this + 8),
                 (FHeaderData *)((longlong)local_70.CurrentBitIndex * 0x50 + *plVar12));
      local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14566db70

void __thiscall
`FSkinningSceneExtension::FUpdater::PostMeshUpdate'::__l5::<lambda_8>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FMatrix3x4 *pFVar17;
  FMatrix3x4 *pFVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 local_res10 [8];
  char local_res18;
  int local_res20;
  int local_d0;
  uint uStack_cc;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  int local_88;
  int local_80;
  longlong *local_78;
  TArrayView<FMatrix3x4,int> local_70;
  TArrayView<FMatrix3x4,int> local_60 [2];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1182,"Skinning::UploadTransformData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x49e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1182);
  }
  bVar5 = GSkinningTransformProviders;
  lVar8 = *(longlong *)this;
  local_res18 = GSkinningTransformProviders;
  if (*(char *)(lVar8 + 0x41) == '\0') {
    plVar23 = *(longlong **)(lVar8 + 0x20);
    plVar22 = plVar23 + *(int *)(lVar8 + 0x28);
    if (plVar23 != plVar22) {
      do {
        uVar13 = *(uint *)(*plVar23 + 0x18c);
        lVar12 = (longlong)(int)uVar13;
        lVar8 = *(longlong *)(*(longlong *)this + 8);
        if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar8 + 0x2c0))) {
          lVar10 = *(longlong *)(lVar8 + 0x2b8);
          if (lVar10 == 0) {
            lVar10 = lVar8 + 0x2a8;
          }
          uVar20 = uVar13 & 0x1f;
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + 0x1f;
          }
          if ((*(uint *)(lVar10 + (longlong)((int)uVar13 >> 5) * 4) >> uVar20 & 1) != 0) {
            plVar3 = *(longlong **)(*plVar23 + 8);
            if (((plVar3 == (longlong *)0x0) ||
                (lVar8 = (**(code **)(*plVar3 + 0x180))(), lVar8 == 0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidSkinnedSceneInfo(PrimitiveSceneInfo)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                   ,0x4b3,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar8 = lVar12 * 0x50 + *(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x298);
            if ((bVar5 == false) ||
               (piVar7 = (int *)(**(code **)(**(longlong **)(lVar8 + 8) + 0x18))(),
               ((piVar7[3] == 0 && piVar7[2] == 0) && piVar7[1] == 0) && *piVar7 == 0)) {
              if ((*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378) == 0)
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("SceneData->Uploader.IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                        ,0x460,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::RendererPrivateUtils::Implementation::
              TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
              ::AddMultiple_GetRef
                        ((TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                          *)(*(longlong *)
                              (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378) + 0x90)
                         ,local_60,*(int *)(lVar8 + 0x38),*(int *)(lVar8 + 0x3c));
              if (((uint)*(byte *)(lVar8 + 0x47) * (uint)*(ushort *)(lVar8 + 0x40) * 2 !=
                   *(int *)(lVar8 + 0x3c)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Data.UniqueAnimationCount * Data.MaxTransformCount * 2u == Data.TransformBufferCount"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                                     ,0x466,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar15 = (ulonglong)*(ushort *)(lVar8 + 0x40);
              pFVar18 = local_60[0].DataPtr + uVar15;
              uVar16 = uVar15;
              pFVar17 = local_60[0].DataPtr;
              iVar19 = 0;
              if (*(char *)(lVar8 + 0x47) != '\0') {
                do {
                  if ((short)uVar16 != 0) {
                    pfVar9 = pFVar17->M[0] + 2;
                    lVar12 = (longlong)pFVar18 - (longlong)pFVar17;
                    iVar11 = 0;
                    do {
                      pfVar9[-2] = 1.0;
                      pfVar9[-1] = 0.0;
                      iVar11 = iVar11 + 1;
                      pfVar9[0] = 0.0;
                      pfVar9[1] = 0.0;
                      pfVar9[2] = 0.0;
                      *(undefined8 *)(pfVar9 + 3) = 0x3f800000;
                      *(undefined8 *)(pfVar9 + 5) = 0;
                      pfVar9[7] = 0.0;
                      *(undefined8 *)(pfVar9 + 8) = 0x3f800000;
                      *(undefined8 *)(lVar12 + -8 + (longlong)pfVar9) = 0x3f800000;
                      *(undefined8 *)(lVar12 + (longlong)pfVar9) = 0;
                      *(undefined4 *)(lVar12 + 8 + (longlong)pfVar9) = 0;
                      *(undefined8 *)(lVar12 + 0xc + (longlong)pfVar9) = 0x3f800000;
                      *(undefined8 *)(lVar12 + 0x14 + (longlong)pfVar9) = 0;
                      *(undefined4 *)(lVar12 + 0x1c + (longlong)pfVar9) = 0;
                      *(undefined8 *)(lVar12 + 0x20 + (longlong)pfVar9) = 0x3f800000;
                      pfVar9 = pfVar9 + 0xc;
                      uVar16 = (ulonglong)*(ushort *)(lVar8 + 0x40);
                    } while (iVar11 < (int)(uint)*(ushort *)(lVar8 + 0x40));
                  }
                  pFVar18 = pFVar18 + uVar15 * 2;
                  iVar19 = iVar19 + 1;
                  pFVar17 = pFVar17 + uVar15 * 2;
                } while (iVar19 < (int)(uint)*(byte *)(lVar8 + 0x47));
              }
            }
          }
        }
        plVar23 = plVar23 + 1;
      } while (plVar23 != plVar22);
    }
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 8);
    iVar11 = 0;
    plVar22 = (longlong *)(lVar8 + 0x298);
    uStack_cc = 1;
    iVar19 = *(int *)(lVar8 + 0x2c0);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar8 + 0x2a8);
    local_d0 = 0;
    iStack_bc = 0;
    iStack_b8 = 0;
    if (iVar19 != 0) {
      pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar1;
      }
      uVar13 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
      iStack_b8 = iVar11;
      local_d0 = iVar11;
      while (uVar13 == 0) {
        iStack_b8 = iStack_b8 + 0x20;
        lVar12 = (longlong)local_d0;
        local_d0 = local_d0 + 1;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < local_d0) goto LAB_14566dcb7;
        uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_cc = -uVar13 & uVar13;
      uVar16 = (ulonglong)uStack_cc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_bc = local_res20 + -1 + iStack_b8;
      if (iVar19 < iStack_bc) {
LAB_14566dcb7:
        iStack_bc = iVar19;
      }
    }
    uVar13 = *(uint *)(lVar8 + 0x2c0);
    local_88 = *(int *)(lVar8 + 0x2a0) - *(int *)(lVar8 + 0x2cc);
    local_a8._padding_ = CONCAT44(uStack_cc,local_d0);
    local_a8.CurrentBitIndex = iStack_bc;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_b4;
    local_a8.BaseBitIndex = iStack_b8;
    iVar21 = (int)uVar13 >> 5;
    uVar20 = uVar13 & 0xffffffe0;
    local_a8.Array = pTVar1;
    local_78 = plVar22;
    if ((((int)uVar13 < 0) || (iVar19 < (int)uVar13)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar23 = local_78;
    uVar2 = *(uint *)(lVar8 + 0x2c0);
    if (uVar13 != uVar2) {
      pTVar14 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar8 + 0x2b8);
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar21;
        uVar20 = uVar20 + 0x20;
        iVar21 = iVar21 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14566ddb0;
        uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_80 = (int)lVar12;
      uVar13 = local_80 + -1 + uVar20;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_14566ddb0:
    while( true ) {
      if (*(int *)(lVar8 + 0x2a0) - *(int *)(lVar8 + 0x2cc) != local_88) {
        local_res10[0] = 0;
        `TSparseArray<FSkinningSceneExtension::FHeaderData,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((local_a8.CurrentBitIndex == uVar13) && (local_a8.Array == pTVar1)) &&
         (plVar22 == plVar23)) break;
      lVar12 = (longlong)local_a8.CurrentBitIndex * 0x50 + *plVar22;
      if ((local_res18 == '\0') ||
         (piVar7 = (int *)(**(code **)(**(longlong **)(lVar12 + 8) + 0x18))(),
         ((piVar7[3] == 0 && piVar7[2] == 0) && piVar7[1] == 0) && *piVar7 == 0)) {
        if ((*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SceneData->Uploader.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                               ,0x460,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::RendererPrivateUtils::Implementation::
        TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
        ::AddMultiple_GetRef
                  ((TBufferScatterUploader<FMatrix3x4,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                    *)(*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x378) +
                      0x90),&local_70,*(int *)(lVar12 + 0x38),*(int *)(lVar12 + 0x3c));
        if (((uint)*(byte *)(lVar12 + 0x47) * (uint)*(ushort *)(lVar12 + 0x40) * 2 !=
             *(int *)(lVar12 + 0x3c)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.UniqueAnimationCount * Data.MaxTransformCount * 2u == Data.TransformBufferCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                               ,0x466,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = (ulonglong)*(ushort *)(lVar12 + 0x40);
        pFVar18 = local_70.DataPtr + uVar15;
        uVar16 = uVar15;
        pFVar17 = local_70.DataPtr;
        iVar19 = iVar11;
        if (*(char *)(lVar12 + 0x47) != '\0') {
          do {
            if ((short)uVar16 != 0) {
              pfVar9 = pFVar17->M[0] + 2;
              lVar10 = (longlong)pFVar18 - (longlong)pFVar17;
              iVar21 = iVar11;
              do {
                pfVar9[-2] = 1.0;
                pfVar9[-1] = 0.0;
                iVar21 = iVar21 + 1;
                pfVar9[0] = 0.0;
                pfVar9[1] = 0.0;
                pfVar9[2] = 0.0;
                *(undefined8 *)(pfVar9 + 3) = 0x3f800000;
                *(undefined8 *)(pfVar9 + 5) = 0;
                pfVar9[7] = 0.0;
                *(undefined8 *)(pfVar9 + 8) = 0x3f800000;
                *(undefined8 *)(lVar10 + -8 + (longlong)pfVar9) = 0x3f800000;
                *(undefined8 *)(lVar10 + (longlong)pfVar9) = 0;
                *(undefined4 *)(lVar10 + 8 + (longlong)pfVar9) = 0;
                *(undefined8 *)(lVar10 + 0xc + (longlong)pfVar9) = 0x3f800000;
                *(undefined8 *)(lVar10 + 0x14 + (longlong)pfVar9) = 0;
                *(undefined4 *)(lVar10 + 0x1c + (longlong)pfVar9) = 0;
                *(undefined8 *)(lVar10 + 0x20 + (longlong)pfVar9) = 0x3f800000;
                pfVar9 = pfVar9 + 0xc;
                uVar16 = (ulonglong)*(ushort *)(lVar12 + 0x40);
              } while (iVar21 < (int)(uint)*(ushort *)(lVar12 + 0x40));
            }
            pFVar18 = pFVar18 + uVar15 * 2;
            iVar19 = iVar19 + 1;
            pFVar17 = pFVar17 + uVar15 * 2;
          } while (iVar19 < (int)(uint)*(byte *)(lVar12 + 0x47));
        }
      }
      local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
    }
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// End @ 14567ad70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSkinningSceneExtension::FUpdater::End(FUpdater *this)

{
  UE::Tasks::Wait<TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295>_>
            (&this->SceneData->TaskHandles,(FTimespan)0x7fffffffffffffff);
  return;
}

// PostMeshUpdate @ 14568f150

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FUpdater::PostMeshUpdate
          (FUpdater *this,FRDGBuilder *param_1,TArrayView<FPrimitiveSceneInfo_*_const,int> *param_2)

{
  atomic<unsigned_int> *paVar1;
  longlong lVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  bool bVar5;
  FSkinningSceneExtension *pFVar6;
  FTaskBase *pFVar7;
  longlong lVar8;
  undefined4 uVar9;
  FTaskHandle *pFVar10;
  longlong lVar11;
  FTaskBase *pFVar12;
  longlong lVar13;
  FTaskBase *local_res8;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_58;
  FTaskBase *local_50;
  atomic<UE::Tasks::Private::FTaskBase_*> local_48;
  atomic<unsigned___int64> local_40;
  atomic<UE::Tasks::Private::FTaskBase_*> local_38;
  FSharedReferencer<1> local_30;
  
  iVar4 = param_2->ArrayNum;
  uVar9 = *(undefined4 *)&param_2->field_0xc;
  pFVar6 = this->SceneData;
  (this->UpdateList).DataPtr = param_2->DataPtr;
  (this->UpdateList).ArrayNum = iVar4;
  *(undefined4 *)&(this->UpdateList).field_0xc = uVar9;
  if ((pFVar6->Buffers).Ptr != (FBuffers *)0x0) {
    local_58.Reference = (pFVar6->TaskHandles).Elements[0].Pimpl.Reference;
    bVar5 = this->bEnableAsync;
    if (local_58.Reference != (FTaskBase *)0x0) {
      LOCK();
      (local_58.Reference)->RefCount =
           (atomic<unsigned_int>)((int)(local_58.Reference)->RefCount + 1);
      UNLOCK();
    }
    local_50 = (this->SceneData->TaskHandles).Elements[1].Pimpl.Reference;
    if (local_50 != (FTaskBase *)0x0) {
      LOCK();
      local_50->RefCount = (atomic<unsigned_int>)((int)local_50->RefCount + 1);
      UNLOCK();
    }
    local_48 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_58;
    lVar13 = 2;
    local_40._0_4_ = 2;
    local_38 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)this;
    FRDGBuilder::
    AddSetupTask<_FSkinningSceneExtension::FUpdater::PostMeshUpdate_::__l5::<lambda_2>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_2> *)local_78,(FPipe *)&local_38,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&local_48,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 2;
    pFVar12 = (FTaskBase *)0x0;
    if (pFVar10 != (FTaskHandle *)local_78) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_78._0_8_;
      local_78._0_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        local_78._0_8_ = (FTaskBase *)0x0;
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    if ((FTaskBase *)local_78._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_78._0_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78._0_8_)->_padding_)(local_78._0_8_,1);
      }
    }
    lVar11 = (longlong)&local_48;
    do {
      lVar8 = *(longlong *)(lVar11 + 0xfffffffffffffff8);
      lVar11 = lVar11 + 0xfffffffffffffff8;
      lVar13 = lVar13 + -1;
      if (lVar8 != 0) {
        LOCK();
        lVar2 = lVar8 + 0x30;
        iVar4 = *(int *)lVar2;
        *(int *)lVar2 = *(int *)lVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)lVar8)(lVar8,1);
        }
      }
    } while (lVar13 != 0);
    bVar5 = this->bEnableAsync;
    local_res8 = (this->SceneData->TaskHandles).Elements[2].Pimpl.Reference;
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      local_res8->RefCount = (atomic<unsigned_int>)((int)local_res8->RefCount + 1);
      UNLOCK();
    }
    local_38 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_res8;
    local_30.ReferenceController._0_4_ = 1;
    local_48 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_40 = (atomic<unsigned___int64>)this;
    FRDGBuilder::
    AddSetupTask<_FSkinningSceneExtension::FUpdater::PostMeshUpdate_::__l5::<lambda_4>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_4> *)(local_78 + 8),(FPipe *)&local_48,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&local_38,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 3;
    if (pFVar10 != (FTaskHandle *)(local_78 + 8)) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_78._8_8_;
      local_78._8_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
          local_78._8_8_ = (FTaskBase *)0x0;
        }
      }
    }
    if ((FTaskBase *)local_78._8_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_78._8_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78._8_8_)->_padding_)(local_78._8_8_,1);
      }
    }
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_res8->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
    bVar5 = this->bEnableAsync;
    local_res8 = (this->SceneData->TaskHandles).Elements[2].Pimpl.Reference;
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      local_res8->RefCount = (atomic<unsigned_int>)((int)local_res8->RefCount + 1);
      UNLOCK();
    }
    local_38 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_res8;
    local_30.ReferenceController._0_4_ = 1;
    local_48 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_40 = (atomic<unsigned___int64>)this;
    FRDGBuilder::
    AddSetupTask<_FSkinningSceneExtension::FUpdater::PostMeshUpdate_::__l5::<lambda_7>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_7> *)local_68,(FPipe *)&local_48,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&local_38,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 4;
    if (pFVar10 != (FTaskHandle *)local_68) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_68._0_8_;
      local_68._0_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
          local_68._0_8_ = (FTaskBase *)0x0;
        }
      }
    }
    if ((FTaskBase *)local_68._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_68._0_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_68._0_8_)->_padding_)(local_68._0_8_,1);
      }
    }
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_res8->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
    bVar5 = this->bEnableAsync;
    local_res8 = (this->SceneData->TaskHandles).Elements[2].Pimpl.Reference;
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      local_res8->RefCount = (atomic<unsigned_int>)((int)local_res8->RefCount + 1);
      UNLOCK();
    }
    local_38 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_res8;
    local_30.ReferenceController._0_4_ = 1;
    local_48 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_40 = (atomic<unsigned___int64>)this;
    FRDGBuilder::
    AddSetupTask<_FSkinningSceneExtension::FUpdater::PostMeshUpdate_::__l5::<lambda_8>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
              (param_1,(<lambda_8> *)(local_68 + 8),(FPipe *)&local_48,
               (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,
               (ETaskPriority)&local_38,true,bVar5);
    pFVar10 = (this->SceneData->TaskHandles).Elements + 5;
    if (pFVar10 != (FTaskHandle *)(local_68 + 8)) {
      pFVar7 = (pFVar10->Pimpl).Reference;
      (pFVar10->Pimpl).Reference = (FTaskBase *)local_68._8_8_;
      local_68._8_8_ = pFVar12;
      if (pFVar7 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar7->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    if ((FTaskBase *)local_68._8_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_68._8_8_)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_68._8_8_)->_padding_)(local_68._8_8_,1);
      }
    }
    if (local_res8 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_res8->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
    if (this->bEnableAsync == false) {
      FinishSkinningBufferUpload(this->SceneData,param_1,(FSkinningSceneParameters *)0x0);
    }
  }
  return;
}

// PostSceneUpdate @ 14568f7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FUpdater::PostSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  int iVar4;
  undefined4 uVar5;
  FTaskHandle *pFVar6;
  FTaskBase *pFVar7;
  bool bVar8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_res8;
  FTaskHandle local_18 [2];
  
  if ((this->SceneData->Buffers).Ptr != (FBuffers *)0x0) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId749,"FSkinningSceneExtension::FUpdater::PostSceneUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                 ,0x2ed);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId749);
    }
    iVar4 = (param_2->AddedPrimitiveSceneInfos).ArrayNum;
    uVar5 = *(undefined4 *)&(param_2->AddedPrimitiveSceneInfos).field_0xc;
    (this->AddedList).DataPtr = (param_2->AddedPrimitiveSceneInfos).DataPtr;
    (this->AddedList).ArrayNum = iVar4;
    *(undefined4 *)&(this->AddedList).field_0xc = uVar5;
    if (0 < (this->AddedList).ArrayNum) {
      local_res8 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
      FRDGBuilder::
      AddSetupTask<_FSkinningSceneExtension::FUpdater::PostSceneUpdate_::__l8::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>
                (param_1,(<lambda_1> *)local_18,(FPipe *)&local_res8,(FTaskHandle *)0x0,
                 (char)this->SceneData + 0x80,true,this->bEnableAsync);
      pFVar6 = (this->SceneData->TaskHandles).Elements + 1;
      if (pFVar6 != local_18) {
        pFVar3 = (pFVar6->Pimpl).Reference;
        pFVar7 = (FTaskBase *)0x0;
        (pFVar6->Pimpl).Reference = (FTaskBase *)local_18[0].Pimpl.Reference;
        local_18[0].Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar7;
        if (pFVar3 != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = &pFVar3->RefCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      if (local_18[0].Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &((FTaskBase *)local_18[0].Pimpl.Reference)->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)((FTaskBase *)local_18[0].Pimpl.Reference)->_padding_)
                    (local_18[0].Pimpl.Reference,1);
        }
      }
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PreSceneUpdate @ 14568f960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FUpdater::PreSceneUpdate
          (FUpdater *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FTaskBase *pFVar4;
  FPersistentPrimitiveIndex *pFVar5;
  TStaticArray<UE::Tasks::Private::FTaskHandle,6,4294967295> *pTVar6;
  FTaskBase *pFVar7;
  <lambda_1> local_38;
  atomic<UE::Tasks::Private::FTaskBase_*> local_20;
  atomic<unsigned___int64> local_18;
  TEventCount<unsigned_int> *pTStack_10;
  
  FinishSkinningBufferUpload(this->SceneData,param_1,(FSkinningSceneParameters *)0x0);
  if ((this->SceneData->Buffers).Ptr != (FBuffers *)0x0) {
    local_18 = (atomic<unsigned___int64>)(param_2->RemovedPrimitiveIds).DataPtr;
    pTStack_10 = *(TEventCount<unsigned_int> **)&(param_2->RemovedPrimitiveIds).ArrayNum;
    pFVar7 = (FTaskBase *)0x0;
    local_38.RemovedList.DataPtr = (FPersistentPrimitiveIndex *)0x0;
    local_38.RemovedList.ArrayNum = 0;
    local_38.RemovedList._12_4_ = 0;
    local_20 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    FRDGBuilder::
    AddSetupTask<_FSkinningSceneExtension::FUpdater::PreSceneUpdate_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_38,(FPipe *)&stack0xffffffffffffffe0,
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (char)&local_38 + 8,true,this->bEnableAsync);
    pFVar5 = local_38.RemovedList.DataPtr;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_38.RemovedList.DataPtr,local_38.RemovedList.ArrayNum);
    if ((FTaskHandle *)pFVar5 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar5);
    }
    pTVar6 = &this->SceneData->TaskHandles;
    if ((<lambda_1> *)pTVar6 != &local_38) {
      pFVar4 = pTVar6->Elements[0].Pimpl.Reference;
      pTVar6->Elements[0].Pimpl.Reference = (FTaskBase *)local_38.__this;
      local_38.__this = (FUpdater *)pFVar7;
      if (pFVar4 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar4->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    if ((FTaskBase *)local_38.__this != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)local_38.__this)->RefCount;
      iVar3 = *(int *)&paVar1->field_0x0;
      *(int *)&paVar1->field_0x0 = *(int *)&paVar1->field_0x0 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)((FTaskBase *)local_38.__this)->_padding_)(local_38.__this,1);
      }
    }
  }
  return;
}

