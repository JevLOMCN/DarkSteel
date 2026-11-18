// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FDynamicMeshElementContext @ 14551dc30

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicMeshElementContext * __thiscall
FDynamicMeshElementContext::FDynamicMeshElementContext
          (FDynamicMeshElementContext *this,FSceneRenderer *param_1)

{
  TArray<FDynamicMeshElementContext::FViewMeshArrays,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  longlong *plVar2;
  FViewInfo **ppFVar3;
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> FVar4;
  FSceneView *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FDynamicMeshElementContext *pFVar11;
  FRHICommandListBase *this_01;
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> FVar12;
  ForElementType<FDynamicMeshElementContext::FViewMeshArrays> FVar13;
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> FVar14;
  uint uVar15;
  FRHICommandListBase *pFVar16;
  FRHICommandListBase *pFVar17;
  ForElementType<FDynamicMeshElementContext::FViewMeshArrays> FVar18;
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar19;
  int *piVar20;
  longlong lVar21;
  uint uVar22;
  longlong local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  
  this->FirstViewFamily = (FSceneViewFamily *)&param_1->ViewFamily;
  (this->Views).DataPtr = (FViewInfo **)(param_1->AllViews).AllocatorInstance.Data;
  iVar8 = (param_1->AllViews).ArrayNum;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
    return pFVar11;
  }
  (this->Views).ArrayNum = iVar8;
  lVar21 = *(longlong *)&param_1->field_0x8;
  (this->Primitives).DataPtr = *(FPrimitiveSceneInfo ***)(lVar21 + 0x2888);
  iVar8 = *(int *)(lVar21 + 0x2890);
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
    return pFVar11;
  }
  (this->Primitives).ArrayNum = iVar8;
  piVar1 = &(this->ViewMeshArraysPerView).ArrayNum;
  pFVar16 = (FRHICommandListBase *)0x0;
  (this->ViewFamilyGroups).AllocatorInstance.SecondaryData =
       (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0;
  (this->ViewFamilyGroups).ArrayNum = 0;
  (this->ViewFamilyGroups).ArrayMax = 1;
  (this->ViewMeshArraysPerView).AllocatorInstance.SecondaryData =
       (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0;
  *piVar1 = 0;
  (this->ViewMeshArraysPerView).ArrayMax = 2;
  (this->DynamicPrimitives).AllocatorInstance.Data = (FDynamicPrimitive *)0x0;
  (this->DynamicPrimitives).ArrayNum = 0;
  (this->DynamicPrimitives).ArrayMax = 0;
  FMeshElementCollector::FMeshElementCollector
            (&this->MeshCollector,param_1->FeatureLevel,&param_1->Allocator,DeferAll);
  this_01 = ::operator_new(0x1bb0);
  pFVar17 = pFVar16;
  if (this_01 != (FRHICommandListBase *)0x0) {
    FRHICommandListBase::FRHICommandListBase
              (this_01,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false);
    pFVar17 = this_01;
  }
  this->RHICmdList = (FRHICommandList *)pFVar17;
  (this->DynamicVertexBuffer).RHICmdList = pFVar17;
  (this->DynamicVertexBuffer).VertexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayNum = 0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayMax = 0;
  (this->DynamicIndexBuffer).RHICmdList = (FRHICommandListBase *)this->RHICmdList;
  (this->DynamicIndexBuffer).IndexBuffers16.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayMax = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayMax = 0;
  UE::Tasks::FPipe::FPipe
            (&this->Pipe,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(295)"
            );
  uVar22 = 0;
  iVar8 = (this->Views).ArrayNum + -1;
  if (-1 < iVar8) {
    lVar21 = 0;
    do {
      uVar15 = (uint)pFVar16;
      uVar22 = uVar22 & 0xff | 1 << (uVar15 & 0x1f);
      if (lVar21 == iVar8) {
LAB_14551dea5:
        FVar14 = (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)
                 &this->ViewFamilyGroups;
        uVar9 = 0;
        if ((int)uVar15 < (this->Views).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
          return pFVar11;
        }
        FVar4 = (this->ViewFamilyGroups).AllocatorInstance.SecondaryData;
        local_38 = (this->Views).DataPtr[lVar21]->_padding_;
        FVar12 = FVar14;
        if (FVar4 != (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
          FVar12 = FVar4;
        }
        uStack_30 = (undefined1)uVar22;
        if ((ulonglong)FVar12 <= &local_38) {
          FVar12 = FVar14;
          if (FVar4 != (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
            FVar12 = FVar4;
          }
          if ((&local_38 <
               (longlong *)((longlong)(this->ViewFamilyGroups).ArrayMax * 0x10 + (longlong)FVar12))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
            return pFVar11;
          }
        }
        iVar10 = (this->ViewFamilyGroups).ArrayNum;
        piVar20 = &(this->ViewFamilyGroups).ArrayMax;
        if (iVar10 == *piVar20) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>_>
                             (0x810,(ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> *)
                                    FVar14,piVar20);
        }
        (this->ViewFamilyGroups).ArrayNum = iVar10 + 1;
        FVar4 = (this->ViewFamilyGroups).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
          FVar14 = FVar4;
        }
        uVar22 = 0;
        plVar2 = (longlong *)((longlong)FVar14 + (longlong)iVar10 * 0x10);
        *plVar2 = local_38;
        plVar2[1] = CONCAT71(uStack_2f,uStack_30);
      }
      else {
        uVar9 = 0;
        if ((int)(uVar15 + 1) < (this->Views).ArrayNum) {
          uVar9 = ~(uVar15 + 1) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
          return pFVar11;
        }
        ppFVar3 = (this->Views).DataPtr;
        uVar9 = 0;
        if ((int)uVar15 < (this->Views).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
          return pFVar11;
        }
        if ((this->Views).DataPtr[lVar21]->_padding_ != ppFVar3[lVar21 + 1]->_padding_)
        goto LAB_14551dea5;
      }
      pFVar16 = (FRHICommandListBase *)(ulonglong)(uVar15 + 1);
      lVar21 = lVar21 + 1;
    } while (lVar21 <= iVar8);
  }
  piVar20 = &(this->Views).ArrayNum;
  FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)this->RHICmdList,Graphics);
  uVar22 = *piVar20;
  this_00 = &this->ViewMeshArraysPerView;
  iVar8 = (this->ViewMeshArraysPerView).ArrayNum;
  if (iVar8 < (int)uVar22) {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
                       (0x2c0,8,uVar22 - iVar8,&this_00->AllocatorInstance,piVar1,
                        &(this->ViewMeshArraysPerView).ArrayMax);
    FVar13 = (this->ViewMeshArraysPerView).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0) {
      FVar13 = (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)this_00;
    }
    DefaultConstructItems<FDynamicMeshElementContext::FViewMeshArrays,int>
              ((void *)((longlong)FVar13 + (longlong)iVar10 * 0x2c0),uVar22 - iVar8);
  }
  else {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((int)uVar22 < iVar8) {
      uVar15 = iVar8 - uVar22;
      if (((int)(uVar22 | uVar15) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
        return pFVar11;
      }
      if (uVar15 != 0) {
        TArray<FDynamicMeshElementContext::FViewMeshArrays,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtImpl(this_00,uVar22,uVar15);
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
                  (0x2c0,8,&this_00->AllocatorInstance,(this->ViewMeshArraysPerView).ArrayNum,
                   &(this->ViewMeshArraysPerView).ArrayMax);
      }
    }
  }
  FMeshElementCollector::Start
            (&this->MeshCollector,this->RHICmdList,&this->DynamicVertexBuffer,
             &this->DynamicIndexBuffer,
             (FGlobalDynamicReadBuffer *)&FSceneRenderer::DynamicReadBufferForInitViews);
  uVar22 = 0;
  if (0 < *piVar20) {
    lVar21 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar22 < (this->Views).ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
        return pFVar11;
      }
      pFVar5 = *(FSceneView **)(lVar21 + (longlong)(this->Views).DataPtr);
      uVar15 = 0;
      if ((int)uVar22 < (this->ViewMeshArraysPerView).ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FDynamicMeshElementContext *)(*pcVar6)();
        return pFVar11;
      }
      FVar13 = (this->ViewMeshArraysPerView).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)
               &this->ViewMeshArraysPerView;
      if (FVar13 != (ForElementType<FDynamicMeshElementContext::FViewMeshArrays>)0x0) {
        FVar18 = FVar13;
      }
      pTVar19 = (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *)((longlong)FVar18 + (longlong)(int)uVar22 * 0x2c0);
      FMeshElementCollector::AddViewMeshArrays
                (&this->MeshCollector,pFVar5,pTVar19,(FSimpleElementCollector *)(pTVar19 + 1),
                 (FGPUScenePrimitiveCollector *)
                 &pFVar5[1].PreviousViewTransform.TypedValue.Translation.ZW,
                 (FSimpleElementCollector *)&pTVar19[0x16].ArrayNum);
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 8;
    } while ((int)uVar22 < *piVar20);
  }
  return this;
}

