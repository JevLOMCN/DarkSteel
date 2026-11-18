// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVisibilityTaskConfig @ 14551ede0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FVisibilityTaskConfig * __thiscall
FVisibilityTaskConfig::FVisibilityTaskConfig
          (FVisibilityTaskConfig *this,FScene *param_1,TArrayView<FViewInfo_*_const,int> *param_2)

{
  int *piVar1;
  FViewInfo **ppFVar2;
  uchar *_Dst;
  uint *puVar3;
  uint uVar4;
  TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar5;
  longlong lVar6;
  code *pcVar7;
  FStaticShaderPlatform FVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  atomic<unsigned_int> aVar12;
  FVisibilityTaskConfig *pFVar13;
  FViewInfo **ppFVar14;
  TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  atomic<unsigned_int> aVar19;
  bool bVar20;
  
  this->TaskPriority = High;
  this->NumVisiblePrimitives = 0;
  this->NumTestedPrimitives = 0;
  uVar16 = 0;
  (this->AlwaysVisible).TaskPriority = High;
  (this->AlwaysVisible).NumTasks = 0;
  (this->AlwaysVisible).NumWordsPerTask = 0;
  (this->AlwaysVisible).NumPrimitivesPerTask = 0;
  (this->FrustumCull).TaskPriority = High;
  (this->FrustumCull).NumTasks = 0;
  (this->FrustumCull).NumWordsPerTask = 0;
  (this->FrustumCull).NumPrimitivesPerTask = 0;
  (this->FrustumCull).NumCulledPrimitives = (atomic<unsigned_int>)0x0;
  (this->OcclusionCull).TaskPriority = High;
  (this->OcclusionCull).FinalizeTaskPriority = High;
  (this->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data = (FView *)0x0;
  (this->OcclusionCull).Views.ArrayNum = 0;
  *(undefined8 *)&(this->OcclusionCull).Views.ArrayMax = 2;
  (this->OcclusionCull).NumTestedQueries = (atomic<unsigned_int>)0x0;
  (this->Relevance).ComputeRelevanceTaskPriority = High;
  (this->Relevance).NumEstimatedPackets = 0;
  (this->Relevance).NumPrimitivesPerPacket = 0;
  (this->Relevance).NumPrimitivesProcessed = 0;
  bVar20 = GVisibilityTaskSchedule != 0;
  this->Schedule = (uint)bVar20;
  if (bVar20 != Parallel) goto LAB_14551eed2;
  bVar20 = FApp::ShouldUseThreadingForPerformance();
  if ((((bVar20) && (GIsThreadedRendering != false)) &&
      (GRHIGlobals.SupportsParallelOcclusionQueries != false)) &&
     ((GVisualizeOccludedPrimitives < 1 && (GVisualizePrimitiveBBoxes < 1)))) {
    FVar8.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
    bVar20 = IsMobilePlatform(FVar8);
    if (bVar20) goto LAB_14551ee98;
  }
  else {
LAB_14551ee98:
    this->Schedule = RenderThread;
  }
  ppFVar14 = param_2->DataPtr;
  ppFVar2 = ppFVar14 + param_2->ArrayNum;
  for (; ppFVar14 != ppFVar2; ppFVar14 = ppFVar14 + 1) {
    if (((*ppFVar14)->_padding_ != 0) && ((*(byte *)((*ppFVar14)->_padding_ + 0x5a0) & 2) != 0)) {
      this->Schedule = RenderThread;
      break;
    }
  }
LAB_14551eed2:
  this->NumTestedPrimitives = (param_1->Primitives).ArrayNum;
  this->NumVisiblePrimitives = 0;
  uVar17 = param_1->PrimitivesAlwaysVisibleOffset;
  if (uVar17 != 0xffffffff) {
    this->NumTestedPrimitives = uVar17;
    this->NumVisiblePrimitives = (param_1->Primitives).ArrayNum - uVar17;
    if (((uVar17 & 0x1f) != 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("uint32(NumTestedPrimitives % ((int32)32)) == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                            ,0xdf2,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      pFVar13 = (FVisibilityTaskConfig *)(*pcVar7)();
      return pFVar13;
    }
  }
  uVar17 = this->NumVisiblePrimitives;
  aVar19 = (atomic<unsigned_int>)0x10;
  if ((uint)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < 0x10) {
    aVar19 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  if (uVar17 == 0) {
    uVar9 = 0;
    uVar17 = uVar16;
  }
  else {
    uVar16 = uVar17 + 0x1f >> 5;
    if (this->Schedule == RenderThread) {
      uVar9 = 0x80;
    }
    else {
      uVar9 = (((int)aVar19 * 2 - 1U) + uVar16) / (uint)((int)aVar19 * 2);
    }
    (this->AlwaysVisible).NumWordsPerTask = uVar9;
    if (uVar9 < uVar16) {
      uVar16 = uVar9;
    }
    uVar9 = 0x20;
    if (0x20 < uVar16) {
      uVar9 = uVar16;
    }
    uVar16 = uVar9 * 0x20;
    uVar17 = ((uVar17 - 1) + uVar16) / uVar16;
  }
  (this->AlwaysVisible).NumWordsPerTask = uVar9;
  (this->AlwaysVisible).NumPrimitivesPerTask = uVar16;
  (this->AlwaysVisible).NumTasks = uVar17;
  uVar16 = this->NumTestedPrimitives;
  uVar17 = uVar16 + 0x1f >> 5;
  if (GFrustumCullNumPrimitivesPerTask < 1) {
    if (this->Schedule == RenderThread) {
      uVar9 = 0x80;
    }
    else {
      uVar9 = (((int)aVar19 * 2 - 1U) + uVar17) / (uint)((int)aVar19 * 2);
    }
  }
  else {
    uVar9 = GFrustumCullNumPrimitivesPerTask + 0x1fU >> 5;
  }
  uVar4 = param_2->ArrayNum;
  pTVar5 = &(this->OcclusionCull).Views;
  if (uVar9 < uVar17) {
    uVar17 = uVar9;
  }
  uVar9 = 0x20;
  if (0x20 < uVar17) {
    uVar9 = uVar17;
  }
  (this->FrustumCull).NumWordsPerTask = uVar9;
  uVar9 = uVar9 * 0x20;
  (this->FrustumCull).NumPrimitivesPerTask = uVar9;
  piVar1 = &(this->OcclusionCull).Views.ArrayNum;
  (this->FrustumCull).NumTasks = ((uVar16 - 1) + uVar9) / uVar9;
  iVar11 = *piVar1;
  if (iVar11 < (int)uVar4) {
    iVar10 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_>
                       (4,4,uVar4 - iVar11,&pTVar5->AllocatorInstance,piVar1,
                        &(this->OcclusionCull).Views.ArrayMax);
    pTVar15 = (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data;
    if (pTVar15 ==
        (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar15 = pTVar5;
    }
    DefaultConstructItems<FVisibilityTaskConfig::FOcclusionCull::FView,int>
              ((pTVar15->AllocatorInstance).InlineData + (longlong)iVar10 * 4,uVar4 - iVar11);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar11) {
      uVar16 = iVar11 - uVar4;
      if (((int)(uVar16 | uVar4) < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar20)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FVisibilityTaskConfig *)(*pcVar7)();
        return pFVar13;
      }
      if (uVar16 != 0) {
        pTVar15 = (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)(this->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data;
        if (pTVar15 ==
            (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar15 = pTVar5;
        }
        _Dst = (pTVar15->AllocatorInstance).InlineData + (longlong)(int)uVar4 * 4;
        iVar11 = ((this->OcclusionCull).Views.ArrayNum - uVar4) - uVar16;
        if (iVar11 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar16 * 4,(longlong)iVar11 << 2);
        }
        iVar11 = (this->OcclusionCull).Views.ArrayNum - uVar16;
        (this->OcclusionCull).Views.ArrayNum = iVar11;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FVisibilityTaskConfig::FOcclusionCull::FView>_>
                  (4,4,&pTVar5->AllocatorInstance,iVar11,&(this->OcclusionCull).Views.ArrayMax);
      }
    }
  }
  uVar16 = 0;
  if (0 < (int)uVar4) {
    lVar18 = 0;
    do {
      uVar17 = 0;
      if ((int)uVar16 < (this->OcclusionCull).Views.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FVisibilityTaskConfig *)(*pcVar7)();
        return pFVar13;
      }
      pTVar5 = (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data;
      pTVar15 = &(this->OcclusionCull).Views;
      if (pTVar5 != (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar15 = pTVar5;
      }
      puVar3 = (uint *)((longlong)(pTVar15->AllocatorInstance).InlineData + lVar18 * 4);
      uVar17 = GOcclusionCullMaxQueriesPerTask;
      if (GOcclusionCullMaxQueriesPerTask < 1) {
        uVar17 = 0;
        if ((int)uVar16 < (int)uVar4) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          pFVar13 = (FVisibilityTaskConfig *)(*pcVar7)();
          return pFVar13;
        }
        lVar6 = param_2->DataPtr[lVar18]->_padding_;
        if (lVar6 != 0) {
          aVar12 = aVar19;
          if (aVar19 == (atomic<unsigned_int>)0x0) {
            aVar12 = (atomic<unsigned_int>)0x1;
          }
          uVar17 = (uint)(*(int *)(lVar6 + 0x2b68) + -1 + (int)aVar12 * 2) / (uint)((int)aVar12 * 2)
          ;
          goto LAB_14551f21c;
        }
      }
      else {
LAB_14551f21c:
        *puVar3 = uVar17;
      }
      uVar17 = 0x40;
      if (0x40 < *puVar3) {
        uVar17 = *puVar3;
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 1;
      *puVar3 = uVar17;
    } while ((int)uVar16 < (int)uVar4);
  }
  if (GRelevanceNumPrimitivesPerPacket < 1) {
    if (this->Schedule == RenderThread) {
      uVar16 = 0x80;
    }
    else {
      uVar16 = ((this->NumTestedPrimitives - 1) + (int)aVar19 * 0x20) / (uint)((int)aVar19 * 0x20);
    }
  }
  else {
    (this->Relevance).NumPrimitivesPerPacket = GRelevanceNumPrimitivesPerPacket;
    uVar16 = GRelevanceNumPrimitivesPerPacket;
  }
  uVar17 = 0x800;
  if (uVar16 < 0x800) {
    uVar17 = uVar16;
  }
  uVar16 = this->NumTestedPrimitives;
  uVar9 = 0x20;
  if (0x20 < uVar17) {
    uVar9 = uVar17;
  }
  (this->Relevance).NumPrimitivesPerPacket = uVar9;
  (this->Relevance).NumEstimatedPackets = ((uVar16 - 1) + uVar9) / uVar9;
  return this;
}