// operator() @ 145522c20

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FDynamicMeshElementContext::LaunchAsyncTask'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  FDynamicMeshElementContext *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  do {
    plVar4 = *(longlong **)((longlong)this + 8);
    LOCK();
    plVar1 = plVar4 + 2;
    iVar2 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    if ((int)plVar4[1] <= iVar2) {
      FTaskTagScope::~FTaskTagScope(&local_18);
      return;
    }
    if (iVar2 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FDynamicMeshElementContext **)this;
    uVar3 = *(uint *)(*plVar4 + (longlong)iVar2 * 4);
    uVar7 = uVar3 & 0xffffff;
    if ((this_00->Primitives).ArrayNum <= (int)uVar7) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FDynamicMeshElementContext::GatherDynamicMeshElementsForPrimitive
              (this_00,(this_00->Primitives).DataPtr[uVar7],(uchar)(uVar3 >> 0x18));
  } while( true );
}

// operator() @ 145523010

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>::operator()(void *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshElementContext *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 local_res8 [8];
  
  puVar7 = *(uint **)((longlong)this + 8);
  iVar2 = *(int *)((longlong)this + 0x10);
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDynamicPrimitiveIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar7 == puVar1) break;
    uVar3 = *puVar7;
    this_00 = *(FDynamicMeshElementContext **)this;
    uVar6 = uVar3 & 0xffffff;
    if ((this_00->Primitives).ArrayNum <= (int)uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FDynamicMeshElementContext::GatherDynamicMeshElementsForPrimitive
              (this_00,(this_00->Primitives).DataPtr[uVar6],(uchar)(uVar3 >> 0x18));
    puVar7 = puVar7 + 1;
  }
  return;
}

// Finish @ 145540180

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FDynamicMeshElementContext::Finish(FDynamicMeshElementContext *this)

{
  FMeshElementCollector::Finish(&this->MeshCollector);
  FGlobalDynamicVertexBuffer::Commit(&this->DynamicVertexBuffer);
  FGlobalDynamicIndexBuffer::Commit(&this->DynamicIndexBuffer);
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this->RHICmdList);
  UE::Tasks::FPipe::WaitUntilEmpty(&this->Pipe,(FTimespan)0x7fffffffffffffff);
  return;
}

// GatherDynamicMeshElementsForEditorPrimitive @ 145542060

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContext::GatherDynamicMeshElementsForEditorPrimitive
          (FDynamicMeshElementContext *this,FPrimitiveSceneInfo *param_1,uchar param_2)

{
  return;
}

// GatherDynamicMeshElementsForPrimitive @ 145542070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContext::GatherDynamicMeshElementsForPrimitive
          (FDynamicMeshElementContext *this,FPrimitiveSceneInfo *param_1,uchar param_2)

{
  int *piVar1;
  undefined4 uVar2;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  code *pcVar4;
  FPrimitiveSceneInfo *pFVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar10;
  ForElementType<int> FVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> FVar14;
  longlong lVar15;
  ForElementType<FDynamicMeshElementContext::FViewFamilyGroup> FVar16;
  uint uVar17;
  longlong lVar18;
  FDynamicPrimitive *pFVar19;
  bool bVar20;
  undefined1 auStackY_a8 [32];
  undefined1 local_76 [6];
  FPrimitiveSceneInfo *local_70;
  uint local_68;
  ForElementType<int> local_60;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar17 = (uint)param_2;
  local_70 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"DynamicPrimitive");
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4143,"DynamicPrimitive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x102f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4143);
  }
  uVar13 = (this->Views).ArrayNum;
  local_60.SecondaryData = (ForElementType<int>)0x0;
  local_48[0] = 0;
  local_48[1] = 4;
  if ((int)uVar13 < 1) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar13,&local_60,local_48,local_48 + 1);
  }
  uVar13 = 0;
  if (0 < (this->Views).ArrayNum) {
    lVar18 = 0;
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (this->MeshCollector).MeshBatches.ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->MeshCollector).MeshBatches.AllocatorInstance.SecondaryData.Data;
      pTVar10 = &(this->MeshCollector).MeshBatches;
      if (pTVar3 != (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar10 = pTVar3;
      }
      uVar2 = *(undefined4 *)(*(longlong *)((pTVar10->AllocatorInstance).InlineData + lVar15) + 8);
      uVar12 = 0;
      if ((int)uVar13 < local_48[0]) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar11 = (ForElementType<int>)&local_60;
      if (local_60.SecondaryData != (ForElementType<int>)0x0) {
        FVar11 = local_60.SecondaryData;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      *(undefined4 *)(lVar18 + (longlong)FVar11) = uVar2;
      lVar18 = lVar18 + 4;
      param_1 = local_70;
    } while ((int)uVar13 < (this->Views).ArrayNum);
  }
  FMeshElementCollector::SetPrimitive
            (&this->MeshCollector,param_1->Proxy,&param_1->DefaultDynamicHitProxyId);
  iVar9 = (this->ViewFamilyGroups).ArrayNum;
  if ((iVar9 == 1) || (local_70->Proxy->bSinglePassGDME != 0)) {
    (**(code **)(local_70->Proxy->_padding_ + 0xa8))
              (local_70->Proxy,&this->FirstViewFamily->AllViews,this->FirstViewFamily,uVar17);
  }
  else {
    FVar14 = (this->ViewFamilyGroups).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)0x0) {
      FVar14 = (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)&this->ViewFamilyGroups
      ;
    }
    FVar16 = (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)
             ((longlong)iVar9 * 0x10 + (longlong)FVar14);
    while( true ) {
      if ((this->ViewFamilyGroups).ArrayNum != iVar9) {
        local_76[0] = 0;
        `TCheckedPointerIterator<FDynamicMeshElementContext::FViewFamilyGroup,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_76);
      }
      if (FVar14 == FVar16) break;
      bVar7 = param_2 & *(byte *)((longlong)FVar14 + 8);
      if (bVar7 != 0) {
        (**(code **)(local_70->Proxy->_padding_ + 0xa8))
                  (local_70->Proxy,&this->FirstViewFamily->AllViews,*(undefined8 *)FVar14,bVar7);
      }
      FVar14 = (ForElementType<FDynamicMeshElementContext::FViewFamilyGroup>)
               ((longlong)FVar14 + 0x10);
    }
  }
  pFVar5 = local_70;
  iVar9 = (this->Views).ArrayNum;
  uVar13 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    uVar12 = 1;
    local_68 = (uint)param_2;
    lVar18 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < iVar9) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar17 & uVar12) != 0) {
        iVar9 = (this->DynamicPrimitives).ArrayNum;
        piVar1 = &(this->DynamicPrimitives).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
                            (0x410,&(this->DynamicPrimitives).AllocatorInstance,piVar1);
        }
        pFVar19 = (this->DynamicPrimitives).AllocatorInstance.Data;
        (this->DynamicPrimitives).ArrayNum = iVar9 + 1;
        pFVar19 = pFVar19 + iVar9;
        pFVar19->PrimitiveIndex = 0;
        pFVar19->ViewIndex = 0;
        pFVar19->StartElementIndex = 0;
        pFVar19->EndElementIndex = 0;
        pFVar19->PrimitiveIndex = pFVar5->PackedIndex;
        pFVar19->ViewIndex = uVar13;
        uVar17 = 0;
        if ((int)uVar13 < local_48[0]) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = (ForElementType<int>)&local_60;
        if (local_60.SecondaryData != (ForElementType<int>)0x0) {
          FVar11 = local_60.SecondaryData;
        }
        pFVar19->StartElementIndex = *(int *)((longlong)FVar11 + lVar18);
        uVar17 = 0;
        if ((int)uVar13 < (this->MeshCollector).MeshBatches.ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar3 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(this->MeshCollector).MeshBatches.AllocatorInstance.SecondaryData.Data;
        pTVar10 = &(this->MeshCollector).MeshBatches;
        if (pTVar3 != (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar10 = pTVar3;
        }
        pFVar19->EndElementIndex =
             *(int *)(*(longlong *)((pTVar10->AllocatorInstance).InlineData + lVar15) + 8);
        uVar17 = local_68;
      }
      iVar9 = (this->Views).ArrayNum;
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      lVar18 = lVar18 + 4;
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < iVar9);
  }
  if (local_60.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// LaunchAsyncTask @ 145547730

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FDynamicMeshElementContext::LaunchAsyncTask
          (FDynamicMeshElementContext *this,FDynamicPrimitiveIndexQueue *param_1,
          ETaskPriority param_2)

{
  atomic<unsigned___int64> *paVar1;
  FTaskBase *this_00;
  undefined7 in_register_00000081;
  ETaskPriority in_R9B;
  
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4122)"
               ,in_R9B,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = CONCAT71(in_register_00000081,param_2);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>_>::
          _vftable_;
  }
  LOCK();
  paVar1 = &(this->Pipe).TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &this->Pipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  (param_1->List).Primitives.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)this_00;
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// LaunchRenderThreadTask @ 145547c20

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FDynamicMeshElementContext::LaunchRenderThreadTask
          (FDynamicMeshElementContext *this,FDynamicPrimitiveIndexList *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  TAtomic<ENamedThreads::Type> TVar4;
  FTaskBase *this_00;
  longlong *plVar5;
  FTaskBase *this_01;
  undefined8 *in_R8;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  FPipe *local_38;
  longlong *local_30;
  
  TVar4 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  this_01 = (FTaskBase *)0x0;
  uVar3 = *in_R8;
  *in_R8 = 0;
  uVar1 = *(undefined4 *)(in_R8 + 1);
  uVar2 = *(undefined4 *)((longlong)in_R8 + 0xc);
  in_R8[1] = 0;
  local_58 = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  local_30[1] = (longlong)this;
  local_30[2] = uVar3;
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDynamicMeshElementContext::LaunchRenderThreadTask'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  *(undefined4 *)(local_30 + 3) = uVar1;
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar2;
  if (local_30 != (longlong *)&DAT_fffffffffffffff8) {
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,void>
               ::Call;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this_01[1]._padding_ = (longlong)local_58;
  *(longlong **)&this_01[1].StateChangeEvent = local_30;
  local_30 = (longlong *)0x0;
  this_01[1]._padding_ = local_48;
  this_01[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_40;
  this_01[1].NumLocks = (atomic<unsigned_int>)uStack_40._4_4_;
  this_01[1].Pipe = local_38;
  if (this_01[1]._padding_ != 0) {
    local_58 = (code *)0x0;
  }
  this_01[1].ExecutingThreadId = (atomic<unsigned_int>)TVar4;
  UE::Tasks::Private::TranslatePriority((Type)TVar4,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res10[0],local_res8[0],None);
  (param_1->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)this_01;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch
            ((FTaskBase *)(param_1->Primitives).AllocatorInstance.Data,0x130);
  if (local_58 != (code *)0x0) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

