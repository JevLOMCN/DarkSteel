// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 26

// FShadowSceneRenderer @ 14560a3e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FShadowSceneRenderer * __thiscall
FShadowSceneRenderer::FShadowSceneRenderer
          (FShadowSceneRenderer *this,FDeferredShadingSceneRenderer *param_1,FShadowScene *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)param_1;
  this->VirtualShadowMapMaskBits = (FRDGTexture *)0x0;
  this->_padding_ = (longlong)&___7FShadowSceneRenderer__6B_;
  this->VirtualShadowMapMaskBitsHairStrands = (FRDGTexture *)0x0;
  this->HairTransmittanceMaskBits = (FRDGBuffer *)0x0;
  (this->RendererSetupTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->CommonSetups).AllocatorInstance.Data = (FLightCommonFrameSetup *)0x0;
  (this->CommonSetups).ArrayNum = 0;
  (this->CommonSetups).ArrayMax = 0;
  (this->LocalLights).AllocatorInstance.Data = (FLocalLightShadowFrameSetup *)0x0;
  (this->LocalLights).ArrayNum = 0;
  (this->LocalLights).ArrayMax = 0;
  (this->DirectionalLights).AllocatorInstance.Data = (FDirectionalLightShadowFrameSetup *)0x0;
  (this->DirectionalLights).ArrayNum = 0;
  (this->DirectionalLights).ArrayMax = 0;
  this->SceneRenderer = param_1;
  this->Scene = (FScene *)param_2->_padding_;
  this->VirtualShadowMapArray = (FVirtualShadowMapArray *)&param_1->field_0x6f0;
  this->ShadowScene = param_2;
  (this->NaniteRenderPasses).AllocatorInstance.Data = (FNaniteVirtualShadowMapRenderPass *)0x0;
  (this->NaniteRenderPasses).ArrayNum = 0;
  (this->NaniteRenderPasses).ArrayMax = 0;
  this->NaniteVisibilityQuery = (FNaniteVisibilityQuery *)0x0;
  (this->ViewDatas).AllocatorInstance.Data = (FViewData *)0x0;
  (this->ViewDatas).ArrayNum = 0;
  (this->ViewDatas).ArrayMax = 0;
  this->bShouldUseVirtualShadowMapOnePassProjection = false;
  pTVar2 = CVarUseConservativeDistantLightThreshold.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14560a48d:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar4 = 1;
    if (bVar3) goto LAB_14560a48d;
  }
  this->bUseConservativeDistantLightThreshold = pTVar2->ShadowedValue[lVar4];
  pTVar1 = CVarDistantLightMode.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_14560a4bb;
  }
  lVar4 = 0;
LAB_14560a4bb:
  this->DistantLightMode = *(int *)((longlong)pTVar1->ShadowedValue + lVar4);
  this->bNeedVSMOnePassProjection = false;
  this->bNeedMegaLightsProjection = false;
  (this->ExplicitChunkDrawInstanceIds).AllocatorInstance.Data = (uint *)0x0;
  (this->ExplicitChunkDrawInstanceIds).ArrayNum = 0;
  (this->ExplicitChunkDrawInstanceIds).ArrayMax = 0;
  return this;
}

// operator() @ 14560c320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FProjectedShadowInfo * __thiscall
`FShadowSceneRenderer::AddDirectionalLightShadow'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FVirtualShadowMapClipmap,1> *param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ForElementType<FProjectedShadowInfo_*> *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVirtualShadowMapPerLightCacheEntry *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  FProjectedShadowInfo *pFVar13;
  bool bVar14;
  float fVar15;
  FProjectedShadowInfo *local_28;
  FVirtualShadowMapPerLightCacheEntry *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  lVar3 = *(longlong *)(*(longlong *)this + 0x60);
  puVar10 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1150,0x10);
  puVar10[1] = 0;
  *puVar10 = &
             ___7__TObject_VFProjectedShadowInfo_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  local_28 = (FProjectedShadowInfo *)(puVar10 + 2);
  lVar11 = *(longlong *)(lVar3 + 0xb0);
  do {
    puVar10[1] = lVar11;
    plVar2 = (longlong *)(lVar3 + 0xb0);
    LOCK();
    lVar12 = *plVar2;
    bVar14 = lVar11 == lVar12;
    if (bVar14) {
      *plVar2 = (longlong)puVar10;
      lVar12 = lVar11;
    }
    UNLOCK();
    lVar11 = lVar12;
  } while (!bVar14);
  FProjectedShadowInfo::FProjectedShadowInfo(local_28);
  pTVar8 = CVarVsmUseFarShadowRules.Ref;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FProjectedShadowInfo *)(*pcVar7)();
    return pFVar13;
  }
  fVar15 = __real_bf800000;
  if (pTVar8->ShadowedValue[1] != 0) {
    fVar15 = **(float **)((longlong)this + 0x18);
  }
  FProjectedShadowInfo::SetupClipmapProjection
            (local_28,*(FLightSceneInfo **)((longlong)this + 8),
             *(FViewInfo **)((longlong)this + 0x10),param_1,fVar15);
  pFVar4 = *(ForElementType<FProjectedShadowInfo_*> **)((longlong)this + 0x20);
  if (((pFVar4->Data <= &local_28) &&
      (&local_28 < pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FProjectedShadowInfo *)(*pcVar7)();
    return pFVar13;
  }
  iVar9 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                      (0x808,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar9 + 1;
  pFVar4->Data[iVar9] = local_28;
  if ((param_1->Object == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    pFVar13 = (FProjectedShadowInfo *)(*pcVar7)();
    return pFVar13;
  }
  pTVar5 = (param_1->Object->PerLightCacheEntry).SharedReferenceCount.ReferenceController;
  pFVar6 = (param_1->Object->PerLightCacheEntry).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (local_28->VirtualShadowMapPerLightCacheEntry).Object;
  pTStack_18 = (local_28->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.
               ReferenceController;
  (local_28->VirtualShadowMapPerLightCacheEntry).Object = pFVar6;
  (local_28->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  if (param_2) {
    pFVar4 = *(ForElementType<FProjectedShadowInfo_*> **)((longlong)this + 0x28);
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    iVar9 = *(int *)&pFVar4[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                        (0x808,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar9 + 1;
    pFVar4->Data[iVar9] = local_28;
  }
  return local_28;
}

// operator() @ 14560c940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  FProjectedShadowInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  TArrayView<FViewInfo_const_,int> local_38;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1212,"AddNaniteRenderViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
               ,0x4bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1212);
  }
  puVar7 = *(undefined8 **)((longlong)this + 0x2b8);
  iVar3 = *(int *)((longlong)this + 0x2c0);
  bVar2 = *(bool *)((longlong)this + 0x288);
  puVar1 = puVar7 + iVar3;
  while( true ) {
    if (*(int *)((longlong)this + 0x2c0) != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FProjectedShadowInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar7 == puVar1) break;
    pFVar4 = (FProjectedShadowInfo *)*puVar7;
    if ((pFVar4->bShouldRenderVSM == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shadow->bShouldRenderVSM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                           ,0x4c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_38.DataPtr = *(FViewInfo **)((longlong)this + 0x2a0);
    local_38._8_8_ = *(undefined8 *)((longlong)this + 0x2a8);
    FVirtualShadowMapArray::AddRenderViews
              (this,pFVar4,&local_38,*(float *)((longlong)this + 0x2e0),bVar2,bVar2,param_1);
    puVar7 = puVar7 + 1;
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 14560cab0

void __thiscall `FShadowSceneRenderer::PreInitViews'::__l2::<lambda_1>::operator()(void *this)

{
  FHeapPair *pFVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FVirtualShadowMapPerLightCacheEntry *pFVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res8 [8];
  int local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FHeapPair local_c8;
  int local_b0;
  FVirtualShadowMapPerLightCacheEntry *local_a8;
  FSharedReferencer<1> local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  lVar15 = **(longlong **)(*(longlong *)this + 0x78);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iVar11 = (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x4e8))();
  local_98 = (longlong *)(lVar15 + 0x1d8);
  iStack_90 = 0;
  iVar18 = *(int *)(lVar15 + 0x200);
  local_88 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x1e8);
  uStack_8c = 1;
  local_78 = iStack_90;
  iStack_7c = 0;
  if (iVar18 != 0) {
    pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x1f8);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x1f8) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = local_88;
    }
    uVar12 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    local_78 = 0;
    iStack_90 = 0;
    while (uVar12 == 0) {
      lVar15 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14560cb7d;
      uVar12 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_8c = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_8c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar18 < iStack_7c) {
      iStack_7c = iVar18;
    }
  }
LAB_14560cb7d:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar18) {
    do {
      pTVar3 = *(TReferenceControllerBase<1> **)
                (*local_68 + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      pFVar4 = *(FVirtualShadowMapPerLightCacheEntry **)
                (*local_68 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar4->bIsDistantLight != false) && (-1 < pFVar4->RenderedFrameNumber)) {
        if ((pFVar4 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar18 = iVar11 - pFVar4->ScheduledFrameNumber;
        if ((int)(uint)local_d0 < *(int *)((longlong)this + 8)) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar12 = (uint)local_d0;
          local_c8.Age = iVar18;
          local_c8.CacheEntry.Object = pFVar4;
          local_c8.CacheEntry.SharedReferenceCount.ReferenceController = pTVar3;
          if ((local_d8.Data <= &local_c8) &&
             (&local_c8 < (FHeapPair *)(local_d8.Data + (longlong)(int)local_d0._4_4_ * 0x18))) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar12 = (uint)local_d0;
          }
          if (uVar12 == local_d0._4_4_) {
            uVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          lVar15 = (longlong)(int)uVar12;
          local_d0 = CONCAT44(local_d0._4_4_,uVar12 + 1);
          *(int *)&local_d8.Data[lVar15 * 0x18].field_0x0 = local_c8.Age;
          *(FVirtualShadowMapPerLightCacheEntry **)(local_d8.Data + lVar15 * 0x18 + 8) =
               local_c8.CacheEntry.Object;
          *(TReferenceControllerBase<1> **)(local_d8.Data + lVar15 * 0x18 + 0x10) =
               local_c8.CacheEntry.SharedReferenceCount.ReferenceController;
          local_c8.CacheEntry.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_c8.CacheEntry.Object = (FVirtualShadowMapPerLightCacheEntry *)0x0;
          while (0 < (int)uVar12) {
            uVar13 = (int)(uVar12 - 1) / 2;
            uVar16 = (ulonglong)uVar12;
            pFVar17 = local_d8.Data + (longlong)(int)uVar13 * 0x18;
            if (*(int *)&pFVar17->field_0x0 <= *(int *)&local_d8.Data[uVar16 * 0x18].field_0x0)
            break;
            uVar2 = *(undefined8 *)(local_d8.Data + uVar16 * 0x18 + 0x10);
            uVar7 = *(undefined8 *)(pFVar17 + 8);
            uVar8 = *(undefined8 *)(local_d8.Data + uVar16 * 0x18);
            uVar9 = *(undefined8 *)(local_d8.Data + uVar16 * 0x18 + 8);
            *(undefined8 *)(local_d8.Data + uVar16 * 0x18) = *(undefined8 *)pFVar17;
            *(undefined8 *)(local_d8.Data + uVar16 * 0x18 + 8) = uVar7;
            *(undefined8 *)(local_d8.Data + uVar16 * 0x18 + 0x10) = *(undefined8 *)(pFVar17 + 0x10);
            *(undefined8 *)pFVar17 = uVar8;
            *(undefined8 *)(pFVar17 + 8) = uVar9;
            *(undefined8 *)(pFVar17 + 0x10) = uVar2;
            uVar12 = uVar13;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          if ((int)(uint)local_d0 < 1) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)local_d8.Data < iVar18) {
            uVar12 = (uint)local_d0;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              uVar12 = (uint)local_d0;
            }
            local_b0 = iVar18;
            local_a8 = pFVar4;
            local_a0.ReferenceController = pTVar3;
            if (((int)uVar12 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(int *)local_d8.Data = iVar18;
            if (local_d8.Data + 8 != (FScriptContainerElement *)&local_a8) {
              *(FVirtualShadowMapPerLightCacheEntry **)(local_d8.Data + 8) = pFVar4;
              local_a8 = (FVirtualShadowMapPerLightCacheEntry *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(local_d8.Data + 0x10),&local_a0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0.ReferenceController);
            iVar18 = 0;
            if (1 < (int)(uint)local_d0) {
              do {
                iVar6 = iVar18 * 2;
                iVar14 = iVar6 + 1;
                if (iVar6 + 2 < (int)(uint)local_d0) {
                  if (*(int *)&local_d8.Data[(longlong)iVar14 * 0x18].field_0x0 <
                      *(int *)&local_d8.Data[((longlong)iVar6 + 2) * 0x18].field_0x0) {
                    iVar14 = iVar6;
                  }
                  iVar14 = iVar14 + 1;
                }
                lVar15 = (longlong)iVar14;
                pFVar17 = local_d8.Data + (longlong)iVar18 * 0x18;
                if (*(int *)&pFVar17->field_0x0 <= *(int *)&local_d8.Data[lVar15 * 0x18].field_0x0)
                break;
                uVar7 = *(undefined8 *)(local_d8.Data + lVar15 * 0x18 + 8);
                uVar2 = *(undefined8 *)(pFVar17 + 0x10);
                uVar8 = *(undefined8 *)pFVar17;
                uVar9 = *(undefined8 *)(pFVar17 + 8);
                *(undefined8 *)pFVar17 = *(undefined8 *)(local_d8.Data + lVar15 * 0x18);
                *(undefined8 *)(pFVar17 + 8) = uVar7;
                *(undefined8 *)(pFVar17 + 0x10) =
                     *(undefined8 *)(local_d8.Data + lVar15 * 0x18 + 0x10);
                *(undefined8 *)(local_d8.Data + lVar15 * 0x18) = uVar8;
                *(undefined8 *)(local_d8.Data + lVar15 * 0x18 + 8) = uVar9;
                *(undefined8 *)(local_d8.Data + lVar15 * 0x18 + 0x10) = uVar2;
                iVar18 = iVar14;
              } while (iVar14 * 2 + 1 < (int)(uint)local_d0);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  iVar18 = (uint)local_d0;
  pFVar17 = local_d8.Data + 8;
  pFVar1 = (FHeapPair *)(local_d8.Data + (longlong)(int)(uint)local_d0 * 0x18);
  while( true ) {
    if ((uint)local_d0 != iVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`anonymous_namespace'::FHeapPair,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((FHeapPair *)(pFVar17 + -8) == pFVar1) break;
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar15 = *(longlong *)pFVar17;
    pFVar17 = pFVar17 + 0x18;
    *(int *)(lVar15 + 4) = iVar11;
  }
  DestructItems<_anonymous_namespace_::FHeapPair,int>((FHeapPair *)local_d8.Data,(uint)local_d0);
  if ((FHeapPair *)local_d8.Data != (FHeapPair *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// operator() @ 14560df40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FShadowSceneRenderer::RenderVirtualShadowMaps'::__l5::<lambda_1>::operator()(void *this)

{
  FName FVar1;
  FNaniteVisibilityResults *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalRasterBins> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleRasterBins> FVar7;
  FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalShadingBins> FVar8;
  FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleShadingBins> FVar9;
  uchar auVar10 [8];
  uchar auVar11 [8];
  uint uVar12;
  uint uVar13;
  FName local_res8;
  FStatMessage local_38;
  
  pFVar2 = Nanite::GetVisibilityResults(*(FNaniteVisibilityQuery **)this);
  uVar13 = pFVar2->TotalRasterBins;
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  auVar10[0] = (char)uVar13;
  auVar10[1] = (char)(uVar13 >> 8);
  auVar10[2] = (char)(uVar13 >> 0x10);
  auVar10[3] = (char)(uVar13 >> 0x18);
  if (pFVar2->bRasterTestValid != false) {
    uVar13 = pFVar2->VisibleRasterBins;
  }
  uVar12 = pFVar2->TotalShadingBins;
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11[0] = (char)uVar12;
  auVar11[1] = (char)(uVar12 >> 8);
  auVar11[2] = (char)(uVar12 >> 0x10);
  auVar11[3] = (char)(uVar12 >> 0x18);
  if (pFVar2->bShadingTestValid != false) {
    uVar12 = pFVar2->VisibleShadingBins;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar4 = StatPtr_STAT_VSMNaniteBasePassTotalRasterBins;
    if (StatPtr_STAT_VSMNaniteBasePassTotalRasterBins ==
        (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalRasterBins>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_VSMNaniteBasePassTotalRasterBins");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalRasterBins>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VSMNaniteBasePassTotalRasterBins
                         ,*pFVar3,L"VSM Total Raster Bins","STATGROUP_ShadowRendering",
                         "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Set(&local_res8,(long64)auVar10);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar7 = StatPtr_STAT_VSMNaniteBasePassVisibleRasterBins;
      if (StatPtr_STAT_VSMNaniteBasePassVisibleRasterBins ==
          (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleRasterBins>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_VSMNaniteBasePassVisibleRasterBins");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleRasterBins>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_VSMNaniteBasePassVisibleRasterBins,*pFVar3,
                           L"VSM Visible Raster Bins","STATGROUP_ShadowRendering","STATCAT_Advanced"
                           ,L"Shadow Rendering",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar5 == (FThreadStats *)0x0) {
          pFVar6 = FThreadStatsPool::Get();
          pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
        }
        local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = (char)uVar13;
        local_38.StatData.Pad[1] = (char)(uVar13 >> 8);
        local_38.StatData.Pad[2] = (char)(uVar13 >> 0x10);
        local_38.StatData.Pad[3] = (char)(uVar13 >> 0x18);
        local_res8 = FVar1;
        local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar5,&local_38);
        FStatsTrace::Set(&local_res8,(ulonglong)uVar13);
        if (pFVar5->ScopeCount == 0) {
          FThreadStats::Flush(pFVar5,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar5,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar8 = StatPtr_STAT_VSMNaniteBasePassTotalShadingBins;
        if (StatPtr_STAT_VSMNaniteBasePassTotalShadingBins ==
            (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalShadingBins>)0x0) {
          pFVar3 = ::FName::FName(&local_res8,"STAT_VSMNaniteBasePassTotalShadingBins");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassTotalShadingBins>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_VSMNaniteBasePassTotalShadingBins,*pFVar3,
                             L"VSM Total Shading Bins","STATGROUP_ShadowRendering",
                             "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,false,false,
                             MCR_Invalid);
        }
        FVar1 = *(FName *)FVar8;
        local_res8 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar5 == (FThreadStats *)0x0) {
            pFVar6 = FThreadStatsPool::Get();
            pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
          }
          local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
          local_res8 = FVar1;
          local_38.StatData.Pad = auVar11;
          local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar5,&local_38);
          FStatsTrace::Set(&local_res8,(long64)auVar11);
          if (pFVar5->ScopeCount == 0) {
            FThreadStats::Flush(pFVar5,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar5,false,false);
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar9 = StatPtr_STAT_VSMNaniteBasePassVisibleShadingBins;
          if (StatPtr_STAT_VSMNaniteBasePassVisibleShadingBins ==
              (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleShadingBins>)0x0) {
            pFVar3 = ::FName::FName(&local_res8,"STAT_VSMNaniteBasePassVisibleShadingBins");
            FVar9 = (FThreadSafeStaticStat<FStat_STAT_VSMNaniteBasePassVisibleShadingBins>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_VSMNaniteBasePassVisibleShadingBins,*pFVar3,
                               L"VSM Visible Shading Bins","STATGROUP_ShadowRendering",
                               "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,false,false
                               ,MCR_Invalid);
          }
          FVar1 = *(FName *)FVar9;
          if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            local_res8 = FVar1;
            pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar5 == (FThreadStats *)0x0) {
              pFVar6 = FThreadStatsPool::Get();
              pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
            }
            local_38.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
            local_38.StatData.Pad[4] = '\0';
            local_38.StatData.Pad[5] = '\0';
            local_38.StatData.Pad[6] = '\0';
            local_38.StatData.Pad[7] = '\0';
            local_38.StatData.Pad[0] = (char)uVar12;
            local_38.StatData.Pad[1] = (char)(uVar12 >> 8);
            local_38.StatData.Pad[2] = (char)(uVar12 >> 0x10);
            local_38.StatData.Pad[3] = (char)(uVar12 >> 0x18);
            local_res8 = FVar1;
            local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar5,&local_38);
            FStatsTrace::Set(&local_res8,(ulonglong)uVar12);
            if (pFVar5->ScopeCount == 0) {
              FThreadStats::Flush(pFVar5,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar5,false,false);
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14560ebd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
`FShadowSceneRenderer::CreateNaniteRenderPasses'::__l12::<lambda_1>::operator()
          (void *this,FNaniteVirtualShadowMapRenderPass *param_1)

{
  TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  int *piVar2;
  longlong lVar3;
  FProjectedShadowInfo **ppFVar4;
  ForElementType<UE::HLSL::FInstanceCullingGroupWork> *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  FRDGBuffer *pFVar10;
  undefined8 *puVar11;
  ForElementType<FNaniteVirtualShadowMapRenderPass> *pFVar12;
  undefined8 *local_48 [2];
  undefined8 local_38 [6];
  
  if (param_1->MaxCullingViews != 0) {
    if ((param_1->TotalPrimaryViews == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NaniteRenderPass.TotalPrimaryViews > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                           ,0x4e8,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1->SceneInstanceCullingQuery == (FSceneInstanceCullingQuery *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NaniteRenderPass.SceneInstanceCullingQuery",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                           ,0x4e9,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = (undefined8 *)0x0;
    if (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) != 0) {
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExplicitChunkDrawInstanceIdsRDG",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                             ,0x4ed,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)((longlong)this + 0x18);
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)(lVar3 + 0x18),0x20,0x10);
      if (puVar9 == (undefined8 *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        *puVar9 = &___7__TObject_UFExplicitChunkDrawInfo_Nanite___FRDGAllocator__6B_;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar11 = puVar9;
      }
      local_48[0] = puVar11;
      if (((*(undefined8 ***)(lVar3 + 0x40) <= local_48) &&
          (local_48 < *(undefined8 ***)(lVar3 + 0x40) + *(int *)(lVar3 + 0x4c))) &&
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
      iVar8 = *(int *)(lVar3 + 0x48);
      if (iVar8 == *(int *)(lVar3 + 0x4c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar3 + 0x40),(int *)(lVar3 + 0x4c));
      }
      *(int *)(lVar3 + 0x48) = iVar8 + 1;
      *(undefined8 **)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar8 * 8) = local_48[0];
      ((FExplicitChunkDrawInfo *)(puVar11 + 1))->NumChunks =
           *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
      pFVar10 = CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                          (*(FRDGBuilder **)((longlong)this + 0x18),
                           L"Shadow.Virtual.ExplicitChunkDraws",
                           *(TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                             **)((longlong)this + 0x10));
      puVar11[2] = pFVar10;
      puVar11[3] = *(undefined8 *)((longlong)this + 8);
      param_1->ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)(puVar11 + 1);
    }
    lVar3 = *(longlong *)this;
    pFVar12 = (ForElementType<FNaniteVirtualShadowMapRenderPass> *)(lVar3 + 0x80);
    if (((pFVar12->Data <= param_1) && (param_1 < pFVar12->Data + *(int *)(lVar3 + 0x8c))) &&
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
    iVar8 = *(int *)(lVar3 + 0x88);
    if (iVar8 == *(int *)(lVar3 + 0x8c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteVirtualShadowMapRenderPass>_>
                        (0x830,pFVar12,(int *)(lVar3 + 0x8c));
    }
    *(int *)(lVar3 + 0x88) = iVar8 + 1;
    FNaniteVirtualShadowMapRenderPass::FNaniteVirtualShadowMapRenderPass
              (pFVar12->Data + iVar8,param_1);
    param_1->SceneInstanceCullingQuery = (FSceneInstanceCullingQuery *)0x0;
    pTVar1 = &param_1->Shadows;
    if (pTVar1 != (TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *)local_38) {
      ppFVar4 = (pTVar1->AllocatorInstance).Data;
      if (ppFVar4 != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar4);
      }
      (pTVar1->AllocatorInstance).Data = (FProjectedShadowInfo **)0x0;
      (param_1->Shadows).ArrayNum = 0;
      (param_1->Shadows).ArrayMax = 0;
    }
    param_1->TotalPrimaryViews = 0;
    param_1->MaxCullingViews = 0;
    param_1->VirtualShadowMapViews = (FPackedViewArray *)0x0;
    param_1->ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)0x0;
    pFVar5 = *(ForElementType<UE::HLSL::FInstanceCullingGroupWork> **)((longlong)this + 0x10);
    iVar8 = *(int *)((longlong)&pFVar5[1].Data + 4);
    piVar2 = (int *)((longlong)&pFVar5[1].Data + 4);
    *(undefined4 *)&pFVar5[1].Data = 0;
    if (iVar8 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_>
                (0xc,4,0,iVar8,pFVar5,0,piVar2);
    }
  }
  return;
}

// AddDirectionalLightShadow @ 145611fd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FShadowSceneRenderer::AddDirectionalLightShadow
          (FShadowSceneRenderer *this,FLightSceneInfo *param_1,FViewInfo *param_2,float param_3,
          TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_4)

{
  int *piVar1;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint *_Dst;
  FDeferredShadingSceneRenderer *pFVar4;
  FLightCommonFrameSetup *pFVar5;
  FDirectionalLightShadowFrameSetup *pFVar6;
  FPrimitiveSceneInfo *pFVar7;
  FPrimitiveSceneProxy *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  FLightSceneInfo *pFVar17;
  bool bVar18;
  ELightOcclusionType EVar19;
  int iVar20;
  int iVar21;
  FViewInfo *pFVar22;
  FVirtualShadowMapClipmapConfig *pFVar23;
  FVirtualShadowMapClipmap *pFVar24;
  FProjectedShadowInfo *pFVar25;
  FScriptContainerElement *pFVar26;
  TIntPoint<int> TVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  int iVar34;
  TSharedPtr<FVirtualShadowMapClipmap,1> *pTVar35;
  TIntPoint<int> TVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  FViewInfo *pFVar39;
  longlong lVar40;
  float fVar41;
  undefined1 local_res8 [8];
  FLightSceneInfo *local_res10;
  FViewInfo *local_res18;
  float local_res20 [2];
  TSharedPtr<FVirtualShadowMapClipmap,1> local_168;
  TSharedPtr<FVirtualShadowMapClipmap,1> *local_158;
  FScriptContainerElement *local_150;
  TSharedPtr<FVirtualShadowMapClipmap,1> local_148;
  FVirtualShadowMapClipmapConfig local_138;
  FShadowScene *local_118;
  FViewInfo *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FShadowSceneRenderer *local_f8;
  FLightSceneInfo *local_f0;
  FViewInfo *local_e8;
  float *local_e0;
  longlong local_d8;
  TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_d0;
  FVirtualShadowMapClipmap *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TArrayView<FViewInfo,int> local_b8;
  FVirtualShadowMapClipmapConfig local_a8;
  FVirtualShadowMapClipmapConfig local_88;
  FVirtualShadowMapClipmapConfig local_68;
  
  uVar33 = param_1->Id;
  lVar38 = (longlong)(int)uVar33;
  pFVar4 = this->SceneRenderer;
  uVar30 = param_2->SceneRendererPrimaryViewId;
  uVar31 = 0;
  if ((int)uVar33 < *(int *)&pFVar4->field_0x638) {
    uVar31 = ~uVar33 >> 0x1f;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  if ((uVar31 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar40 = lVar38 * 0x60 + *(longlong *)&pFVar4->field_0x630;
  uVar31 = 0;
  if ((int)uVar33 < (this->CommonSetups).ArrayNum) {
    uVar31 = ~uVar33 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->CommonSetups).AllocatorInstance.Data;
  if ((pFVar5[lVar38].bIsDirectional == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("CommonSetup.bIsDirectional",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x220,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar39 = local_res18;
  local_e0 = local_res20;
  pFVar5[lVar38].bHasVirtualShadowMap = 1;
  local_d0 = param_4;
  local_f0 = local_res10;
  local_e8 = local_res18;
  local_f8 = this;
  local_d8 = lVar40;
  pFVar22 = FViewInfo::GetPrimaryView(local_res18);
  if ((pFVar22 != pFVar39) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("View.GetPrimaryView() == &View",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x238,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar29 = pFVar5[lVar38].SetupIndex + uVar30;
  uVar31 = 0;
  if ((int)uVar29 < (this->DirectionalLights).ArrayNum) {
    uVar31 = ~uVar29 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->DirectionalLights).AllocatorInstance.Data;
  if ((pFVar6[(int)uVar29].LightId != uVar33) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Setup.LightId == LightId",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x23a,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((pFVar6[(int)uVar29].ViewMask >> (uVar30 & 0x1f) & 1) == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Setup.ViewMask & (1u << ViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x23b,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar23 = FVirtualShadowMapClipmapConfig::GetGlobal(&local_88);
  local_a8.FirstLevel = pFVar23->FirstLevel;
  local_a8.LastLevel = pFVar23->LastLevel;
  local_a8.FirstCoarseLevel = pFVar23->FirstCoarseLevel;
  local_a8.LastCoarseLevel = pFVar23->LastCoarseLevel;
  local_a8.ShadowTypeId = pFVar23->ShadowTypeId;
  local_a8.ResolutionLodBias = pFVar23->ResolutionLodBias;
  local_a8.ResolutionLodBiasMoving = pFVar23->ResolutionLodBiasMoving;
  local_a8.bForceInvalidate = pFVar23->bForceInvalidate;
  local_a8.bIsFirstPersonShadow = pFVar23->bIsFirstPersonShadow;
  local_a8.bCullDynamicTightly = pFVar23->bCullDynamicTightly;
  local_a8.bUseReceiverMask = pFVar23->bUseReceiverMask;
  pFVar24 = ::operator_new(0x1b90);
  pFVar17 = local_res10;
  if (pFVar24 == (FVirtualShadowMapClipmap *)0x0) {
    pFVar24 = (FVirtualShadowMapClipmap *)0x0;
    pFVar39 = local_res18;
  }
  else {
    fVar41 = FShadowScene::GetLightMobilityFactor(this->ShadowScene,local_res10->Id);
    pFVar39 = local_res18;
    TVar27.field0_0x0._s_0.Y =
         *(int *)((longlong)&(local_res18->ViewRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(local_res18->ViewRect).field0_0x0 + 4);
    TVar27.field0_0x0._s_0.X =
         *(int *)((longlong)&(local_res18->ViewRect).field0_0x0 + 8) -
         *(int *)&(local_res18->ViewRect).field0_0x0;
    pFVar24 = FVirtualShadowMapClipmap::FVirtualShadowMapClipmap
                        (pFVar24,this->VirtualShadowMapArray,pFVar17,
                         (FViewMatrices *)&local_res18->_padding_,TVar27,local_res18,fVar41,
                         &local_a8);
  }
  local_168.Object = pFVar24;
  local_168.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_168.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_168.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFVirtualShadowMapClipmap__U__DefaultDeleter_VFVirtualShadowMapClipmap___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_168.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar24;
  }
  if (((*(TSharedPtr<FVirtualShadowMapClipmap,1> **)(lVar40 + 0x50) <= &local_168) &&
      (&local_168 <
       *(TSharedPtr<FVirtualShadowMapClipmap,1> **)(lVar40 + 0x50) + *(int *)(lVar40 + 0x5c))) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar20 = *(int *)(lVar40 + 0x58);
  if (iVar20 == *(int *)(lVar40 + 0x5c)) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_>_>
                       (0x810,(ForElementType<TSharedPtr<FVirtualShadowMapClipmap,1>_> *)
                              (lVar40 + 0x50),(int *)(lVar40 + 0x5c));
  }
  *(int *)(lVar40 + 0x58) = iVar20 + 1;
  lVar38 = *(longlong *)(lVar40 + 0x50);
  *(FVirtualShadowMapClipmap **)(lVar38 + (longlong)iVar20 * 0x10) = local_168.Object;
  *(TReferenceControllerBase<1> **)(lVar38 + 8 + (longlong)iVar20 * 0x10) =
       local_168.SharedReferenceCount.ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = `FShadowSceneRenderer::AddDirectionalLightShadow'::__l2::<lambda_1>::operator()
                      (&local_f8,&local_168,true);
  pFVar6[(int)uVar29].ClipmapInfos.Elements[0].ProjectedShadowInfo = pFVar25;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = pFVar6[(int)uVar29].ClipmapInfos.Elements[0].Clipmap.Object;
  pTStack_c0 = pFVar6[(int)uVar29].ClipmapInfos.Elements[0].Clipmap.SharedReferenceCount.
               ReferenceController;
  pFVar6[(int)uVar29].ClipmapInfos.Elements[0].Clipmap.Object = local_168.Object;
  pFVar6[(int)uVar29].ClipmapInfos.Elements[0].Clipmap.SharedReferenceCount.ReferenceController =
       local_168.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  if ((this->ShadowScene->FirstPersonWorldSpacePrimitives).ArrayNum != 0) {
    pTVar35 = &pFVar6[(int)uVar29].ClipmapInfos.Elements[1].Clipmap;
    local_158 = pTVar35;
    pFVar23 = FVirtualShadowMapClipmapConfig::GetGlobal(&local_68);
    pTVar15 = CVarVirtualShadowMapFirstPersonClipmapFirstLevel.Ref;
    local_138.FirstLevel = pFVar23->FirstLevel;
    local_138.LastLevel = pFVar23->LastLevel;
    uVar10 = pFVar23->ResolutionLodBias;
    uVar11 = pFVar23->ResolutionLodBiasMoving;
    uVar12 = pFVar23->bIsFirstPersonShadow;
    uVar13 = pFVar23->bCullDynamicTightly;
    uVar14 = pFVar23->bUseReceiverMask;
    local_138.bUseReceiverMask = (bool)uVar14;
    local_138.bCullDynamicTightly = (bool)uVar13;
    local_138.bIsFirstPersonShadow = (bool)uVar12;
    local_138.FirstCoarseLevel = -1;
    local_138.LastCoarseLevel = -1;
    local_138.ResolutionLodBias = (float)uVar10;
    local_138.ShadowTypeId = 1;
    local_138.bForceInvalidate = true;
    local_138.ResolutionLodBiasMoving = (float)uVar11;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar16 = CVarVirtualShadowMapFirstPersonClipmapLastLevel.Ref;
    local_138.FirstLevel = pTVar15->ShadowedValue[1];
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_138.LastLevel = pTVar16->ShadowedValue[1];
    local_138.bIsFirstPersonShadow = true;
    pFVar24 = ::operator_new(0x1b90);
    if (pFVar24 == (FVirtualShadowMapClipmap *)0x0) {
      pFVar24 = (FVirtualShadowMapClipmap *)0x0;
    }
    else {
      TVar36.field0_0x0._s_0.Y =
           *(int *)((longlong)&(pFVar39->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar39->ViewRect).field0_0x0 + 4);
      TVar36.field0_0x0._s_0.X =
           *(int *)((longlong)&(pFVar39->ViewRect).field0_0x0 + 8) -
           *(int *)&(pFVar39->ViewRect).field0_0x0;
      pFVar24 = FVirtualShadowMapClipmap::FVirtualShadowMapClipmap
                          (pFVar24,this->VirtualShadowMapArray,pFVar17,
                           (FViewMatrices *)&pFVar39->_padding_,TVar36,pFVar39,__real_3f800000,
                           &local_138);
    }
    local_148.Object = pFVar24;
    local_148.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_148.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFVirtualShadowMapClipmap__U__DefaultDeleter_VFVirtualShadowMapClipmap___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_148.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_148.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar24;
    }
    if (pTVar35 != &local_148) {
      pTVar35->Object = pFVar24;
      local_148.Object = (FVirtualShadowMapClipmap *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar35->SharedReferenceCount,&local_148.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    pFVar24 = (FVirtualShadowMapClipmap *)
              `FShadowSceneRenderer::AddDirectionalLightShadow'::__l2::<lambda_1>::operator()
                        (&local_f8,pTVar35,false);
    pTVar35[1].Object = pFVar24;
    if ((((this->ExplicitChunkDrawInstanceIds).ArrayNum & 0x3f) != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ExplicitChunkDrawInstanceIds.Num() % (64u)) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                            ,0x26d,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(uint *)(((pTVar35[1].Object)->LevelData).AllocatorInstance.InlineData + 0xa18) =
         (uint)(this->ExplicitChunkDrawInstanceIds).ArrayNum >> 6;
    local_118 = this->ShadowScene;
    uVar33 = (local_118->FirstPersonWorldSpacePrimitives).ArrayNum;
    uVar28 = (ulonglong)(int)uVar33;
    pFVar37 = (local_118->FirstPersonWorldSpacePrimitives).AllocatorInstance.Data;
    local_150 = pFVar37 + uVar28 * 8;
    pFVar32 = local_150;
    while( true ) {
      if ((local_118->FirstPersonWorldSpacePrimitives).ArrayNum != (int)uVar28) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar37 == pFVar32) break;
      pFVar7 = *(FPrimitiveSceneInfo **)pFVar37;
      iVar20 = (int)pFVar39->_padding_;
      pFVar8 = pFVar7->Proxy;
      if (iVar20 == 0) {
LAB_145612768:
        pFVar37 = pFVar37 + 8;
        uVar28 = (ulonglong)uVar33;
      }
      else {
        pFVar26 = (pFVar8->Owners).AllocatorInstance.Data;
        pFVar3 = pFVar26 + (longlong)(pFVar8->Owners).ArrayNum * 4;
        for (; pFVar26 != pFVar3; pFVar26 = pFVar26 + 4) {
          if (*(int *)pFVar26 == iVar20) {
            bVar18 = true;
            goto LAB_145612667;
          }
        }
        bVar18 = false;
LAB_145612667:
        if (!bVar18) goto LAB_145612768;
        if (pFVar8->bIsNaniteMesh != '\0') {
          iVar20 = pFVar7->InstanceSceneDataOffset;
          iVar34 = 0;
          pTVar35 = local_158;
          pFVar39 = local_res18;
          if (0 < pFVar7->NumInstanceSceneDataEntries) {
            do {
              iVar21 = (this->ExplicitChunkDrawInstanceIds).ArrayNum;
              if (iVar21 == (this->ExplicitChunkDrawInstanceIds).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                   (0x404,&(this->ExplicitChunkDrawInstanceIds).AllocatorInstance,
                                    &(this->ExplicitChunkDrawInstanceIds).ArrayMax);
              }
              (this->ExplicitChunkDrawInstanceIds).ArrayNum = iVar21 + 1;
              uVar30 = iVar34 + iVar20;
              iVar34 = iVar34 + 1;
              (this->ExplicitChunkDrawInstanceIds).AllocatorInstance.Data[iVar21] = uVar30;
              pFVar32 = local_150;
              pTVar35 = local_158;
              pFVar39 = local_res18;
            } while (iVar34 < pFVar7->NumInstanceSceneDataEntries);
          }
          goto LAB_145612768;
        }
        pFVar24 = pTVar35[1].Object;
        local_108 = *(FViewInfo **)&this->SceneRenderer->field_0x10;
        iVar20 = *(int *)&this->SceneRenderer->field_0x18;
        if ((iVar20 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_b8._12_4_ = uStack_fc;
        local_b8.ArrayNum = iVar20;
        local_b8.DataPtr = local_108;
        iStack_100 = iVar20;
        FProjectedShadowInfo::AddSubjectPrimitive
                  ((FProjectedShadowInfo *)pFVar24,pFVar7,&local_b8,false,true);
        pFVar37 = pFVar37 + 8;
        uVar28 = (ulonglong)uVar33;
        pFVar32 = local_150;
        pTVar35 = local_158;
      }
    }
    piVar1 = &(this->ExplicitChunkDrawInstanceIds).ArrayNum;
    uVar33 = *piVar1;
    uVar29 = uVar33 & 0x3f;
    uVar30 = ((int)(uVar33 + 0x3f) >> 0x1f & 0x3fU) + uVar33 + 0x3f;
    uVar31 = uVar30 & 0xffffffc0;
    if ((0 < (int)uVar33) && (uVar29 == 0)) {
      uVar29 = 0x40;
    }
    *(uint *)(((pTVar35[1].Object)->LevelData).AllocatorInstance.InlineData + 0xa20) = uVar29;
    pTVar2 = &this->ExplicitChunkDrawInstanceIds;
    *(uint *)(((pTVar35[1].Object)->LevelData).AllocatorInstance.InlineData + 0xa1c) = uVar30 >> 6;
    iVar20 = (this->ExplicitChunkDrawInstanceIds).ArrayNum;
    if (iVar20 < (int)uVar31) {
      iVar34 = UE::Core::Private::
               ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (4,4,uVar31 - iVar20,&pTVar2->AllocatorInstance,piVar1,
                          &(this->ExplicitChunkDrawInstanceIds).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + iVar34,0,(longlong)(int)(uVar31 - iVar20) << 2);
    }
    else {
      if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
      }
      if ((int)uVar31 < iVar20) {
        uVar33 = iVar20 - uVar31;
        if (((int)(uVar33 | uVar31) < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar33 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (int)uVar31;
          iVar20 = ((this->ExplicitChunkDrawInstanceIds).ArrayNum - uVar33) - uVar31;
          if (iVar20 != 0) {
            memmove(_Dst,_Dst + (int)uVar33,(longlong)iVar20 << 2);
          }
          piVar1 = &(this->ExplicitChunkDrawInstanceIds).ArrayNum;
          *piVar1 = *piVar1 - uVar33;
          UE::Core::Private::
          ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                    (4,4,&pTVar2->AllocatorInstance,(this->ExplicitChunkDrawInstanceIds).ArrayNum,
                     &(this->ExplicitChunkDrawInstanceIds).ArrayMax);
        }
      }
    }
  }
  EVar19 = GetLightOcclusionType
                     (local_res10->Proxy,(FSceneViewFamily *)&this->SceneRenderer->field_0xb8);
  if (EVar19 == MegaLightsVSM) {
    this->bNeedMegaLightsProjection = true;
  }
  return;
}

// AddLocalLightShadow @ 145612a60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> * __thiscall
FShadowSceneRenderer::AddLocalLightShadow
          (FShadowSceneRenderer *this,
          TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *__return_storage_ptr__,
          FWholeSceneProjectedShadowInitializer *param_1,FProjectedShadowInfo *param_2,
          FLightSceneInfo *param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  FVirtualShadowMapArrayCacheManager *this_00;
  FLightCommonFrameSetup *pFVar3;
  FLightSceneProxy *pFVar4;
  FViewData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FVirtualShadowMapPerLightCacheEntry *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  TConsoleVariableData<float> *pTVar11;
  TConsoleVariableData<float> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ELightOcclusionType EVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *pTVar24;
  longlong lVar25;
  FViewMatrices *pFVar26;
  uint uVar27;
  uint uVar28;
  FLocalLightShadowFrameSetup *pFVar29;
  FVirtualShadowMapCacheEntry *this_01;
  FDeferredShadingSceneRenderer *pFVar30;
  FSceneView *this_02;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  undefined1 extraout_var [12];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  float fVar41;
  ulonglong local_res8;
  bool local_res10;
  TVector<double>_u_0 local_140;
  FVirtualShadowMapPerLightCacheEntry *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FVirtualShadowMapPerLightCacheEntry *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  double local_f8;
  
  uVar23 = param_3->Id;
  this_00 = this->VirtualShadowMapArray->CacheManager;
  uVar27 = 0;
  if ((int)uVar23 < (this->CommonSetups).ArrayNum) {
    uVar27 = ~uVar23 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  pFVar3 = (this->CommonSetups).AllocatorInstance.Data;
  if ((pFVar3[(int)uVar23].bHasVirtualShadowMap != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!CommonSetup.bHasVirtualShadowMap",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x16c,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  pFVar3[(int)uVar23].bHasVirtualShadowMap = 1;
  piVar1 = &(this->LocalLights).ArrayMax;
  pFVar3[(int)uVar23] =
       (FLightCommonFrameSetup)((this->LocalLights).ArrayNum << 2 | (uint)pFVar3[(int)uVar23] & 3);
  iVar18 = (this->LocalLights).ArrayNum;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLocalLightShadowFrameSetup>_>
                       (0x820,&(this->LocalLights).AllocatorInstance,piVar1);
  }
  pFVar29 = (this->LocalLights).AllocatorInstance.Data;
  (this->LocalLights).ArrayNum = iVar18 + 1;
  pFVar29 = pFVar29 + iVar18;
  DefaultConstructItems<FShadowSceneRenderer::FLocalLightShadowFrameSetup,int>(pFVar29,1);
  pFVar29->ProjectedShadowInfo = param_2;
  pFVar29->LightSceneInfo = param_3;
  pFVar4 = param_3->Proxy;
  fVar41 = pFVar4->VSMResolutionLodBias;
  fVar32 = FShadowScene::GetLightMobilityFactor(this->ShadowScene,uVar23);
  pTVar11 = CVarResolutionLodBiasLocalMoving.Ref;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  pTVar12 = CVarResolutionLodBiasLocal.Ref;
  fVar36 = pTVar11->ShadowedValue[1];
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  fVar32 = FVirtualShadowMapArray::InterpolateResolutionBias
                     (pTVar12->ShadowedValue[1],fVar36,fVar32);
  pFVar30 = this->SceneRenderer;
  lVar25 = 0x9e0;
  if (param_2->bOnePassPointLightShadow == 0) {
    lVar25 = 0x160;
  }
  lVar31 = 0;
  uVar19 = 0;
  uVar28 = 0;
  fVar32 = fVar32 + fVar41;
  uVar27 = 8;
  fVar41 = (float)*(double *)((longlong)((param_2->TranslatedWorldToView).M + -3) + lVar25) *
           __real_46800000;
  uVar21 = 8;
  if (0 < *(int *)&pFVar30->field_0x18) {
    lVar25 = 0;
    dVar10 = __real_7fefffffffffffff;
    uVar20 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar28 < *(int *)&pFVar30->field_0x18) {
        uVar19 = ~uVar28 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
        return pTVar24;
      }
      this_02 = (FSceneView *)(*(longlong *)&pFVar30->field_0x10 + lVar31);
      uVar19 = 0;
      if ((int)uVar28 < (this->ViewDatas).ArrayNum) {
        uVar19 = ~uVar28 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
        return pTVar24;
      }
      pFVar5 = (this->ViewDatas).AllocatorInstance.Data;
      pFVar26 = FSceneView::GetShadowViewMatrices(this_02);
      pTVar13 = CVarMarkPixelPagesMipModeLocal.Ref;
      local_f8 = (pFVar26->ViewOrigin).field0_0x0._s_0.Z;
      dVar37 = (pFVar26->ViewOrigin).field0_0x0._s_0.X +
               (param_2->PreShadowTranslation).field0_0x0._s_0.X;
      dVar39 = (pFVar26->ViewOrigin).field0_0x0._s_0.Y +
               (param_2->PreShadowTranslation).field0_0x0._s_0.Y;
      dVar40 = local_f8 + (param_2->PreShadowTranslation).field0_0x0._s_0.Z;
      dVar40 = dVar39 * dVar39 + dVar37 * dVar37 + dVar40 * dVar40;
      uVar19 = uVar28;
      if (dVar10 <= dVar40) {
        uVar19 = uVar20;
        dVar40 = dVar10;
      }
      dVar10 = dVar40;
      bVar14 = IsInParallelRenderingThread();
      if ((!bVar14) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
        return pTVar24;
      }
      iVar18 = pTVar13->ShadowedValue[1];
      fVar36 = this_00->GlobalResolutionLodBias;
      fVar33 = (float)(**(code **)(pFVar4->_padding_ + 0x18))();
      fVar35 = pFVar5[lVar25].ClipToViewSizeBias;
      fVar2 = pFVar5[lVar25].ClipToViewSizeScale;
      dVar40 = (pFVar4->LightToWorld).M[3][0];
      dVar37 = (pFVar4->LightToWorld).M[3][1];
      dVar39 = (pFVar4->LightToWorld).M[3][2];
      pFVar26 = FSceneView::GetShadowViewMatrices(this_02);
      fVar34 = (float)(dVar37 * (pFVar26->ViewMatrix).M[1][2] +
                       dVar40 * (pFVar26->ViewMatrix).M[0][2] +
                       dVar39 * (pFVar26->ViewMatrix).M[2][2] +
                      __real_3ff0000000000000 * (pFVar26->ViewMatrix).M[3][2]) - fVar33;
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar35 = logf(((fVar34 * fVar2 + fVar35) * fVar41) / fVar33);
      auVar38._0_4_ = fVar35 * __real_3fb8aa3b + fVar32 + fVar36;
      auVar38._4_12_ = extraout_var;
      auVar38 = roundps(auVar38,ZEXT416((uint)auVar38._0_4_),1);
      if (auVar38._0_4_ <= 0.0) {
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar38._4_12_;
        auVar38 = auVar9 << 0x20;
      }
      uVar20 = (uint)(longlong)auVar38._0_4_;
      uVar21 = 7;
      if (uVar20 < 7) {
        uVar21 = uVar20;
      }
      uVar21 = (uint)(longlong)(float)uVar21;
      if (iVar18 == 1) {
        uVar21 = uVar21 & 0xfffffffe;
      }
      else if (iVar18 == 2) {
        uVar21 = uVar21 | 1;
      }
      pFVar30 = this->SceneRenderer;
      if (uVar27 < uVar21) {
        uVar21 = uVar27;
      }
      uVar27 = uVar21;
      uVar28 = uVar28 + 1;
      lVar25 = lVar25 + 1;
      lVar31 = lVar31 + 0x2970;
      uVar21 = uVar27;
      uVar20 = uVar19;
    } while ((int)uVar28 < *(int *)&pFVar30->field_0x18);
  }
  bVar14 = this->DistantLightMode == 2;
  local_res10 = true;
  if (this->DistantLightMode == 1) {
    if (this->bUseConservativeDistantLightThreshold == false) {
      fVar41 = powf(__real_40000000,fVar32 - pFVar4->VSMResolutionLodBias);
      pTVar11 = CVarDistantLightForceCacheFootprintFraction.Ref;
      fVar41 = fVar41 * __real_43000000;
      bVar14 = param_4 <= fVar41;
      bVar15 = IsInParallelRenderingThread();
      if ((!bVar15) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
        return pTVar24;
      }
      if (bVar14) {
        fVar36 = pTVar11->ShadowedValue[1];
        if (__real_3f800000 <= pTVar11->ShadowedValue[1]) {
          fVar36 = __real_3f800000;
        }
        local_res10 = false;
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        if (param_4 <= fVar36 * fVar41) goto LAB_1456130e8;
      }
    }
    else {
      bVar14 = uVar21 == 7;
    }
    local_res10 = true;
  }
LAB_1456130e8:
  uVar27 = 1;
  if (param_1->bOnePassPointLightShadow != false) {
    uVar27 = 6;
  }
  FVirtualShadowMapArrayCacheManager::FindCreateLightCacheEntry
            (this_00,__return_storage_ptr__,uVar23,0,uVar27,0);
  pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar7 = __return_storage_ptr__->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = (pFVar29->PerLightCacheEntry).Object;
  pTStack_120 = (pFVar29->PerLightCacheEntry).SharedReferenceCount.ReferenceController;
  (pFVar29->PerLightCacheEntry).Object = pFVar7;
  (pFVar29->PerLightCacheEntry).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  pTVar13 = CVarForceInvalidateLocalVSM.Ref;
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  iVar18 = pTVar13->ShadowedValue[1];
  bVar15 = FVirtualShadowMapArrayCacheManager::IsCacheEnabled(this_00);
  bVar15 = !bVar15;
  if ((1 < iVar18) || ((iVar18 != 0 && ((bVar15 || (bVar14 == false)))))) {
    bVar15 = true;
  }
  if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  pFVar7 = __return_storage_ptr__->Object;
  bVar16 = IsVirtualShadowMapLocalReceiverMaskEnabled();
  fVar41 = (float)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
  local_140._s_0.X = (pFVar4->LightToWorld).M[3][0];
  local_140._s_0.Y = (pFVar4->LightToWorld).M[3][1];
  local_140._s_0.Z = (pFVar4->LightToWorld).M[3][2];
  FVirtualShadowMapPerLightCacheEntry::UpdateLocal
            (pFVar7,(FProjectedShadowInitializer *)param_1,(TVector<double> *)&local_140._s_0,fVar41
             ,bVar14,bVar15,local_res10,bVar16);
  if (bVar14 != false) {
    if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
      return pTVar24;
    }
    iVar18 = __return_storage_ptr__->Object->ScheduledFrameNumber;
    iVar22 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
    if (iVar18 == iVar22) {
      if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
        return pTVar24;
      }
      __return_storage_ptr__->Object->RenderedFrameNumber = -1;
    }
  }
  pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar7 = __return_storage_ptr__->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = (param_2->VirtualShadowMapPerLightCacheEntry).Object;
  pTStack_110 = (param_2->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.
                ReferenceController;
  (param_2->VirtualShadowMapPerLightCacheEntry).Object = pFVar7;
  (param_2->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  if ((__return_storage_ptr__->Object->bIsDistantLight == false) ||
     (__return_storage_ptr__->Object->RenderedFrameNumber < 0)) {
    uVar23 = 0x40000;
  }
  else {
    uVar23 = 0;
  }
  param_2->bShouldRenderVSM = 0;
  *(uint *)&param_2->field_0x990 = *(uint *)&param_2->field_0x990 | uVar23;
  pFVar30 = this->SceneRenderer;
  uVar23 = 0;
  if ((int)uVar19 < *(int *)&pFVar30->field_0x18) {
    uVar23 = ~uVar19 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  lVar25 = *(longlong *)&pFVar30->field_0x10;
  pFVar30 = this->SceneRenderer;
  uVar23 = 0;
  if ((int)uVar19 < *(int *)&pFVar30->field_0x18) {
    uVar23 = ~uVar19 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  uVar23 = FVirtualShadowMapProjectionShaderData::PackCullingViewId
                     (*(int *)((longlong)(int)uVar19 * 0x2970 + 0x28e4 +
                              *(longlong *)&pFVar30->field_0x10),
                      (FPersistentViewId *)(lVar25 + 0x28e8 + (longlong)(int)uVar19 * 0x2970));
  if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  bVar14 = __return_storage_ptr__->Object->bIsUncached;
  if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  pTVar13 = CVarMarkCoarsePagesLocal.Ref;
  bVar15 = __return_storage_ptr__->Object->bUseReceiverMask;
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  uVar19 = -(uint)(bVar14 != false) & 2;
  if (pTVar13->ShadowedValue[1] == 2) {
    uVar19 = 0x40;
    if (bVar14 != false) {
      uVar19 = 0x42;
    }
  }
  pFVar4 = param_2->LightSceneInfo->Proxy;
  if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  uVar28 = 0;
  iVar18 = __return_storage_ptr__->Object->RenderedFrameNumber;
  lVar25 = 0;
  local_res8 = (ulonglong)uVar27;
  do {
    if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
      return pTVar24;
    }
    pFVar7 = __return_storage_ptr__->Object;
    uVar27 = 0;
    if ((int)uVar28 < (pFVar7->ShadowMapEntries).ArrayNum) {
      uVar27 = ~uVar28 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
      return pTVar24;
    }
    this_01 = (FVirtualShadowMapCacheEntry *)
              ((pFVar7->ShadowMapEntries).AllocatorInstance.Data + lVar25);
    if ((__return_storage_ptr__->Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
      return pTVar24;
    }
    FVirtualShadowMapCacheEntry::Update(this_01,__return_storage_ptr__->Object);
    if (iVar18 < 0) {
      UpdateLocalLightProjectionShaderDataMatrices(this,param_2,uVar28,&this_01->ProjectionData);
    }
    (this_01->ProjectionData).LightType = (uint)pFVar4->LightType;
    fVar41 = (float)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4);
    (this_01->ProjectionData).LightSourceRadius = fVar41;
    fVar41 = (float)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4);
    (this_01->ProjectionData).LightRadius = fVar41;
    uVar28 = uVar28 + 1;
    lVar25 = lVar25 + 0x12b0;
    local_res8 = local_res8 - 1;
    (this_01->ProjectionData).TexelDitherScale = pFVar4->VSMTexelDitherScale;
    (this_01->ProjectionData).MinMipLevel = uVar21;
    (this_01->ProjectionData).PackedCullingViewId = uVar23;
    (this_01->ProjectionData).ResolutionLodBias = fVar32;
    (this_01->ProjectionData).Flags = uVar19 | -(uint)(bVar15 != false) & 0x20;
    (this_01->ProjectionData).LightId = pFVar4->LightSceneInfo->Id;
  } while (local_res8 != 0);
  EVar17 = GetLightOcclusionType
                     (param_3->Proxy,(FSceneViewFamily *)&this->SceneRenderer->field_0xb8);
  if (EVar17 == Shadowmap) {
    this->bNeedVSMOnePassProjection = true;
    return __return_storage_ptr__;
  }
  if (EVar17 == MegaLightsVSM) {
    this->bNeedMegaLightsProjection = true;
    return __return_storage_ptr__;
  }
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("false",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                      ,0x213,L"");
  if (bVar14) {
    pcVar8 = (code *)swi(3);
    pTVar24 = (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *)(*pcVar8)();
    return pTVar24;
  }
  return __return_storage_ptr__;
}

// AllocateVirtualShadowMapIds @ 14561c1a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FShadowSceneRenderer::AllocateVirtualShadowMapIds(FShadowSceneRenderer *this)

{
  FVirtualShadowMapClipmap *pFVar1;
  FVirtualShadowMapArray *pFVar2;
  FVirtualShadowMapPerLightCacheEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FLocalLightShadowFrameSetup *pFVar9;
  FLocalLightShadowFrameSetup *pFVar10;
  TStaticArray<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup::FClipmapInfo,2,4294967295>
  *pTVar11;
  FDirectionalLightShadowFrameSetup *pFVar12;
  FDirectionalLightShadowFrameSetup *pFVar13;
  TStaticArray<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup::FClipmapInfo,2,4294967295>
  *pTVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  
  if (this->VirtualShadowMapArray->bEnabled != false) {
    pFVar13 = (this->DirectionalLights).AllocatorInstance.Data;
    local_res18 = (this->DirectionalLights).ArrayNum;
    uVar8 = (ulonglong)(int)local_res18;
    pTVar14 = &pFVar13->ClipmapInfos;
    pFVar12 = pFVar13 + uVar8;
    while( true ) {
      if ((this->DirectionalLights).ArrayNum != (int)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar12) break;
      for (pTVar11 = pTVar14; pTVar11 != pTVar14 + 1;
          pTVar11 = (TStaticArray<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup::FClipmapInfo,2,4294967295>
                     *)(pTVar11->Elements + 1)) {
        pFVar1 = pTVar11->Elements[0].Clipmap.Object;
        if (pFVar1 != (FVirtualShadowMapClipmap *)0x0) {
          pFVar2 = this->VirtualShadowMapArray;
          if (((pFVar1->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = FVirtualShadowMapArray::AllocateDirectional
                            (pFVar2,(((pFVar1->PerLightCacheEntry).Object)->ShadowMapEntries).
                                    ArrayNum);
          if (((pFVar1->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVirtualShadowMapPerLightCacheEntry::UpdateVirtualShadowMapId
                    ((pFVar1->PerLightCacheEntry).Object,iVar6);
        }
      }
      uVar8 = (ulonglong)local_res18;
      pFVar13 = pFVar13 + 1;
      pTVar14 = (TStaticArray<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup::FClipmapInfo,2,4294967295>
                 *)((longlong)(pTVar14 + 1) + 8);
    }
    iVar6 = (this->LocalLights).ArrayNum;
    pFVar9 = (this->LocalLights).AllocatorInstance.Data;
    pFVar10 = pFVar9 + iVar6;
    while( true ) {
      if ((this->LocalLights).ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FShadowSceneRenderer::FLocalLightShadowFrameSetup,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      pFVar2 = this->VirtualShadowMapArray;
      if (pFVar9 == pFVar10) break;
      if (((pFVar9->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pFVar9->PerLightCacheEntry).Object;
      iVar7 = (pFVar3->ShadowMapEntries).ArrayNum;
      if ((pFVar3 == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = FVirtualShadowMapArray::AllocateLocal
                        (pFVar2,((pFVar9->PerLightCacheEntry).Object)->bIsDistantLight,iVar7);
      if (((pFVar9->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVirtualShadowMapPerLightCacheEntry::UpdateVirtualShadowMapId
                ((pFVar9->PerLightCacheEntry).Object,iVar7);
      pFVar9 = pFVar9 + 1;
    }
    if (pFVar2->CacheManager != (FVirtualShadowMapArrayCacheManager *)0x0) {
      FVirtualShadowMapArrayCacheManager::UpdateUnreferencedCacheEntries
                (pFVar2->CacheManager,pFVar2);
    }
  }
  return;
}

// ApplyVirtualShadowMapProjectionForLight @ 14561d470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::ApplyVirtualShadowMapProjectionForLight
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2,
          FLightSceneInfo *param_3,EVirtualShadowMapProjectionInputType param_4,FRDGTexture *param_5
          )

{
  FLightCommonFrameSetup *pFVar1;
  FLightCommonFrameSetup *pFVar2;
  FDirectionalLightShadowFrameSetup *pFVar3;
  FName FVar4;
  FRDGTexture *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FDeferredShadingSceneRenderer *pFVar10;
  FRDGScope *this_00;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar11;
  FViewInfo *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_VSMDirectionalProjectionFull> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionOnePassCopy> FVar17;
  longlong lVar18;
  FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionFull> FVar19;
  uint uVar20;
  FNameEntryId FVar21;
  ulonglong uVar22;
  FViewInfo *this_02;
  FLocalLightShadowFrameSetup *pFVar23;
  uint local_res8 [2];
  TIntPoint<int>_u_0_s_0 local_140;
  TIntPoint<int>_u_0_s_0 TStack_138;
  uint local_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  TRDGEventScopeGuard<FRDGScope_RHI> local_118;
  char local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_b8;
  TIntRect<int>_u_0 local_a8;
  TIntRect<int>_u_0 local_98;
  TIntRect<int>_u_0 local_88;
  FName local_78;
  FName local_70;
  FName local_68 [2];
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if ((this->VirtualShadowMapArray->PhysicalPagePoolRDG != (FRDGTexture *)0x0) &&
     (param_5 != (FRDGTexture *)0x0)) {
    uVar9 = param_3->Id;
    uVar20 = 0;
    if ((int)uVar9 < (this->CommonSetups).ArrayNum) {
      uVar20 = ~uVar9 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (this->CommonSetups).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (int)uVar9;
    if (pFVar2[(int)uVar9].bHasVirtualShadowMap != 0) {
      pFVar10 = this->SceneRenderer;
      local_res8[0] = 0;
      if (0 < *(int *)&pFVar10->field_0x18) {
        do {
          local_108 = '\0';
          if (((1 < *(int *)&pFVar10->field_0x18) &&
              (cVar8 = *(char *)((longlong)&param_1->_padding_ + 6), cVar8 != '\0')) &&
             ((cVar8 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              local_50 = 0;
              uStack_4c = 0;
              ::Desc._12_8_ = ZEXT48(uStack_54);
              ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
              ::Desc._padding_._0_4_ = 0x430;
              ::Desc._padding_._4_4_ = 0;
              ::Desc._padding_ = (longlong)u_View_d;
              ::Desc._padding_ = (longlong)u_View_d;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
              ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
              ::Desc.TraceGpuSpecId = 0;
              ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
              atexit(```FShadowSceneRenderer::ApplyVirtualShadowMapProjectionForLight'::__l18::Desc
                     ::operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                     _dynamic_atexit_destructor_for__Desc__);
              _Init_thread_footer(&::_TSS0);
            }
            local_b8._padding_ = (longlong)local_res8;
            local_b8._Myfirst._Val = &::Desc;
            local_118.State = (FRDGScopeState *)param_1;
            this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                                ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
            param_1->_padding_ = (longlong)this_00;
            uVar22 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
            local_118.Scope = this_00;
            if ((3 < uVar22) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors[uVar22])(&this_00->Impl);
            this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
            pFVar11 = FRHIBreadcrumbAllocator::
                      AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                                (this_01,&local_b8);
            FRDGScope_RHI::FRDGScope_RHI
                      ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,pFVar11);
            (this_00->Impl).Impl.TypeIndex = '\x02';
            if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
              FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
              FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
            }
            local_108 = '\x01';
          }
          uVar9 = local_res8[0];
          pFVar10 = this->SceneRenderer;
          uVar20 = 0;
          if ((int)local_res8[0] < *(int *)&pFVar10->field_0x18) {
            uVar20 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_02 = (FViewInfo *)((longlong)(int)uVar9 * 0x2970 + *(longlong *)&pFVar10->field_0x10)
          ;
          local_140.X = 0;
          local_140.Y = 0;
          TStack_138.X = 0;
          TStack_138.Y = 0;
          cVar8 = (**(code **)(param_3->Proxy->_padding_ + 0xe0))
                            (param_3->Proxy,&local_140,this_02,&this_02->ViewRect);
          if (cVar8 == '\0') {
            local_140 = *(TIntPoint<int>_u_0_s_0 *)&(this_02->ViewRect).field0_0x0;
            TStack_138 = *(TIntPoint<int>_u_0_s_0 *)((longlong)&(this_02->ViewRect).field0_0x0 + 8);
          }
          if ((0 < (TStack_138.Y - local_140.Y) * (TStack_138.X - local_140.X)) &&
             ((param_4 != HairStrands ||
              (bVar7 = HairStrands::HasViewHairStrandsData(this_02), bVar7)))) {
            if (pFVar1->bIsDirectional == 0) {
              uVar9 = pFVar1->SetupIndex;
              if (((this->LocalLights).ArrayNum <= (int)uVar9) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar23 = (this->LocalLights).AllocatorInstance.Data + uVar9;
              if (this->bShouldUseVirtualShadowMapOnePassProjection == false) {
                if (FThreadStats::bPrimaryEnable != false) {
                  FVar19 = StatPtr_STAT_VSMLocalProjectionFull;
                  if (StatPtr_STAT_VSMLocalProjectionFull ==
                      (FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionFull>)0x0) {
                    pFVar13 = ::FName::FName(local_68,"STAT_VSMLocalProjectionFull");
                    FVar19 = (FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionFull>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VSMLocalProjectionFull,*pFVar13,
                                        L"VSM Light Projections (Local Full)",
                                        "STATGROUP_ShadowRendering","STATCAT_Advanced",
                                        L"Shadow Rendering",true,true,ST_int64,false,false,
                                        MCR_Invalid);
                  }
                  FVar4 = *(FName *)FVar19;
                  FVar21 = FVar4.ComparisonIndex.Value;
                  uVar9 = FVar4.Number;
                  local_120 = FVar21.Value;
                  uStack_11c = uVar9;
                  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar15 == (FThreadStats *)0x0) {
                      pFVar16 = FThreadStatsPool::Get();
                      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
                    }
                    local_c8.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
                    local_c8.StatData.Pad[0] = '\x01';
                    local_c8.StatData.Pad[1] = '\0';
                    local_c8.StatData.Pad[2] = '\0';
                    local_c8.StatData.Pad[3] = '\0';
                    local_c8.StatData.Pad[4] = '\0';
                    local_c8.StatData.Pad[5] = '\0';
                    local_c8.StatData.Pad[6] = '\0';
                    local_c8.StatData.Pad[7] = '\0';
                    local_f0 = FVar4;
                    local_c8.NameAndInfo.Index.Value = FVar21.Value;
                    FThreadStats::AddStatMessage(pFVar15,&local_c8);
                    FStatsTrace::Add(&local_f0,1);
                    if (pFVar15->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar15,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar15,false,false);
                    }
                  }
                }
                if (((pFVar23->PerLightCacheEntry).Object ==
                     (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_88._0_4_ = local_140.X;
                local_88._4_4_ = local_140.Y;
                local_88._8_4_ = TStack_138.X;
                local_88._12_4_ = TStack_138.Y;
                ::RenderVirtualShadowMapProjection
                          (param_1,param_2,this_02,local_res8[0],this->VirtualShadowMapArray,
                           (TIntRect<int> *)&local_88._s_0,param_4,param_3,
                           ((pFVar23->PerLightCacheEntry).Object)->VirtualShadowMapId,param_5);
              }
              else {
                if (FThreadStats::bPrimaryEnable != false) {
                  FVar17 = StatPtr_STAT_VSMLocalProjectionOnePassCopy;
                  if (StatPtr_STAT_VSMLocalProjectionOnePassCopy ==
                      (FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionOnePassCopy>)0x0) {
                    pFVar13 = ::FName::FName(&local_70,"STAT_VSMLocalProjectionOnePassCopy");
                    FVar17 = (FThreadSafeStaticStat<FStat_STAT_VSMLocalProjectionOnePassCopy>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_VSMLocalProjectionOnePassCopy,*pFVar13,
                                        L"VSM Light Projections (Local One Pass Copy)",
                                        "STATGROUP_ShadowRendering","STATCAT_Advanced",
                                        L"Shadow Rendering",true,true,ST_int64,false,false,
                                        MCR_Invalid);
                  }
                  FVar4 = *(FName *)FVar17;
                  FVar21 = FVar4.ComparisonIndex.Value;
                  uVar9 = FVar4.Number;
                  local_128 = FVar21.Value;
                  uStack_124 = uVar9;
                  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar15 == (FThreadStats *)0x0) {
                      pFVar16 = FThreadStatsPool::Get();
                      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
                    }
                    local_d8.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
                    local_d8.StatData.Pad[0] = '\x01';
                    local_d8.StatData.Pad[1] = '\0';
                    local_d8.StatData.Pad[2] = '\0';
                    local_d8.StatData.Pad[3] = '\0';
                    local_d8.StatData.Pad[4] = '\0';
                    local_d8.StatData.Pad[5] = '\0';
                    local_d8.StatData.Pad[6] = '\0';
                    local_d8.StatData.Pad[7] = '\0';
                    local_f8 = FVar4;
                    local_d8.NameAndInfo.Index.Value = FVar21.Value;
                    FThreadStats::AddStatMessage(pFVar15,&local_d8);
                    FStatsTrace::Add(&local_f8,1);
                    if (pFVar15->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar15,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar15,false,false);
                    }
                  }
                }
                lVar18 = 0x18;
                if (param_4 != HairStrands) {
                  lVar18 = 0x10;
                }
                pFVar5 = *(FRDGTexture **)((longlong)&this->_padding_ + lVar18);
                if (((pFVar23->PerLightCacheEntry).Object ==
                     (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_98._0_4_ = local_140.X;
                local_98._4_4_ = local_140.Y;
                local_98._8_4_ = TStack_138.X;
                local_98._12_4_ = TStack_138.Y;
                CompositeVirtualShadowMapFromMaskBits
                          (param_1,param_2,this_02,local_res8[0],(TIntRect<int> *)&local_98._s_0,
                           this->VirtualShadowMapArray,param_4,
                           ((pFVar23->PerLightCacheEntry).Object)->VirtualShadowMapId,pFVar5,param_5
                          );
              }
            }
            else {
              pFVar12 = FViewInfo::GetPrimaryView(this_02);
              uVar20 = pFVar1->SetupIndex + pFVar12->SceneRendererPrimaryViewId;
              uVar9 = 0;
              if ((int)uVar20 < (this->DirectionalLights).ArrayNum) {
                uVar9 = ~uVar20 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar3 = (this->DirectionalLights).AllocatorInstance.Data;
              if (FThreadStats::bPrimaryEnable != false) {
                FVar14 = StatPtr_STAT_VSMDirectionalProjectionFull;
                if (StatPtr_STAT_VSMDirectionalProjectionFull ==
                    (FThreadSafeStaticStat<FStat_STAT_VSMDirectionalProjectionFull>)0x0) {
                  pFVar13 = ::FName::FName(&local_78,"STAT_VSMDirectionalProjectionFull");
                  FVar14 = (FThreadSafeStaticStat<FStat_STAT_VSMDirectionalProjectionFull>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_VSMDirectionalProjectionFull,*pFVar13,
                                      L"VSM Light Projections (Directional)",
                                      "STATGROUP_ShadowRendering","STATCAT_Advanced",
                                      L"Shadow Rendering",true,true,ST_int64,false,false,MCR_Invalid
                                     );
                }
                FVar4 = *(FName *)FVar14;
                FVar21 = FVar4.ComparisonIndex.Value;
                uVar9 = FVar4.Number;
                local_130 = FVar21.Value;
                uStack_12c = uVar9;
                if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar15 == (FThreadStats *)0x0) {
                    pFVar16 = FThreadStatsPool::Get();
                    pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
                  }
                  local_e8.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
                  local_e8.StatData.Pad[0] = '\x01';
                  local_e8.StatData.Pad[1] = '\0';
                  local_e8.StatData.Pad[2] = '\0';
                  local_e8.StatData.Pad[3] = '\0';
                  local_e8.StatData.Pad[4] = '\0';
                  local_e8.StatData.Pad[5] = '\0';
                  local_e8.StatData.Pad[6] = '\0';
                  local_e8.StatData.Pad[7] = '\0';
                  local_100 = FVar4;
                  local_e8.NameAndInfo.Index.Value = FVar21.Value;
                  FThreadStats::AddStatMessage(pFVar15,&local_e8);
                  FStatsTrace::Add(&local_100,1);
                  if (pFVar15->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar15,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar15,false,false);
                  }
                }
              }
              local_a8._0_4_ = local_140.X;
              local_a8._4_4_ = local_140.Y;
              local_a8._8_4_ = TStack_138.X;
              local_a8._12_4_ = TStack_138.Y;
              ::RenderVirtualShadowMapProjection
                        (param_1,param_2,this_02,local_res8[0],this->VirtualShadowMapArray,
                         (TIntRect<int> *)&local_a8._s_0,param_4,
                         (TSharedPtr<FVirtualShadowMapClipmap,1> *)&pFVar3[(int)uVar20].ClipmapInfos
                         ,false,(FTiledVSMProjection *)0x0,param_5,
                         &pFVar3[(int)uVar20].ClipmapInfos.Elements[1].Clipmap);
            }
          }
          if (local_108 != '\0') {
            TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_118);
          }
          pFVar10 = this->SceneRenderer;
          local_res8[0] = local_res8[0] + 1;
        } while ((int)local_res8[0] < *(int *)&pFVar10->field_0x18);
      }
    }
  }
  return;
}

// BeginMarkVirtualShadowMapPages @ 14561e980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::BeginMarkVirtualShadowMapPages
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,FSingleLayerWaterPrePassResult *param_2,
          FFrontLayerTranslucencyData *param_3,FRenderer *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  FRDGScope *pFVar4;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  TRDGEventScopeGuard<FRDGScope_RHI> local_58;
  uint local_48;
  undefined4 uStack_44;
  TRDGEventScopeGuard<FRDGScope_RHI> local_38;
  undefined1 local_28;
  
  if (this->VirtualShadowMapArray->bEnabled != false) {
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar3 = false;
    local_28 = 0;
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          local_48 = 0;
          uStack_44 = 0;
          ::Desc._12_8_ = ZEXT48(local_58.Scope._4_4_);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
          ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._0_4_ = 0x38a;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FShadowSceneRenderer::BeginMarkVirtualShadowMapPages'::__l10::Desc::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_78._Myfirst._Val._0_4_ = 0x54bd7390;
      local_78._Myfirst._Val._4_4_ = 1;
      local_38.State = (FRDGScopeState *)param_1;
      pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                         ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar4;
      local_38.Scope = pFVar4;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
                (&(pFVar4->Impl).Impl,(FRDGScopeState *)param_1,&local_78);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar4,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar4,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar3 = true;
      local_28 = 1;
    }
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_48 = local_48 & 0xffffff00;
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else if ((cVar1 == '\x01') && ((param_1->_padding_ & 4) != 0)) {
      bVar2 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_68 = 0x54bd6640;
          uStack_64 = 1;
          ::Desc._padding_._0_4_ = 0x54bd6640;
          ::Desc._padding_._4_4_ = local_78._Myfirst._Val._4_4_;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_ = (longlong)u_ShadowDepths;
          ::Desc._padding_ = (longlong)u_ShadowDepths;
          ::Desc._padding_._0_4_ = 0x38c;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FShadowSceneRenderer::BeginMarkVirtualShadowMapPages'::__l15::<lambda_2>::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_78._Myfirst._Val._0_4_ = 0x54bd73f0;
      local_78._Myfirst._Val._4_4_ = 1;
      local_58.State = (FRDGScopeState *)param_1;
      pFVar4 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                         ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      local_58.Scope._0_4_ = SUB84(pFVar4,0);
      local_58.Scope._4_4_ = (uint)((ulonglong)pFVar4 >> 0x20);
      param_1->_padding_ = (longlong)pFVar4;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>_>
                (&(pFVar4->Impl).Impl,(FRDGScopeState *)param_1,
                 (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>
                  *)&local_78);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar4,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar4,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_48 = CONCAT31(local_48._1_3_,1);
      bVar2 = true;
    }
    FVirtualShadowMapArray::BeginMarkPages
              (this->VirtualShadowMapArray,param_1,(FSceneRenderer *)this->SceneRenderer,param_2,
               param_3,param_4,0 < (this->LocalLights).ArrayNum);
    if (bVar2) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_58);
    }
    if (bVar3) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_38);
    }
  }
  return;
}

// ComputeNaniteShadowsLODScaleFactor @ 145621ac0

float __cdecl FShadowSceneRenderer::ComputeNaniteShadowsLODScaleFactor(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  pTVar2 = CVarNaniteShadowsLODBias.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = powf(__real_40000000,
               (float)((uint)pTVar2->ShadowedValue[1] ^ __xmm_80000000800000008000000080000000));
  return fVar4 * (float)Nanite::GStreamingManager._992_4_;
}

// CreateNaniteRenderPasses @ 145625f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::CreateNaniteRenderPasses
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,TArrayView<FViewInfo_const_,int> *param_2
          ,TArrayView<FProjectedShadowInfo_*_const,int> *param_3)

{
  int iVar1;
  FDeferredShadingSceneRenderer *pFVar2;
  FVirtualShadowMapClipmap *pFVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  ForElementType<FProjectedShadowInfo_*> _Src;
  FShadowSceneRenderer *pFVar9;
  ForElementType<UE::HLSL::FInstanceCullingGroupWork> *pFVar10;
  ForElementType<UE::HLSL::FInstanceCullingGroupWork> *pFVar11;
  FRDGBuilder *pFVar12;
  FRDGBuilder *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FRDGBuffer *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  undefined8 *puVar21;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  FInstanceCullingGroupWork *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  TArray<FNaniteVirtualShadowMapRenderPass,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar26;
  FNaniteVirtualShadowMapRenderPass *pFVar27;
  FSceneCullingRenderer *this_02;
  uint uVar28;
  FProjectedShadowInfo **ppFVar29;
  int *piVar30;
  FNaniteVirtualShadowMapRenderPass *pFVar31;
  undefined1 *puVar32;
  TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar33;
  float fVar34;
  undefined1 auStackY_408 [32];
  FNaniteVirtualShadowMapRenderPass local_3b8;
  undefined1 local_388 [8];
  FProjectedShadowInfo *local_380;
  int local_378;
  ForElementType<UE::HLSL::FInstanceCullingGroupWork> local_370;
  undefined8 local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  FSceneCullingRenderer *local_350;
  FShadowSceneRenderer *local_348;
  FRDGBuffer *local_340;
  ForElementType<UE::HLSL::FInstanceCullingGroupWork> *local_338;
  FRDGBuilder *local_330;
  FProjectedShadowInfo **local_328;
  FRDGBuilder *local_320;
  FProjectedShadowInfo **local_318;
  FShadowSceneRenderer *local_310;
  TArrayView<FViewInfo_const_,int> *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  TArrayView<FViewInfo_const_,int> local_2c8;
  FVSMRenderViewInfo local_2b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_320 = param_1;
  local_310 = this;
  local_308 = param_2;
  if (((this->NaniteRenderPasses).ArrayNum != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NaniteRenderPasses.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                          ,0x4d9,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = FSceneCulling::ExtensionRegistration._8_4_;
  lVar25 = (longlong)(int)FSceneCulling::ExtensionRegistration._8_4_;
  pFVar2 = this->SceneRenderer;
  if ((-1 < (int)FSceneCulling::ExtensionRegistration._8_4_) &&
     ((int)FSceneCulling::ExtensionRegistration._8_4_ < *(int *)&pFVar2->field_0x98)) {
    if ((*(int *)&pFVar2->field_0x98 <= (int)FSceneCulling::ExtensionRegistration._8_4_) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar32 = *(undefined1 **)&pFVar2->field_0x90;
    if (*(undefined1 **)&pFVar2->field_0x90 == (undefined1 *)0x0) {
      puVar32 = &pFVar2->field_0x80;
    }
    if (((*(uint *)(puVar32 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar6 & 0x1f) & 1) != 0) &&
       (this_02 = *(FSceneCullingRenderer **)(*(longlong *)&pFVar2->field_0x70 + lVar25 * 8),
       local_350 = this_02, this_02 != (FSceneCullingRenderer *)0x0)) {
      uVar28 = (this->ExplicitChunkDrawInstanceIds).ArrayNum;
      pFVar18 = (FRDGBuffer *)0x0;
      if (uVar28 != 0) {
        pFVar18 = CreateStructuredBuffer
                            (param_1,L"Shadow.Virtual.ExplicitChunkDrawInstanceIds",4,uVar28,
                             (this->ExplicitChunkDrawInstanceIds).AllocatorInstance.Data,
                             (ulonglong)(uVar28 * 4),None);
      }
      pTVar8 = CVarVirtualShadowMapNaniteAllowMultipassViews.Ref;
      local_370.Data = (FInstanceCullingGroupWork *)0x0;
      local_368 = 0;
      bVar14 = IsInParallelRenderingThread();
      if ((!bVar14) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar15 = pTVar8->ShadowedValue[1];
      local_328 = param_3->DataPtr;
      local_3b8.Shadows.ArrayNum = 0;
      local_3b8.Shadows.ArrayMax = 0;
      local_3b8.TotalPrimaryViews = 0;
      local_3b8.MaxCullingViews = 0;
      local_338 = &local_370;
      local_3b8.SceneInstanceCullingQuery = (FSceneInstanceCullingQuery *)0x0;
      local_3b8.Shadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
      local_318 = local_328 + param_3->ArrayNum;
      local_3b8.VirtualShadowMapViews = (FPackedViewArray *)0x0;
      local_3b8.ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)0x0;
      local_378 = iVar15;
      local_348 = this;
      local_340 = pFVar18;
      local_330 = param_1;
      if (local_328 != local_318) {
        do {
          local_380 = *local_328;
          pFVar3 = (local_380->VirtualShadowMapClipmap).Object;
          if ((pFVar3 == (FVirtualShadowMapClipmap *)0x0) ||
             ((pFVar3->Config).bIsFirstPersonShadow == false)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          iVar17 = local_380->ExplicitNaniteInstanceChunkStartOffset;
          iVar1 = local_380->ExplicitNaniteInstanceChunkEndOffset;
          if ((local_380->bShouldRenderVSM != 0) && ((!bVar14 || (iVar17 < iVar1)))) {
            GetRenderViewInfo(&local_2b8,local_380);
            if ((iVar15 != 0) &&
               ((0x1000 < local_2b8.MaxCullingViews + local_3b8.MaxCullingViews &&
                (local_3b8.MaxCullingViews != 0)))) {
              if ((local_3b8.TotalPrimaryViews == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NaniteRenderPass.TotalPrimaryViews > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                                      ,0x4e8,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((local_3b8.SceneInstanceCullingQuery == (FSceneInstanceCullingQuery *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("NaniteRenderPass.SceneInstanceCullingQuery",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                                      ,0x4e9,L""), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)&local_338[1].Data != 0) {
                if ((local_340 == (FRDGBuffer *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ExplicitChunkDrawInstanceIdsRDG",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                                        ,0x4ed,L""), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar12 = local_330;
                puVar19 = FMemStackBase::Alloc((FMemStackBase *)&local_330->_padding_,0x20,0x10);
                if (puVar19 == (undefined8 *)0x0) {
                  puVar19 = (undefined8 *)0x0;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Object",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                      ,0x61,L"");
                  if (bVar14) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                else {
                  *puVar19 = &___7__TObject_UFExplicitChunkDrawInfo_Nanite___FRDGAllocator__6B_;
                  puVar19[1] = 0;
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                }
                local_360 = puVar19;
                if ((((undefined8 **)pFVar12->_padding_ <= &local_360) &&
                    (&local_360 <
                     (undefined8 **)pFVar12->_padding_ + *(int *)((longlong)&pFVar12->_padding_ + 4)
                    )) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar14)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar15 = (int)pFVar12->_padding_;
                piVar30 = (int *)((longlong)&pFVar12->_padding_ + 4);
                if (iVar15 == *piVar30) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)&pFVar12->_padding_,piVar30);
                }
                pFVar13 = local_330;
                pFVar10 = local_338;
                *(int *)&pFVar12->_padding_ = iVar15 + 1;
                *(undefined8 **)(pFVar12->_padding_ + (longlong)iVar15 * 8) = local_360;
                uVar23 = (ulonglong)_tls_index;
                ((FExplicitChunkDrawInfo *)(puVar19 + 1))->NumChunks = *(uint *)&local_338[1].Data;
                if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar23 * 8) +
                             0x9d4c) <
                     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                     ::__l2::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                                         ::__l2::_thread_safe_static_guard_0__),
                   `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                   ::__l2::_thread_safe_static_guard_0__ == -1)) {
                  `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                  ::__l2::DummyElement.ViewGroupId = 0;
                  `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                  ::__l2::DummyElement.PackedItemChunkDesc = 0;
                  `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                  ::__l2::DummyElement.ActiveViewMask = 0;
                  _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                                       ::__l2::_thread_safe_static_guard_0__);
                }
                if (*(int *)&pFVar10[1].Data == 0) {
                  uVar28 = 1;
                  pFVar22 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<UE::HLSL::FInstanceCullingGroupWork,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>&&___ptr64)'
                             ::__l2::DummyElement;
                  uVar20 = 0xc;
                }
                else {
                  puVar21 = FMemStackBase::Alloc((FMemStackBase *)&pFVar13->_padding_,0x18,0x10);
                  pFVar11 = local_338;
                  if (puVar21 == (undefined8 *)0x0) {
                    puVar21 = (undefined8 *)0x0;
                    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                        ,0x61,L"");
                    if (bVar14) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  else {
                    *puVar21 = &
                               ___7__TObject_V__TArray_UFInstanceCullingGroupWork_HLSL_UE__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______FRDGAllocator__6B_
                    ;
                    puVar21[1] = 0;
                    puVar21[1] = local_338->Data;
                    local_338->Data = (FInstanceCullingGroupWork *)0x0;
                    *(undefined4 *)(puVar21 + 2) = *(undefined4 *)&pFVar10[1].Data;
                    *(undefined4 *)((longlong)puVar21 + 0x14) =
                         *(undefined4 *)((longlong)&pFVar11[1].Data + 4);
                    *(undefined4 *)&pFVar10[1].Data = 0;
                    *(undefined4 *)((longlong)&pFVar11[1].Data + 4) = 0;
                  }
                  local_358 = puVar21;
                  if ((((undefined8 **)pFVar13->_padding_ <= &local_358) &&
                      (&local_358 <
                       (undefined8 **)pFVar13->_padding_ +
                       *(int *)((longlong)&pFVar13->_padding_ + 4))) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar15 = (int)pFVar13->_padding_;
                  piVar30 = (int *)((longlong)&pFVar13->_padding_ + 4);
                  if (iVar15 == *piVar30) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)&pFVar13->_padding_,piVar30);
                  }
                  *(int *)&pFVar13->_padding_ = iVar15 + 1;
                  *(undefined8 **)(pFVar13->_padding_ + (longlong)iVar15 * 8) = local_358;
                  uVar28 = *(uint *)(puVar21 + 2);
                  pFVar22 = (FInstanceCullingGroupWork *)puVar21[1];
                  uVar20 = (ulong64)(uVar28 * 0xc);
                }
                pFVar18 = CreateStructuredBuffer
                                    (pFVar13,L"Shadow.Virtual.ExplicitChunkDraws",0xc,uVar28,pFVar22
                                     ,uVar20,NoCopy);
                puVar19[2] = pFVar18;
                puVar19[3] = local_340;
                local_3b8.ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)(puVar19 + 1);
              }
              pFVar9 = local_348;
              pTVar26 = &local_348->NaniteRenderPasses;
              pFVar27 = (pTVar26->AllocatorInstance).Data;
              if (((pFVar27 <= &local_3b8) &&
                  (&local_3b8 < pFVar27 + (local_348->NaniteRenderPasses).ArrayMax)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar15 = (pFVar9->NaniteRenderPasses).ArrayNum;
              piVar30 = &(pFVar9->NaniteRenderPasses).ArrayMax;
              if (iVar15 == *piVar30) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteVirtualShadowMapRenderPass>_>
                                   (0x830,&pTVar26->AllocatorInstance,piVar30);
              }
              _Src.Data = local_3b8.Shadows.AllocatorInstance.Data;
              (pFVar9->NaniteRenderPasses).ArrayNum = iVar15 + 1;
              pFVar27 = (pTVar26->AllocatorInstance).Data;
              pTVar33 = &pFVar27[iVar15].Shadows;
              pFVar27[iVar15].SceneInstanceCullingQuery = local_3b8.SceneInstanceCullingQuery;
              piVar30 = &pFVar27[iVar15].Shadows.ArrayMax;
              (pTVar33->AllocatorInstance).Data = (FProjectedShadowInfo **)0x0;
              lVar25 = (longlong)local_3b8.Shadows.ArrayNum;
              pTVar33->ArrayNum = local_3b8.Shadows.ArrayNum;
              if (local_3b8.Shadows.ArrayNum == 0) {
                *piVar30 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                          (8,8,local_3b8.Shadows.ArrayNum,0,&pTVar33->AllocatorInstance,
                           local_3b8.Shadows.ArrayNum,piVar30);
                memcpy((pTVar33->AllocatorInstance).Data,_Src.Data,lVar25 << 3);
              }
              pFVar27[iVar15].TotalPrimaryViews = local_3b8.TotalPrimaryViews;
              pFVar27[iVar15].MaxCullingViews = local_3b8.MaxCullingViews;
              pFVar27[iVar15].VirtualShadowMapViews = local_3b8.VirtualShadowMapViews;
              pFVar27[iVar15].ExplicitChunkDrawInfo = local_3b8.ExplicitChunkDrawInfo;
              local_300 = 0;
              local_2e8 = 0;
              local_3b8.SceneInstanceCullingQuery = (FSceneInstanceCullingQuery *)0x0;
              local_2e0 = 0;
              uStack_2d8 = 0;
              if (local_3b8.Shadows.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
                ppFVar29 = local_3b8.Shadows.AllocatorInstance.Data + -1;
                MemoryTrace_Free((ulong64)ppFVar29,0,0);
                if (FLowLevelMemTracker::EnabledState != Disabled) {
                  this_00 = FLowLevelMemTracker::TrackerInstance;
                  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
                    this_00 = FLowLevelMemTracker::Construct();
                  }
                  FLowLevelMemTracker::OnLowLevelFree(this_00,Default,ppFVar29,FMalloc,true);
                }
                piVar30 = (int *)((longlong)ppFVar29 - (ulonglong)*(uint *)ppFVar29);
                LOCK();
                iVar15 = *piVar30;
                *piVar30 = *piVar30 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  lVar25 = *(longlong *)(piVar30 + 0x10);
                  MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar30,0,0);
                  if (lVar25 - (longlong)piVar30 == 0x10000) {
                    this_01 = FPageAllocator::Get();
                    FPageAllocator::Free(this_01,piVar30);
                  }
                  else {
                    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))
                              (UE::Private::GMalloc,piVar30);
                  }
                }
              }
              local_3b8.Shadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
              piVar30 = (int *)((longlong)&local_338[1].Data + 4);
              local_3b8.Shadows.ArrayNum = 0;
              local_3b8.Shadows.ArrayMax = 0;
              local_3b8.TotalPrimaryViews = 0;
              local_3b8.MaxCullingViews = 0;
              local_3b8.VirtualShadowMapViews = (FPackedViewArray *)0x0;
              local_3b8.ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)0x0;
              iVar15 = *piVar30;
              local_2f8 = 0;
              local_2f0 = 0;
              *(undefined4 *)&local_338[1].Data = 0;
              if (iVar15 == 0) {
                *piVar30 = 0;
                this_02 = local_350;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_>
                          (0xc,4,0,iVar15,local_338,0,piVar30);
                this_02 = local_350;
              }
            }
            if (((local_3b8.Shadows.AllocatorInstance.Data <= &local_380) &&
                (&local_380 < local_3b8.Shadows.AllocatorInstance.Data + local_3b8.Shadows.ArrayMax)
                ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar15 = local_3b8.Shadows.ArrayNum;
            if (local_3b8.Shadows.ArrayNum == local_3b8.Shadows.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
                                 (0x808,&local_3b8.Shadows.AllocatorInstance,
                                  &local_3b8.Shadows.ArrayMax);
            }
            local_3b8.Shadows.ArrayNum = iVar15 + 1;
            local_3b8.Shadows.AllocatorInstance.Data[iVar15] = local_380;
            if (local_3b8.SceneInstanceCullingQuery == (FSceneInstanceCullingQuery *)0x0) {
              local_3b8.SceneInstanceCullingQuery =
                   FSceneCullingRenderer::CreateInstanceQuery(this_02,local_320);
            }
            if (iVar17 < iVar1) {
              uVar16 = FSceneInstanceCullingQuery::AddViewDrawGroup
                                 (local_3b8.SceneInstanceCullingQuery,local_3b8.TotalPrimaryViews,
                                  local_2b8.NumPrimaryViews);
              uVar28 = local_380->ExplicitNaniteInstanceChunkStartOffset;
              uVar5 = uVar28;
              if ((int)uVar28 < local_380->ExplicitNaniteInstanceChunkEndOffset) {
                do {
                  if (uVar5 + 1 == local_380->ExplicitNaniteInstanceChunkEndOffset) {
                    iVar15 = local_380->ExplicitNaniteInstanceLastChunkSize;
                  }
                  else {
                    iVar15 = 0x40;
                  }
                  iVar17 = (int)local_368;
                  if ((int)local_368 == local_368._4_4_) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FInstanceCullingGroupWork>_>
                                       (0x40c,&local_370,(int *)((longlong)&local_368 + 4));
                  }
                  local_368 = CONCAT44(local_368._4_4_,iVar17 + 1);
                  uVar24 = iVar15 << 0x18 | uVar28;
                  uVar28 = uVar28 + 1;
                  local_370.Data[iVar17].ViewGroupId = uVar16;
                  local_370.Data[iVar17].PackedItemChunkDesc = uVar24;
                  local_370.Data[iVar17].ActiveViewMask = 0xffffffff;
                  uVar5 = uVar5 + 1;
                } while ((int)uVar28 < local_380->ExplicitNaniteInstanceChunkEndOffset);
              }
            }
            else {
              FSceneInstanceCullingQuery::Add
                        (local_3b8.SceneInstanceCullingQuery,local_3b8.TotalPrimaryViews,
                         local_2b8.NumPrimaryViews,&local_2b8.CullingVolume);
            }
            local_3b8.MaxCullingViews = local_3b8.MaxCullingViews + local_2b8.MaxCullingViews;
            local_3b8.TotalPrimaryViews = local_3b8.TotalPrimaryViews + local_2b8.NumPrimaryViews;
            if (local_2b8.CullingVolume.ConvexVolume.PermutedPlanes.AllocatorInstance.SecondaryData
                != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
              FMemory::Free((void *)local_2b8.CullingVolume.ConvexVolume.PermutedPlanes.
                                    AllocatorInstance.SecondaryData);
            }
            this_02 = local_350;
            iVar15 = local_378;
            if (local_2b8.CullingVolume.ConvexVolume.Planes.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Math::TPlane<double>_>)0x0) {
              FMemory::Free((void *)local_2b8.CullingVolume.ConvexVolume.Planes.AllocatorInstance.
                                    SecondaryData);
              this_02 = local_350;
              iVar15 = local_378;
            }
          }
          local_328 = local_328 + 1;
          param_1 = local_320;
          param_2 = local_308;
          this = local_310;
        } while (local_328 != local_318);
      }
      `FShadowSceneRenderer::CreateNaniteRenderPasses'::__l12::<lambda_1>::operator()
                (&local_348,&local_3b8);
      if (local_3b8.Shadows.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_3b8.Shadows.AllocatorInstance.Data);
      }
      if (local_370.Data != (FInstanceCullingGroupWork *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_370.Data);
      }
      goto LAB_1456269af;
    }
  }
  bVar14 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_4417075501147880228>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                      ,0x4dc,"SceneCullingRenderer");
  if (bVar14) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1456269af:
  pTVar7 = CVarNaniteShadowsLODBias.Ref;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar34 = powf(__real_40000000,
                (float)((uint)pTVar7->ShadowedValue[1] ^ __xmm_80000000800000008000000080000000));
  iVar15 = (this->NaniteRenderPasses).ArrayNum;
  pFVar27 = (this->NaniteRenderPasses).AllocatorInstance.Data;
  fVar34 = fVar34 * (float)Nanite::GStreamingManager._992_4_;
  pFVar31 = pFVar27 + iVar15;
  while( true ) {
    if ((this->NaniteRenderPasses).ArrayNum != iVar15) {
      `TCheckedPointerIterator<FNaniteVirtualShadowMapRenderPass,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_388);
    }
    if (pFVar27 == pFVar31) break;
    local_2c8.DataPtr = param_2->DataPtr;
    local_2c8.ArrayNum = param_2->ArrayNum;
    local_2c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    CreateNaniteViewsForPass(param_1,this->VirtualShadowMapArray,&local_2c8,fVar34,pFVar27);
    pFVar27 = pFVar27 + 1;
  }
  return;
}

// CreateNaniteViewsForPass @ 145626ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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

void __cdecl
FShadowSceneRenderer::CreateNaniteViewsForPass
          (FRDGBuilder *param_1,FVirtualShadowMapArray *param_2,
          TArrayView<FViewInfo_const_,int> *param_3,float param_4,
          FNaniteVirtualShadowMapRenderPass *param_5)

{
  int iVar1;
  longlong lVar2;
  code **ppcVar3;
  FPackedViewArray *pFVar4;
  FLowLevelMemTracker *this;
  FPageAllocator *this_00;
  FProjectedShadowInfo **ppFVar5;
  int *piVar6;
  undefined1 auStack_388 [32];
  FVirtualShadowMapArray local_358;
  FViewInfo *local_b8;
  code *pcStack_b0;
  FNaniteVirtualShadowMapRenderPass local_a8;
  float local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_388;
  FVirtualShadowMapArray::FVirtualShadowMapArray(&local_358,param_2);
  local_b8 = param_3->DataPtr;
  pcStack_b0 = *(code **)&param_3->ArrayNum;
  FNaniteVirtualShadowMapRenderPass::FNaniteVirtualShadowMapRenderPass(&local_a8,param_5);
  local_68[0] = (code *)0x0;
  local_78 = param_4;
  ppcVar3 = FMemory::Malloc(0x300,0x10);
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FShadowSceneRenderer::CreateNaniteViewsForPass'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  local_40 = ppcVar3;
  FVirtualShadowMapArray::FVirtualShadowMapArray((FVirtualShadowMapArray *)(ppcVar3 + 2),&local_358)
  ;
  ppcVar3[0x56] = (code *)local_b8;
  ppcVar3[0x57] = pcStack_b0;
  ppcVar3[0x59] = (code *)0x0;
  ppcVar3[0x58] = (code *)local_a8.SceneInstanceCullingQuery;
  ppcVar3[0x59] = (code *)local_a8.Shadows.AllocatorInstance.Data;
  local_a8.Shadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  *(int *)(ppcVar3 + 0x5a) = local_a8.Shadows.ArrayNum;
  *(int *)((longlong)ppcVar3 + 0x2d4) = local_a8.Shadows.ArrayMax;
  local_a8.Shadows.ArrayNum = 0;
  local_a8.Shadows.ArrayMax = 0;
  *(uint *)(ppcVar3 + 0x5b) = local_a8.TotalPrimaryViews;
  *(uint *)((longlong)ppcVar3 + 0x2dc) = local_a8.MaxCullingViews;
  ppcVar3[0x5c] = (code *)local_a8.VirtualShadowMapViews;
  ppcVar3[0x5d] = (code *)local_a8.ExplicitChunkDrawInfo;
  *(float *)(ppcVar3 + 0x5e) = local_78;
  if ((FVirtualShadowMapArray *)(ppcVar3 + 2) != (FVirtualShadowMapArray *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                  ::Call;
  }
  pFVar4 = Nanite::FPackedViewArray::CreateWithSetupTask
                     (param_1,param_5->TotalPrimaryViews,
                      (TFunction<void___cdecl(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)>
                       *)local_68,(FPipe *)0x0,true);
  param_5->VirtualShadowMapViews = pFVar4;
  if (local_68[0] != (code *)0x0) {
    ppcVar3 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar3 = local_40;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_a8.Shadows.AllocatorInstance.Data != (FProjectedShadowInfo **)0x0) {
    ppFVar5 = local_a8.Shadows.AllocatorInstance.Data + -1;
    MemoryTrace_Free((ulong64)ppFVar5,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,ppFVar5,FMalloc,true);
    }
    piVar6 = (int *)((longlong)ppFVar5 - (ulonglong)*(uint *)ppFVar5);
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar6 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
      if (lVar2 - (longlong)piVar6 == 0x10000) {
        this_00 = FPageAllocator::Get();
        FPageAllocator::Free(this_00,piVar6);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar6);
      }
    }
  }
  FVirtualShadowMapArray::~FVirtualShadowMapArray(&local_358);
  return;
}

// DispatchVirtualShadowMapViewAndCullingSetup @ 14562b590

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::DispatchVirtualShadowMapViewAndCullingSetup
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,
          TArrayView<FProjectedShadowInfo_*_const,int> *param_2)

{
  int iVar1;
  bool bVar2;
  TArrayView<FViewInfo_const_,int> *pTVar3;
  FNaniteVirtualShadowMapRenderPass *pFVar4;
  FNaniteVirtualShadowMapRenderPass *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  TArrayView<FProjectedShadowInfo_*_const,int> local_48;
  TArrayView<FViewInfo_const_,int> local_38;
  TArrayView<FViewInfo_const_,int> local_28;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Orange,"FShadowSceneRenderer_DispatchVirtualShadowMapViewAndCullingSetup");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId828,
               "FShadowSceneRenderer_DispatchVirtualShadowMapViewAndCullingSetup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
               ,0x33c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId828);
  }
  FVirtualShadowMapArray::UpdatePhysicalPageAddresses(this->VirtualShadowMapArray,param_1);
  if ((param_2->ArrayNum != 0) &&
     (bVar2 = UseNanite(*(EShaderPlatform *)&this->SceneRenderer->field_0xadc,true,true), bVar2)) {
    local_48.DataPtr = param_2->DataPtr;
    local_48.ArrayNum = param_2->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
    pTVar3 = TArrayView<FViewInfo_const_,int>::
             TArrayView<FViewInfo_const_,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                       (&local_28,
                        (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)
                        &this->SceneRenderer->field_0x10);
    local_38.DataPtr = pTVar3->DataPtr;
    local_38.ArrayNum = pTVar3->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
    CreateNaniteRenderPasses(this,param_1,&local_38,&local_48);
    iVar1 = (this->NaniteRenderPasses).ArrayNum;
    pFVar4 = (this->NaniteRenderPasses).AllocatorInstance.Data;
    pFVar5 = pFVar4 + iVar1;
    while( true ) {
      if ((this->NaniteRenderPasses).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNaniteVirtualShadowMapRenderPass,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      FSceneInstanceCullingQuery::Dispatch(pFVar4->SceneInstanceCullingQuery,param_1,true);
      pFVar4 = pFVar4 + 1;
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FindDirectional @ 145632160

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FDirectionalLightShadowFrameSetup * __thiscall
FShadowSceneRenderer::FindDirectional(FShadowSceneRenderer *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDirectionalLightShadowFrameSetup *pFVar4;
  FDirectionalLightShadowFrameSetup *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DirectionalLights).ArrayNum;
  pFVar4 = (this->DirectionalLights).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->DirectionalLights).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((param_1 == pFVar4->LightId) && ((pFVar4->ViewMask >> (param_2 & 0x1fU) & 1) != 0)) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                     ,0x148,L"");
  if (!bVar3) {
    return (FDirectionalLightShadowFrameSetup *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDirectionalLightShadowFrameSetup *)(*pcVar2)();
  return pFVar4;
}

// GatherClipmapIds @ 145633660

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __thiscall
FShadowSceneRenderer::GatherClipmapIds
          (FShadowSceneRenderer *this,
          TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FDirectionalLightShadowFrameSetup *pFVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar9;
  ulonglong uVar10;
  FDirectionalLightShadowFrameSetup *pFVar11;
  FDirectionalLightShadowFrameSetup *pFVar12;
  FDirectionalLightShadowFrameSetup *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar6 = (this->DirectionalLights).ArrayNum * 2;
  local_res18 = param_1;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar6,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_res10 = (this->DirectionalLights).ArrayNum;
  uVar10 = (ulonglong)(int)local_res10;
  pFVar13 = (this->DirectionalLights).AllocatorInstance.Data;
  pFVar12 = pFVar13 + uVar10;
  pFVar5 = pFVar13;
  while( true ) {
    if ((this->DirectionalLights).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar12) break;
    if ((pFVar5->ViewMask >> (param_1 & 0x1fU) & 1) != 0) {
      param_1 = local_res18;
      for (pFVar11 = (FDirectionalLightShadowFrameSetup *)&pFVar5->ClipmapInfos;
          local_res18 = param_1, pFVar11 != pFVar5 + 1;
          pFVar11 = (FDirectionalLightShadowFrameSetup *)
                    &(pFVar11->ClipmapInfos).Elements[0].ProjectedShadowInfo) {
        lVar3 = *(longlong *)pFVar11;
        if (lVar3 != 0) {
          if ((*(longlong *)(lVar3 + 0x1b60) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
                     (*pcVar4)();
            return pTVar9;
          }
          iVar2 = *(int *)(*(longlong *)(lVar3 + 0x1b60) + 0xc);
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          (__return_storage_ptr__->AllocatorInstance).Data[iVar8] = iVar2;
        }
        param_1 = local_res18;
      }
    }
    uVar10 = (ulonglong)local_res10;
    pFVar13 = pFVar13 + 1;
    pFVar5 = pFVar5 + 1;
  }
  return __return_storage_ptr__;
}

// GetInvalidatingInstancesInterface @ 145636530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

IShadowInvalidatingInstances * __thiscall
FShadowSceneRenderer::GetInvalidatingInstancesInterface
          (FShadowSceneRenderer *this,FSceneView *param_1)

{
  bool bVar1;
  FVirtualShadowMapArrayCacheManager *this_00;
  IShadowInvalidatingInstances *pIVar2;
  
  this_00 = FScene::GetVirtualShadowMapCache(this->Scene);
  if (this_00 != (FVirtualShadowMapArrayCacheManager *)0x0) {
    bVar1 = FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(this_00);
    pIVar2 = (IShadowInvalidatingInstances *)0x0;
    if (bVar1) {
      pIVar2 = (IShadowInvalidatingInstances *)&this_00->ShadowInvalidatingInstancesImplementation;
    }
    return pIVar2;
  }
  return (IShadowInvalidatingInstances *)0x0;
}

// PostInitDynamicShadowsSetup @ 14563b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FShadowSceneRenderer::PostInitDynamicShadowsSetup(FShadowSceneRenderer *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  FProjectedShadowInfo *pFVar14;
  FScene *pFVar15;
  code *pcVar16;
  TConsoleVariableData<int> *pTVar17;
  FShadowSceneRenderer *pFVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  FNaniteVisibilityQuery *pFVar24;
  ForElementType<FConvexVolume> FVar25;
  FConvexVolume *pFVar26;
  ForElementType<UE::Math::TPlane<double>_> FVar27;
  FDirectionalLightShadowFrameSetup *pFVar28;
  FLocalLightShadowFrameSetup *pFVar29;
  FDirectionalLightShadowFrameSetup *pFVar30;
  ForElementType<UE::Math::TPlane<double>_> FVar31;
  FLocalLightShadowFrameSetup *pFVar32;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296 [6];
  ForElementType<FConvexVolume> local_290;
  undefined8 local_288;
  FShadowSceneRenderer *local_280;
  uint local_278;
  FLocalLightShadowFrameSetup *local_270;
  FTaskHandle local_268;
  TArrayView<FConvexVolume_const_,int> local_260;
  FConvexVolume local_248;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_280 = this;
  AllocateVirtualShadowMapIds(this);
  pTVar17 = CVarVSMMaterialVisibility.Ref;
  bVar19 = IsInParallelRenderingThread();
  if ((!bVar19) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (pTVar17->ShadowedValue[1] == 0) {
    return;
  }
  iVar21 = 0;
  FVar25.Data = (FConvexVolume *)0x0;
  iVar13 = (this->DirectionalLights).ArrayNum;
  pFVar30 = (this->DirectionalLights).AllocatorInstance.Data;
  bVar19 = false;
  pFVar28 = pFVar30 + iVar13;
  local_290.Data = (FConvexVolume *)0x0;
  local_288 = 0;
  do {
    while( true ) {
      if ((this->DirectionalLights).ArrayNum != iVar13) {
        local_298 = 0;
        `TCheckedPointerIterator<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_298);
      }
      if (pFVar30 == pFVar28) {
        if (!bVar19) {
          local_278 = (this->LocalLights).ArrayNum;
          uVar23 = (ulonglong)(int)local_278;
          pFVar29 = (this->LocalLights).AllocatorInstance.Data;
          pFVar32 = pFVar29 + uVar23;
          local_270 = pFVar32;
          while( true ) {
            if ((this->LocalLights).ArrayNum != (int)uVar23) {
              local_297 = 0;
              `TCheckedPointerIterator<FShadowSceneRenderer::FLocalLightShadowFrameSetup,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_297);
            }
            if (pFVar29 == pFVar32) break;
            pFVar14 = pFVar29->ProjectedShadowInfo;
            if (pFVar14->bShouldRenderVSM != 0) {
              FVar27 = (pFVar14->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData;
              iVar13 = (pFVar14->CasterOuterFrustum).Planes.ArrayNum;
              local_248.Planes.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TPlane<double>_>)0x0;
              local_248.Planes.ArrayNum = iVar13;
              FVar31 = (ForElementType<UE::Math::TPlane<double>_>)&pFVar14->CasterOuterFrustum;
              if (FVar27 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FVar31 = FVar27;
              }
              if (iVar13 == 0) {
                local_248.Planes.ArrayMax = 6;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                          (0x20,0x10,iVar13,0,
                           (ForElementType<UE::Math::TPlane<double>_> *)&local_248,iVar13,
                           &local_248.Planes.ArrayMax);
                FVar27 = (ForElementType<UE::Math::TPlane<double>_>)&local_248;
                if (local_248.Planes.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                  FVar27 = local_248.Planes.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar27,(void *)FVar31,(longlong)iVar13 << 5);
              }
              FVar27 = (pFVar14->CasterOuterFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
              iVar13 = (pFVar14->CasterOuterFrustum).PermutedPlanes.ArrayNum;
              local_248.PermutedPlanes.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Math::TPlane<double>_>)0x0;
              if (FVar27 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FVar27 = (ForElementType<UE::Math::TPlane<double>_>)
                         &(pFVar14->CasterOuterFrustum).PermutedPlanes;
              }
              local_248.PermutedPlanes.ArrayNum = iVar13;
              if (iVar13 == 0) {
                local_248.PermutedPlanes.ArrayMax = 8;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                          (0x20,0x10,iVar13,0,&local_248.PermutedPlanes.AllocatorInstance,iVar13,
                           &local_248.PermutedPlanes.ArrayMax);
                FVar31 = (ForElementType<UE::Math::TPlane<double>_>)&local_248.PermutedPlanes;
                if (local_248.PermutedPlanes.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                  FVar31 = local_248.PermutedPlanes.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)FVar31,(void *)FVar27,(longlong)iVar13 << 5);
              }
              iVar13 = local_248.Planes.ArrayNum;
              FVar27 = (ForElementType<UE::Math::TPlane<double>_>)&local_248;
              if (local_248.Planes.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FVar27 = local_248.Planes.AllocatorInstance.SecondaryData;
              }
              FVar31 = (ForElementType<UE::Math::TPlane<double>_>)
                       ((longlong)local_248.Planes.ArrayNum * 0x20 + (longlong)FVar27);
              while( true ) {
                if (local_248.Planes.ArrayNum != iVar13) {
                  local_296[0] = 0;
                  `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_296);
                }
                if (FVar27 == FVar31) break;
                dVar3 = *(double *)((longlong)FVar27 + 0x18);
                dVar4 = *(double *)((longlong)FVar27 + 0x10);
                dVar5 = *(double *)((longlong)FVar27 + 8);
                dVar6 = *(double *)FVar27;
                dVar7 = (pFVar14->PreShadowTranslation).field0_0x0._s_0.Y;
                dVar8 = (pFVar14->PreShadowTranslation).field0_0x0._s_0.X;
                dVar9 = *(double *)((longlong)FVar27 + 8);
                dVar10 = *(double *)FVar27;
                dVar11 = (pFVar14->PreShadowTranslation).field0_0x0._s_0.Z;
                dVar12 = *(double *)((longlong)FVar27 + 0x10);
                *(double *)FVar27 = *(double *)FVar27;
                *(double *)((longlong)FVar27 + 8) = *(double *)((longlong)FVar27 + 8);
                *(double *)((longlong)FVar27 + 0x10) = *(double *)((longlong)FVar27 + 0x10);
                *(double *)((longlong)FVar27 + 0x18) =
                     (dVar3 * dVar5 - dVar7) * dVar9 + (dVar3 * dVar6 - dVar8) * dVar10 +
                     (dVar4 * dVar3 - dVar11) * dVar12;
                FVar27 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar27 + 0x20);
              }
              FConvexVolume::Init(&local_248);
              if (((FVar25.Data <= &local_248) && (&local_248 < FVar25.Data + local_288._4_4_)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              if (iVar21 == local_288._4_4_) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
                                   (0x200,0x10,&local_290,(int *)((longlong)&local_288 + 4));
                FVar25.Data = local_290.Data;
              }
              lVar22 = (longlong)iVar21;
              iVar21 = iVar21 + 1;
              local_288 = CONCAT44(local_288._4_4_,iVar21);
              FConvexVolume::FConvexVolume(FVar25.Data + lVar22,&local_248);
              if (local_248.PermutedPlanes.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FMemory::Free((void *)local_248.PermutedPlanes.AllocatorInstance.SecondaryData);
              }
              this = local_280;
              pFVar32 = local_270;
              if (local_248.Planes.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                FMemory::Free((void *)local_248.Planes.AllocatorInstance.SecondaryData);
                this = local_280;
                pFVar32 = local_270;
              }
            }
            uVar23 = (ulonglong)local_278;
            pFVar29 = pFVar29 + 1;
          }
          if (iVar21 != 0) {
            pFVar15 = this->Scene;
            local_268.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
            local_260.DataPtr = FVar25.Data;
            if ((iVar21 < 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar19)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar18 = local_280;
            local_260.ArrayNum = iVar21;
            pFVar24 = FNaniteVisibility::BeginVisibilityQuery
                                (pFVar15->NaniteVisibility,
                                 (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>
                                  *)&local_280->SceneRenderer->field_0xb0,local_280->Scene,
                                 &local_260,pFVar15->NaniteRasterPipelines,
                                 pFVar15->NaniteShadingPipelines,&local_268);
            pFVar18->NaniteVisibilityQuery = pFVar24;
            if (local_268.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = (atomic<unsigned_int> *)((longlong)local_268.Pimpl.Reference + 0x30);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_268.Pimpl.Reference)(local_268.Pimpl.Reference,1);
              }
            }
          }
        }
        DestructItems<FConvexVolume,int>(FVar25.Data,iVar21);
        if (FVar25.Data == (FConvexVolume *)0x0) {
          return;
        }
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar25.Data);
        return;
      }
      if (((!bVar19) &&
          (pFVar14 = (pFVar30->ClipmapInfos).Elements[0].ProjectedShadowInfo, this = local_280,
          pFVar14 != (FProjectedShadowInfo *)0x0)) && (pFVar14->bShouldRenderVSM != 0)) break;
LAB_14563b562:
      pFVar30 = pFVar30 + 1;
    }
    if (((pFVar14->VirtualShadowMapPerLightCacheEntry).Object ==
         (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if ((((pFVar14->VirtualShadowMapPerLightCacheEntry).Object)->bIsUncached == false) ||
       ((pFVar14->CascadeSettings).ShadowBoundsAccurate.Planes.ArrayNum == 0)) {
      bVar19 = true;
      this = local_280;
      goto LAB_14563b562;
    }
    pFVar26 = &(pFVar14->CascadeSettings).ShadowBoundsAccurate;
    if (((FVar25.Data <= pFVar26) && (pFVar26 < FVar25.Data + local_288._4_4_)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (iVar21 == local_288._4_4_) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
                         (0x200,0x10,&local_290,(int *)((longlong)&local_288 + 4));
      FVar25.Data = local_290.Data;
    }
    lVar22 = (longlong)iVar21;
    iVar21 = iVar21 + 1;
    local_288 = CONCAT44(local_288._4_4_,iVar21);
    FConvexVolume::FConvexVolume(FVar25.Data + lVar22,pFVar26);
    pFVar30 = pFVar30 + 1;
    this = local_280;
  } while( true );
}

// PostSetupDebugRender @ 14563bef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FShadowSceneRenderer::PostSetupDebugRender(FShadowSceneRenderer *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FVirtualShadowMapPerLightCacheEntry *pFVar4;
  FLightSceneProxy *pFVar5;
  FName FVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FSceneView *pFVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_DistantLightCount> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_DistantCachedCount> FVar18;
  ulonglong uVar19;
  FSceneView *pFVar20;
  FLocalLightShadowFrameSetup *pFVar21;
  int iVar22;
  FLocalLightShadowFrameSetup *pFVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStackY_208 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FName local_1a0;
  FLinearColor_u_0 local_198;
  uint local_188;
  FDeferredShadingSceneRenderer *local_180;
  FSceneView *local_178;
  FName local_170;
  FName local_168;
  FStatMessage local_160;
  FStatMessage local_150;
  TVector<double>_u_0 local_140;
  FPrimitiveDrawInterface local_128;
  FSceneView *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  FName local_f8;
  FName local_f0;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  fVar10 = __real_3f4ccccd;
  fVar9 = __real_42652ee0;
  fVar8 = __real_3b808081;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_180 = this->SceneRenderer;
  if (((*(uint *)&local_180->field_0x118 & 0x1000) != 0) &&
     (this->VirtualShadowMapArray->bEnabled != false)) {
    local_188 = *(uint *)&local_180->field_0x18;
    uVar19 = (ulonglong)(int)local_188;
    pFVar20 = *(FSceneView **)&local_180->field_0x10;
    iVar22 = 0;
    iVar24 = 0;
    local_178 = (FSceneView *)(uVar19 * 0x2970 + (longlong)pFVar20);
    while( true ) {
      pFVar11 = local_178;
      local_1a0 = (FName)pFVar20;
      if (*(int *)&local_180->field_0x18 != (int)uVar19) {
        local_1a8 = 0;
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1a8);
      }
      if (pFVar20 == pFVar11) break;
      iVar2 = (this->LocalLights).ArrayNum;
      pFVar21 = (this->LocalLights).AllocatorInstance.Data;
      pFVar23 = pFVar21 + iVar2;
      local_128._padding_ = (longlong)&___7FViewElementPDI__6B_;
      local_110 = (undefined8 *)0x0;
      uStack_108 = 0;
      local_100 = 0;
      local_128.View = pFVar20;
      local_118 = pFVar20;
      while( true ) {
        if ((this->LocalLights).ArrayNum != iVar2) {
          local_1a7[0] = 0;
          `TCheckedPointerIterator<FShadowSceneRenderer::FLocalLightShadowFrameSetup,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_1a7);
        }
        if (pFVar21 == pFVar23) break;
        local_198._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
        local_198._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
        local_198._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
        pFVar4 = (pFVar21->PerLightCacheEntry).Object;
        local_198._s_0.A = (float)FColor::Blue.field0_0x0._3_1_ * fVar8;
        if ((pFVar4 != (FVirtualShadowMapPerLightCacheEntry *)0x0) &&
           (pFVar4->bIsDistantLight != false)) {
          iVar24 = iVar24 + 1;
          iVar3 = pFVar4->ScheduledFrameNumber;
          iVar13 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
          fVar38 = (float)(iVar13 - iVar3) / (float)(this->LocalLights).ArrayNum;
          if (fVar10 <= fVar38) {
            fVar38 = fVar10;
          }
          if (((pFVar21->PerLightCacheEntry).Object == (FVirtualShadowMapPerLightCacheEntry *)0x0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (pFVar21->PerLightCacheEntry).Object;
          if ((pFVar4->bIsDistantLight == false) || (pFVar4->RenderedFrameNumber < 0)) {
            local_198._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.R];
            local_198._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.G];
            local_198._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Purple.field0_0x0._s_0.B];
          }
          else {
            iVar22 = iVar22 + 1;
            fVar29 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
            in_XMM2 = ZEXT416((uint)fVar29);
            local_198._s_0.R =
                 (FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R] -
                 FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R]) * fVar38 +
                 FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
            local_198._s_0.G =
                 (FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G] - fVar29) * fVar38
                 + fVar29;
            local_198._s_0.B =
                 (FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B] -
                 FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B]) * fVar38 +
                 FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
          }
        }
        local_198._s_0.A = 1.0;
        pFVar5 = pFVar21->LightSceneInfo->Proxy;
        if (pFVar5->LightType == '\x02') {
          UE::Math::TTransform<double>::SetFromMatrix(&local_e8,&pFVar5->LightToWorld);
          local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          dVar33 = local_e8.Rotation.XY.m128d_f64[0] * local_e8.Rotation.XY.m128d_f64[0] +
                   local_e8.Rotation.ZW.m128d_f64[0] * local_e8.Rotation.ZW.m128d_f64[0];
          dVar36 = local_e8.Rotation.XY.m128d_f64[1] * local_e8.Rotation.XY.m128d_f64[1] +
                   local_e8.Rotation.ZW.m128d_f64[1] * local_e8.Rotation.ZW.m128d_f64[1];
          auVar37._8_4_ = SUB84(dVar36,0);
          auVar37._0_8_ = dVar33;
          auVar37._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          auVar30._0_8_ = auVar37._8_8_ + dVar33;
          auVar30._8_8_ = dVar33 + dVar36;
          uVar25 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar30._0_8_);
          uVar27 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar30._8_8_);
          auVar37 = sqrtpd(in_XMM2,auVar30);
          uVar26 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar30._0_8_);
          uVar28 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar30._8_8_);
          auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
          auVar32._0_8_ = (ulonglong)(auVar31._0_8_ * local_e8.Rotation.XY.m128d_f64[0]) & uVar25;
          uVar19 = uVar27 & (ulonglong)(auVar31._8_8_ * local_e8.Rotation.XY.m128d_f64[1]);
          auVar32._8_4_ = (undefined4)uVar19;
          auVar32._12_4_ = (undefined4)(uVar19 >> 0x20);
          auVar34._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar34._4_4_ =
               ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar34._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar34._12_4_ =
               ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          local_e8.Rotation.XY.m128d_f64 = (double  [2])(auVar32 | auVar34);
          auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
          auVar35._0_8_ = uVar26 & (ulonglong)(auVar31._0_8_ * local_e8.Rotation.ZW.m128d_f64[0]);
          uVar19 = uVar28 & (ulonglong)(auVar31._8_8_ * local_e8.Rotation.ZW.m128d_f64[1]);
          auVar35._8_4_ = (undefined4)uVar19;
          auVar35._12_4_ = (undefined4)(uVar19 >> 0x20);
          auVar31._4_4_ =
               ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar31._0_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar31._8_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar31._12_4_ =
               ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_e8.Rotation.ZW.m128d_f64 = (double  [2])(auVar35 | auVar31);
          fVar38 = (float)(**(code **)(pFVar21->LightSceneInfo->Proxy->_padding_ + 0x20))();
          fVar29 = (float)(**(code **)(pFVar21->LightSceneInfo->Proxy->_padding_ + 0x18))();
          in_XMM2._0_8_ = (double)fVar29;
          in_XMM2._8_8_ = 0;
          DrawWireSphereCappedCone
                    (&local_128,&local_e8,in_XMM2._0_8_,(double)(fVar38 * fVar9),0x10,4,8,
                     (FLinearColor *)&local_198._s_0,'\0');
          pFVar21 = pFVar21 + 1;
        }
        else {
          fVar38 = (float)(**(code **)(pFVar5->_padding_ + 0x18))();
          pFVar5 = pFVar21->LightSceneInfo->Proxy;
          local_140._s_0.X = (pFVar5->LightToWorld).M[3][0];
          local_140._s_0.Y = (pFVar5->LightToWorld).M[3][1];
          local_140._s_0.Z = (pFVar5->LightToWorld).M[3][2];
          in_XMM2._8_8_ = 0;
          in_XMM2._0_8_ = local_140._s_0.Z;
          DrawWireSphereAutoSides
                    (&local_128,(TVector<double> *)&local_140._s_0,(FLinearColor *)&local_198._s_0,
                     (double)fVar38,'\0',0.0,0.0,false);
          pFVar21 = pFVar21 + 1;
        }
      }
      if (local_110 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_110 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_110)(local_110,1);
        }
      }
      pFVar20 = (FSceneView *)
                ((((FSceneView *)((longlong)local_1a0 + 0x1c30))->ProjectionMatrixUnadjustedForRHI).
                 M + 1);
      uVar19 = (ulonglong)local_188;
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar15 = StatPtr_STAT_DistantLightCount;
      if (StatPtr_STAT_DistantLightCount == (FThreadSafeStaticStat<FStat_STAT_DistantLightCount>)0x0
         ) {
        pFVar14 = ::FName::FName(&local_f8,"STAT_DistantLightCount");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_DistantLightCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DistantLightCount,*pFVar14,
                            L"Distant Light Count","STATGROUP_ShadowRendering","STATCAT_Advanced",
                            L"Shadow Rendering",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar6 = *(FName *)FVar15;
      local_1a0 = FVar6;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar16 == (FThreadStats *)0x0) {
          pFVar17 = FThreadStatsPool::Get();
          pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
        }
        local_160.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
        local_170 = FVar6;
        local_160.StatData.Pad = (uchar  [8])(longlong)iVar24;
        local_160.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar16,&local_160);
        FStatsTrace::Set(&local_170,(longlong)iVar24);
        if (pFVar16->ScopeCount == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar18 = StatPtr_STAT_DistantCachedCount;
        if (StatPtr_STAT_DistantCachedCount ==
            (FThreadSafeStaticStat<FStat_STAT_DistantCachedCount>)0x0) {
          pFVar14 = ::FName::FName(&local_f0,"STAT_DistantCachedCount");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_DistantCachedCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DistantCachedCount,*pFVar14
                              ,L"Distant Cached Count","STATGROUP_ShadowRendering",
                              "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar6 = *(FName *)FVar18;
        if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_1a0 = FVar6;
          pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar16 == (FThreadStats *)0x0) {
            pFVar17 = FThreadStatsPool::Get();
            pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
          }
          local_150.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
          local_168 = FVar6;
          local_150.StatData.Pad = (uchar  [8])(longlong)iVar22;
          local_150.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar16,&local_150);
          FStatsTrace::Set(&local_168,(longlong)iVar22);
          if (pFVar16->ScopeCount == 0) {
            FThreadStats::Flush(pFVar16,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar16,false,false);
          }
        }
      }
    }
  }
  return;
}

// PreInitViews @ 14563c680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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

void __thiscall FShadowSceneRenderer::PreInitViews(FShadowSceneRenderer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  TArray<FShadowSceneRenderer::FViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  atomic<unsigned_int> aVar4;
  double dVar5;
  double dVar6;
  FLightCommonFrameSetup *pFVar7;
  FDirectionalLightShadowFrameSetup *pFVar8;
  FDeferredShadingSceneRenderer *pFVar9;
  FViewData *pFVar10;
  FTaskBase *pFVar11;
  code *pcVar12;
  float fVar13;
  TConsoleVariableData<int> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  FTaskBase *pFVar23;
  longlong lVar24;
  uint uVar25;
  double *pdVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  uint uVar30;
  FTaskHandle *pFVar31;
  float fVar32;
  float fVar33;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b0 [16];
  FScriptContainerElement *local_a0;
  FTaskHandle *local_98;
  undefined8 local_90;
  FPipe local_88;
  
  pFVar23 = (this->ShadowScene->SceneChangeUpdateTask).Pimpl.Reference;
  if (pFVar23 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar23);
  }
  piVar1 = &(this->CommonSetups).ArrayNum;
  iVar21 = *piVar1;
  uVar30 = *(uint *)&(this->ShadowScene->LightsCommonData).field_0x8;
  if (iVar21 < (int)uVar30) {
    iVar19 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_>
                       (4,4,uVar30 - iVar21,&(this->CommonSetups).AllocatorInstance,piVar1,
                        &(this->CommonSetups).ArrayMax);
    memset((this->CommonSetups).AllocatorInstance.Data + iVar19,0,
           (longlong)(int)(uVar30 - iVar21) << 2);
  }
  else {
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if ((int)uVar30 < iVar21) {
      uVar27 = iVar21 - uVar30;
      if (((int)(uVar27 | uVar30) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar27 != 0) {
        pFVar7 = (this->CommonSetups).AllocatorInstance.Data + (int)uVar30;
        iVar21 = (*piVar1 - uVar27) - uVar30;
        if (iVar21 != 0) {
          memmove(pFVar7,pFVar7 + (int)uVar27,(longlong)iVar21 << 2);
        }
        *piVar1 = *piVar1 - uVar27;
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FLightCommonFrameSetup>_>
                  (4,4,&(this->CommonSetups).AllocatorInstance,*piVar1,
                   &(this->CommonSetups).ArrayMax);
      }
    }
  }
  if ((*(int *)&this->SceneRenderer->field_0x18 == 2) &&
     (bVar17 = IStereoRendering::IsASecondaryView
                         ((FSceneView *)(*(longlong *)&this->SceneRenderer->field_0x10 + 0x2970)),
     bVar17)) {
    bVar17 = true;
    uVar30 = 1;
  }
  else {
    bVar17 = false;
    uVar30 = *(uint *)&this->SceneRenderer->field_0x18;
  }
  uVar27 = uVar30 * (this->ShadowScene->DirectionalLights).ArrayNum;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  piVar1 = &(this->DirectionalLights).ArrayMax;
  if (*piVar1 < (int)uVar27) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_>
              (0x38,8,uVar27,&(this->DirectionalLights).AllocatorInstance,
               (this->DirectionalLights).ArrayNum,piVar1);
  }
  local_b0._8_8_ = this->ShadowScene;
  uVar27 = (((FShadowScene *)local_b0._8_8_)->DirectionalLights).ArrayNum;
  uVar22 = (ulonglong)(int)uVar27;
  pFVar28 = (((FShadowScene *)local_b0._8_8_)->DirectionalLights).AllocatorInstance.Data;
  local_a0 = pFVar28 + uVar22 * 4;
  while( true ) {
    pFVar16 = local_a0;
    if (((TArray<FShadowScene::FDirectionalLightData,TSizedDefaultAllocator<32>_> *)
        (local_b0._8_8_ + 0x48))->ArrayNum != (int)uVar22) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FShadowScene::FDirectionalLightData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar28 == pFVar16) break;
    uVar25 = *(uint *)pFVar28;
    uVar20 = 0;
    if ((int)uVar25 < (this->CommonSetups).ArrayNum) {
      uVar20 = ~uVar25 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar7 = (this->CommonSetups).AllocatorInstance.Data;
    pFVar7[(int)uVar25].bIsDirectional = 1;
    pFVar7[(int)uVar25] =
         (FLightCommonFrameSetup)
         ((this->DirectionalLights).ArrayNum << 2 | (uint)pFVar7[(int)uVar25] & 3);
    if (bVar17) {
      iVar21 = (this->DirectionalLights).ArrayNum;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_>
                           (0x838,&(this->DirectionalLights).AllocatorInstance,piVar1);
      }
      (this->DirectionalLights).ArrayNum = iVar21 + 1;
      pFVar8 = (this->DirectionalLights).AllocatorInstance.Data;
      pFVar8[iVar21].LightId = *(uint *)pFVar28;
      pFVar8[iVar21].ViewMask = 3;
      pFVar8[iVar21].ClipmapInfos.Elements[0].Clipmap.Object = (FVirtualShadowMapClipmap *)0x0;
      pFVar8[iVar21].ClipmapInfos.Elements[0].Clipmap.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar8[iVar21].ClipmapInfos.Elements[0].ProjectedShadowInfo = (FProjectedShadowInfo *)0x0;
      pFVar8[iVar21].ClipmapInfos.Elements[1].Clipmap.Object = (FVirtualShadowMapClipmap *)0x0;
      pFVar8[iVar21].ClipmapInfos.Elements[1].Clipmap.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar8[iVar21].ClipmapInfos.Elements[1].ProjectedShadowInfo = (FProjectedShadowInfo *)0x0;
      if ((*(int *)&this->SceneRenderer->field_0x18 != 2) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneRenderer.Views.Num() == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                              ,0xc9,L""), bVar18)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else if (0 < (int)uVar30) {
      uVar25 = 1;
      uVar22 = (ulonglong)uVar30;
      do {
        iVar21 = (this->DirectionalLights).ArrayNum;
        if (iVar21 == *piVar1) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup>_>
                             (0x838,&(this->DirectionalLights).AllocatorInstance,piVar1);
        }
        (this->DirectionalLights).ArrayNum = iVar21 + 1;
        pFVar8 = (this->DirectionalLights).AllocatorInstance.Data;
        uVar20 = *(uint *)pFVar28;
        pFVar8[iVar21].ViewMask = uVar25;
        pFVar8[iVar21].LightId = uVar20;
        pFVar8[iVar21].ClipmapInfos.Elements[0].Clipmap.Object = (FVirtualShadowMapClipmap *)0x0;
        pFVar8[iVar21].ClipmapInfos.Elements[0].Clipmap.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar8[iVar21].ClipmapInfos.Elements[0].ProjectedShadowInfo = (FProjectedShadowInfo *)0x0;
        pFVar8[iVar21].ClipmapInfos.Elements[1].Clipmap.Object = (FVirtualShadowMapClipmap *)0x0;
        uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
        pFVar8[iVar21].ClipmapInfos.Elements[1].Clipmap.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar8[iVar21].ClipmapInfos.Elements[1].ProjectedShadowInfo = (FProjectedShadowInfo *)0x0;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    pFVar28 = pFVar28 + 4;
    uVar22 = (ulonglong)uVar27;
  }
  pTVar3 = &this->ViewDatas;
  this->bNeedVSMOnePassProjection = false;
  this->bNeedMegaLightsProjection = false;
  uVar30 = *(uint *)&this->SceneRenderer->field_0x18;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  piVar1 = &(this->ViewDatas).ArrayMax;
  if (*piVar1 < (int)uVar30) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_>
              (8,4,uVar30,&pTVar3->AllocatorInstance,(this->ViewDatas).ArrayNum,piVar1);
  }
  fVar13 = __real_40000000;
  pFVar9 = this->SceneRenderer;
  lVar24 = *(longlong *)&pFVar9->field_0x10;
  iVar21 = *(int *)&pFVar9->field_0x18;
  pdVar26 = (double *)(lVar24 + 0x3d8);
  lVar29 = (longlong)iVar21 * 0x2970 + lVar24;
  while( true ) {
    if (*(int *)&pFVar9->field_0x18 != iVar21) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (lVar24 == lVar29) break;
    iVar19 = (this->ViewDatas).ArrayNum;
    fVar33 = fVar13 / ((float)(*(int *)(pdVar26 + 0x30c) - *(int *)(pdVar26 + 0x30b)) *
                      (float)pdVar26[-5]);
    fVar32 = fVar13 / ((float)(*(int *)((longlong)pdVar26 + 0x1864) -
                              *(int *)((longlong)pdVar26 + 0x185c)) * (float)*pdVar26);
    if (fVar32 <= fVar33) {
      fVar33 = fVar32;
    }
    dVar5 = pdVar26[10];
    dVar6 = pdVar26[6];
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FShadowSceneRenderer::FViewData>_>
                         (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    lVar24 = lVar24 + 0x2970;
    (this->ViewDatas).ArrayNum = iVar19 + 1;
    pdVar26 = pdVar26 + 0x52e;
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    pFVar10[iVar19].ClipToViewSizeScale = (float)((double)fVar33 * dVar6);
    pFVar10[iVar19].ClipToViewSizeBias = (float)((double)fVar33 * dVar5);
  }
  FShadowScene::UpdateForRenderedFrame(this->ShadowScene,param_1);
  pTVar14 = CVarMaxDistantLightsPerFrame.Ref;
  bVar17 = IsInParallelRenderingThread();
  pFVar23 = (FTaskBase *)0x0;
  if ((!bVar17) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar15 = CVarMaxDistantLightsPerFrame.Ref;
  if (pTVar14->ShadowedValue[1] < 0) {
    iVar21 = 0x7fffffff;
  }
  else {
    bVar17 = IsInParallelRenderingThread();
    if ((!bVar17) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar21 = pTVar15->ShadowedValue[1];
    if (iVar21 == 0) {
      return;
    }
  }
  if ((this->VirtualShadowMapArray->bEnabled != false) &&
     (bVar17 = FVirtualShadowMapArrayCacheManager::IsCacheEnabled
                         (this->VirtualShadowMapArray->CacheManager), bVar17)) {
    local_98 = (FTaskHandle *)0x0;
    local_90 = 0;
    local_88.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
    local_88.TaskCount._0_4_ = iVar21;
    FRDGBuilder::
    AddSetupTask<_FShadowSceneRenderer::PreInitViews_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,(<lambda_1> *)local_b0,&local_88,
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (ETaskPriority)&local_98,true,Execute);
    pFVar31 = local_98;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_98,(int)local_90);
    if (pFVar31 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = &this->RendererSetupTask;
    if (pFVar31 != (FTaskHandle *)local_b0) {
      pFVar11 = (pFVar31->Pimpl).Reference;
      (pFVar31->Pimpl).Reference = (FTaskBase *)local_b0._0_8_;
      local_b0._0_8_ = pFVar23;
      if (pFVar11 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar11->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar11->_padding_)(pFVar11,1);
        }
      }
    }
    if ((FTaskBase *)local_b0._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &((FTaskBase *)local_b0._0_8_)->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_b0._0_8_)->_padding_)(local_b0._0_8_,1);
      }
    }
  }
  return;
}

// RenderVirtualShadowMapProjection @ 145641d10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::RenderVirtualShadowMapProjection
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2,
          int param_3,FViewInfo *param_4,int param_5,TIntRect<int> *param_6,
          EVirtualShadowMapProjectionInputType param_7,bool param_8,FTiledVSMProjection *param_9,
          FRDGTexture *param_10)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDirectionalLightShadowFrameSetup *pFVar4;
  FDirectionalLightShadowFrameSetup *pFVar5;
  undefined1 local_res8 [8];
  TIntRect<int>_u_0 local_38;
  
  iVar1 = (this->DirectionalLights).ArrayNum;
  pFVar4 = (this->DirectionalLights).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->DirectionalLights).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShadowSceneRenderer::FDirectionalLightShadowFrameSetup,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if ((param_3 == pFVar4->LightId) && ((pFVar4->ViewMask >> (param_5 & 0x1fU) & 1) != 0)) {
      local_38._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_6->field0_0x0)._s_0.Min.field0_0x0;
      local_38._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_6->field0_0x0)._s_0.Max.field0_0x0;
      ::RenderVirtualShadowMapProjection
                (param_1,param_2,param_4,param_5,this->VirtualShadowMapArray,
                 (TIntRect<int> *)&local_38._s_0,GBuffer,
                 (TSharedPtr<FVirtualShadowMapClipmap,1> *)&pFVar4->ClipmapInfos,true,param_9,
                 param_10,&(pFVar4->ClipmapInfos).Elements[1].Clipmap);
      return;
    }
    pFVar4 = pFVar4 + 1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                     ,0x148,L"");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RenderVirtualShadowMapProjectionMaskBits @ 145641e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::RenderVirtualShadowMapProjectionMaskBits
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2)

{
  char cVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  FRDGScope *pFVar8;
  FRDGTexture *pFVar9;
  FDeferredShadingSceneRenderer *pFVar10;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar11;
  FHairStrandsTransmittanceMaskData FVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  FDeferredShadingSceneRenderer **ppFVar17;
  FViewInfo *pFVar18;
  uint local_res8 [2];
  TRDGEventScopeGuard<FRDGScope_RHI> local_b8;
  undefined1 local_a8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a0;
  char local_90;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35>_const_*,std::tuple<>_> local_78;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  pTVar3 = CVarVirtualShadowOnePassProjection.Ref;
  uVar15 = 0;
  if ((this->VirtualShadowMapArray->PhysicalPagePoolRDG != (FRDGTexture *)0x0) &&
     (this->VirtualShadowMapArray->PageTableRDG != (FRDGTexture *)0x0)) {
    pFVar10 = this->SceneRenderer;
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_145641ebc:
      uVar7 = uVar15;
    }
    else {
      bVar4 = IsInGameThread();
      uVar7 = 4;
      if (bVar4) goto LAB_145641ebc;
    }
    if (((*(int *)((longlong)pTVar3->ShadowedValue + uVar7) != 0) &&
        (-1 < *(int *)&pFVar10->field_0x100)) && (this->bNeedVSMOnePassProjection != false)) {
      bVar4 = true;
      goto LAB_145641ee1;
    }
  }
  bVar4 = false;
LAB_145641ee1:
  ppFVar17 = &this->SceneRenderer;
  this->bShouldUseVirtualShadowMapOnePassProjection = bVar4;
  if (bVar4 == false) {
    this->VirtualShadowMapMaskBits = (FRDGTexture *)0x0;
    this->VirtualShadowMapMaskBitsHairStrands = (FRDGTexture *)0x0;
    this->HairTransmittanceMaskBits = (FRDGBuffer *)0x0;
  }
  else {
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar16 = '\0';
    local_90 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_58 = 0;
        uStack_54 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_5c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
        ::Desc._padding_ = (longlong)::u_VirtualShadowMa;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x3b6;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FShadowSceneRenderer::RenderVirtualShadowMapProjectionMaskBits'::__l10::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_78._Myfirst._Val = &::Desc;
      local_a0.State = (FRDGScopeState *)param_1;
      pFVar8 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                         ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar8;
      local_a0.Scope = pFVar8;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35>_const_*,std::tuple<>_>_>
                (&(pFVar8->Impl).Impl,(FRDGScopeState *)param_1,&local_78);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar16 = '\x01';
      local_90 = '\x01';
    }
    pFVar9 = CreateVirtualShadowMapMaskBits
                       (param_1,param_2,this->VirtualShadowMapArray,L"Shadow.Virtual.MaskBits");
    this->VirtualShadowMapMaskBits = pFVar9;
    pFVar9 = CreateVirtualShadowMapMaskBits
                       (param_1,param_2,this->VirtualShadowMapArray,
                        L"Shadow.Virtual.MaskBits(HairStrands)");
    this->VirtualShadowMapMaskBitsHairStrands = pFVar9;
    pFVar10 = *ppFVar17;
    local_res8[0] = 0;
    if (0 < *(int *)&pFVar10->field_0x18) {
      do {
        uVar13 = (uint)uVar15;
        local_a8 = 0;
        bVar4 = false;
        if (((1 < *(int *)&pFVar10->field_0x18) &&
            (cVar1 = *(char *)((longlong)&param_1->_padding_ + 6), cVar1 != '\0')) &&
           ((cVar1 != '\x01' || (bVar4 = false, (param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_38 = 0;
            uStack_34 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_3c);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_._0_4_ = 0x3bd;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_ = (longlong)u_View_d;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FShadowSceneRenderer::RenderVirtualShadowMapProjectionMaskBits'::__l17::
                   <lambda_2>::operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_88._padding_ = (longlong)local_res8;
          local_88._Myfirst._Val = &::Desc;
          local_b8.State = (FRDGScopeState *)param_1;
          pFVar8 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                             ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar8;
          uVar15 = (ulonglong)(pFVar8->Impl).Impl.TypeIndex;
          local_b8.Scope = pFVar8;
          if ((3 < uVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar15])(&pFVar8->Impl);
          this_00 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar11 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                              (this_00,&local_88);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar8->Impl,(FRDGScopeState *)param_1,pFVar11);
          (pFVar8->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar8,(FRHIComputeCommandList *)param_1->_padding_);
          }
          bVar4 = true;
          local_a8 = 1;
          uVar13 = local_res8[0];
        }
        pFVar10 = *ppFVar17;
        uVar6 = 0;
        if ((int)uVar13 < *(int *)&pFVar10->field_0x18) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        uVar14 = uVar13;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar14 = local_res8[0], bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar18 = (FViewInfo *)((longlong)(int)uVar13 * 0x2970 + *(longlong *)&pFVar10->field_0x10);
        RenderVirtualShadowMapProjectionOnePass
                  (param_1,param_2,pFVar18,uVar14,this->VirtualShadowMapArray,GBuffer,
                   this->VirtualShadowMapMaskBits);
        bVar5 = HairStrands::HasViewHairStrandsData(pFVar18);
        if (bVar5) {
          RenderVirtualShadowMapProjectionOnePass
                    (param_1,param_2,pFVar18,local_res8[0],this->VirtualShadowMapArray,HairStrands,
                     this->VirtualShadowMapMaskBitsHairStrands);
          FVar12 = RenderHairStrandsOnePassTransmittanceMask
                             (param_1,pFVar18,local_res8[0],
                              this->VirtualShadowMapMaskBitsHairStrands,this->VirtualShadowMapArray)
          ;
          this->HairTransmittanceMaskBits = FVar12.TransmittanceMask;
        }
        if (bVar4) {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_b8);
        }
        pFVar10 = *ppFVar17;
        local_res8[0] = local_res8[0] + 1;
        uVar15 = (ulonglong)local_res8[0];
        cVar16 = local_90;
      } while ((int)local_res8[0] < *(int *)&pFVar10->field_0x18);
    }
    if (cVar16 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a0);
    }
  }
  return;
}

// RenderVirtualShadowMaps @ 1456423a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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

void __thiscall
FShadowSceneRenderer::RenderVirtualShadowMaps
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,bool param_2,bool param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FVirtualShadowMapArray *pFVar3;
  FDeferredShadingSceneRenderer *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FTaskHandle FVar9;
  TArrayView<FViewInfo,int> *pTVar10;
  int iVar11;
  bool bVar12;
  atomic<UE::Tasks::Private::FTaskBase_*> local_res8;
  TArrayView<FViewInfo,int> local_38;
  undefined1 local_28 [16];
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId774,"FShadowSceneRenderer::RenderVirtualShadowMaps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
               ,0x306);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId774);
  }
  if (this->NaniteVisibilityQuery != (FNaniteVisibilityQuery *)0x0) {
    FVar9 = Nanite::GetVisibilityTask((FNaniteVisibilityQuery *)local_28);
    local_res8 = (atomic<UE::Tasks::Private::FTaskBase_*>)this->NaniteVisibilityQuery;
    FRDGBuilder::
    AddSetupTask<_FShadowSceneRenderer::RenderVirtualShadowMaps_::__l5::<lambda_1>,UE::Tasks::Private::FTaskHandle>
              (param_1,(<lambda_1> *)&local_38,(FPipe *)&stack0x00000008,(FTaskHandle *)0x0,
               (ETaskPriority)FVar9.Pimpl.Reference,true,Execute);
    if (local_38.DataPtr != (FViewInfo *)0x0) {
      LOCK();
      plVar5 = &(local_38.DataPtr)->_padding_;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(local_38.DataPtr)->_padding_)(local_38.DataPtr,1);
      }
    }
    if ((FTaskBase *)local_28._0_8_ != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)(local_28._0_8_ + 0x30);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (*(code *)**(undefined8 **)local_28._0_8_)(local_28._0_8_,1);
      }
    }
  }
  pFVar3 = this->VirtualShadowMapArray;
  iVar8 = pFVar3->NumShadowMapSlots + -0x2000;
  iVar11 = 0;
  if (0 < iVar8) {
    iVar11 = iVar8;
  }
  if (iVar11 + pFVar3->NumSinglePageShadowMaps != 0) {
    if ((param_2) && (iVar11 = (this->NaniteRenderPasses).ArrayNum, 0 < iVar11)) {
      local_28._0_8_ = (this->NaniteRenderPasses).AllocatorInstance.Data;
      local_28._8_4_ = iVar11;
      FVirtualShadowMapArray::RenderVirtualShadowMapsNanite
                (pFVar3,param_1,(FSceneRenderer *)this->SceneRenderer,param_3,
                 this->NaniteVisibilityQuery,
                 (TArrayView<FNaniteVirtualShadowMapRenderPass_const_,int> *)local_28);
    }
    bVar7 = UseNonNaniteVirtualShadowMaps
                      (*(EShaderPlatform *)&this->SceneRenderer->field_0xadc,
                       (FGenericStaticFeatureLevel)*(Type *)&this->SceneRenderer->field_0xad8);
    if (bVar7) {
      pFVar4 = this->SceneRenderer;
      pFVar3 = this->VirtualShadowMapArray;
      pTVar10 = TArrayView<FViewInfo,int>::
                TArrayView<FViewInfo,int><TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_>
                          (&local_38,
                           (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)&pFVar4->field_0x10);
      local_28._0_8_ = pTVar10->DataPtr;
      local_28._8_8_ = *(undefined8 *)&pTVar10->ArrayNum;
      FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite
                (pFVar3,param_1,(FSceneUniformBuffer *)&this->SceneRenderer->field_0x20,
                 (TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                  *)&pFVar4->field_0x6d0,(TArrayView<FViewInfo,int> *)local_28);
    }
    FVirtualShadowMapArray::PostRender(this->VirtualShadowMapArray,param_1);
  }
  if (!bVar12) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RenderVirtualShadowMaps @ 1456425d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FShadowSceneRenderer::RenderVirtualShadowMaps
          (FShadowSceneRenderer *this,FRDGBuilder *param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FVirtualShadowMapArray *this_00;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  TArrayView<FViewInfo_const_,int> local_28;
  
  this_00 = this->VirtualShadowMapArray;
  if (this_00->bEnabled != false) {
    local_28.DataPtr = *(FViewInfo **)&this->SceneRenderer->field_0x10;
    iVar2 = *(int *)&this->SceneRenderer->field_0x18;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = &this->SceneRenderer->field_0x3d8;
    local_28.ArrayNum = iVar2;
    if (((this->SceneRenderer->field_0x180 == '\0') || (*(char *)(*(longlong *)puVar1 + 8) == '\0'))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                              ,0x7c0,
                              L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVirtualShadowMapArray::BuildPageAllocations
              (this_00,param_1,*(FMinimalSceneTextures **)puVar1,&local_28);
    pTVar4 = CVarNaniteShadowsUpdateStreaming.Ref;
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RenderVirtualShadowMaps(this,param_1,param_2,pTVar4->ShadowedValue[1] != 0);
  }
  return;
}

// UpdateLocalLightProjectionShaderDataMatrices @ 14564aec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FShadowSceneRenderer::UpdateLocalLightProjectionShaderDataMatrices
          (FShadowSceneRenderer *this,FProjectedShadowInfo *param_1,int param_2,
          FVirtualShadowMapProjectionShaderData *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TMatrix<double> *pTVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_9a8 [32];
  TMatrix<double> local_988;
  FViewMatrices local_908;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_9a8;
  FProjectedShadowInfo::GetShadowDepthRenderingViewMatrices(param_1,&local_908,param_2,true);
  dVar1 = (param_1->PreShadowTranslation).field0_0x0._s_0.X;
  dVar2 = (param_1->PreShadowTranslation).field0_0x0._s_0.Z;
  dVar3 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
  fVar21 = (float)dVar1;
  fVar22 = (float)dVar2;
  fVar20 = (float)dVar3;
  (param_3->ShadowViewToClipMatrix).M[0][0] = (float)local_908.ProjectionMatrix.M[0][0];
  (param_3->ShadowViewToClipMatrix).M[0][1] = (float)local_908.ProjectionMatrix.M[0][1];
  (param_3->ShadowViewToClipMatrix).M[0][2] = (float)local_908.ProjectionMatrix.M[0][2];
  (param_3->ShadowViewToClipMatrix).M[0][3] = (float)local_908.ProjectionMatrix.M[0][3];
  (param_3->ShadowViewToClipMatrix).M[1][0] = (float)local_908.ProjectionMatrix.M[1][0];
  (param_3->ShadowViewToClipMatrix).M[1][1] = (float)local_908.ProjectionMatrix.M[1][1];
  (param_3->ShadowViewToClipMatrix).M[1][2] = (float)local_908.ProjectionMatrix.M[1][2];
  (param_3->ShadowViewToClipMatrix).M[1][3] = (float)local_908.ProjectionMatrix.M[1][3];
  (param_3->ShadowViewToClipMatrix).M[2][0] = (float)local_908.ProjectionMatrix.M[2][0];
  (param_3->ShadowViewToClipMatrix).M[2][1] = (float)local_908.ProjectionMatrix.M[2][1];
  (param_3->ShadowViewToClipMatrix).M[2][2] = (float)local_908.ProjectionMatrix.M[2][2];
  (param_3->ShadowViewToClipMatrix).M[2][3] = (float)local_908.ProjectionMatrix.M[2][3];
  (param_3->ShadowViewToClipMatrix).M[3][0] = (float)local_908.ProjectionMatrix.M[3][0];
  (param_3->ShadowViewToClipMatrix).M[3][1] = (float)local_908.ProjectionMatrix.M[3][1];
  (param_3->ShadowViewToClipMatrix).M[3][2] = (float)local_908.ProjectionMatrix.M[3][2];
  (param_3->ShadowViewToClipMatrix).M[3][3] = (float)local_908.ProjectionMatrix.M[3][3];
  pTVar19 = CalcTranslatedWorldToShadowUVMatrix
                      (&local_988,&local_908.TranslatedViewMatrix,&local_908.ProjectionMatrix);
  dVar4 = pTVar19->M[1][2];
  dVar5 = pTVar19->M[1][3];
  dVar6 = pTVar19->M[1][0];
  dVar7 = pTVar19->M[1][1];
  dVar8 = pTVar19->M[2][2];
  dVar9 = pTVar19->M[2][3];
  dVar10 = pTVar19->M[2][0];
  dVar11 = pTVar19->M[2][1];
  dVar12 = pTVar19->M[3][2];
  dVar13 = pTVar19->M[3][3];
  dVar14 = pTVar19->M[3][0];
  dVar15 = pTVar19->M[3][1];
  dVar16 = pTVar19->M[0][2];
  dVar17 = pTVar19->M[0][3];
  dVar18 = pTVar19->M[0][1];
  (param_3->TranslatedWorldToShadowUVMatrix).M[0][0] = (float)pTVar19->M[0][0];
  (param_3->TranslatedWorldToShadowUVMatrix).M[0][1] = (float)dVar18;
  (param_3->TranslatedWorldToShadowUVMatrix).M[0][2] = (float)dVar16;
  (param_3->TranslatedWorldToShadowUVMatrix).M[0][3] = (float)dVar17;
  (param_3->TranslatedWorldToShadowUVMatrix).M[1][0] = (float)dVar6;
  (param_3->TranslatedWorldToShadowUVMatrix).M[1][1] = (float)dVar7;
  (param_3->TranslatedWorldToShadowUVMatrix).M[1][2] = (float)dVar4;
  (param_3->TranslatedWorldToShadowUVMatrix).M[1][3] = (float)dVar5;
  (param_3->TranslatedWorldToShadowUVMatrix).M[2][0] = (float)dVar10;
  (param_3->TranslatedWorldToShadowUVMatrix).M[2][1] = (float)dVar11;
  (param_3->TranslatedWorldToShadowUVMatrix).M[2][2] = (float)dVar8;
  (param_3->TranslatedWorldToShadowUVMatrix).M[2][3] = (float)dVar9;
  (param_3->TranslatedWorldToShadowUVMatrix).M[3][0] = (float)dVar14;
  (param_3->TranslatedWorldToShadowUVMatrix).M[3][1] = (float)dVar15;
  (param_3->TranslatedWorldToShadowUVMatrix).M[3][2] = (float)dVar12;
  (param_3->TranslatedWorldToShadowUVMatrix).M[3][3] = (float)dVar13;
  pTVar19 = CalcTranslatedWorldToShadowUVNormalMatrix
                      (&local_988,&local_908.TranslatedViewMatrix,&local_908.ProjectionMatrix);
  dVar4 = pTVar19->M[1][2];
  dVar5 = pTVar19->M[1][3];
  dVar6 = pTVar19->M[1][0];
  dVar7 = pTVar19->M[1][1];
  dVar8 = pTVar19->M[2][2];
  dVar9 = pTVar19->M[2][3];
  dVar10 = pTVar19->M[2][0];
  dVar11 = pTVar19->M[2][1];
  dVar12 = pTVar19->M[3][0];
  dVar13 = pTVar19->M[3][1];
  dVar14 = pTVar19->M[3][2];
  dVar15 = pTVar19->M[3][3];
  dVar16 = pTVar19->M[0][1];
  dVar17 = pTVar19->M[0][2];
  dVar18 = pTVar19->M[0][3];
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[0][0] = (float)pTVar19->M[0][0];
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[0][1] = (float)dVar16;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[0][2] = (float)dVar17;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[0][3] = (float)dVar18;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[1][0] = (float)dVar6;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[1][1] = (float)dVar7;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[1][2] = (float)dVar4;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[1][3] = (float)dVar5;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[2][0] = (float)dVar10;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[2][1] = (float)dVar11;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[2][2] = (float)dVar8;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[2][3] = (float)dVar9;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[3][0] = (float)dVar12;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[3][1] = (float)dVar13;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[3][2] = (float)dVar14;
  (param_3->TranslatedWorldToShadowUVNormalMatrix).M[3][3] = (float)dVar15;
  *(ulonglong *)&(param_3->PreViewTranslationHigh).field0_0x0 = CONCAT44(fVar20,fVar21);
  (param_3->PreViewTranslationHigh).field0_0x0._s_0.Z = fVar22;
  *(ulonglong *)&(param_3->PreViewTranslationLow).field0_0x0 =
       CONCAT44((float)(dVar3 - (double)fVar20),(float)(dVar1 - (double)fVar21));
  (param_3->PreViewTranslationLow).field0_0x0._s_0.Z = (float)(dVar2 - (double)fVar22);
  *(undefined8 *)&(param_3->LightDirection).field0_0x0 = 0;
  (param_3->LightDirection).field0_0x0._s_0.Z = 0.0;
  param_3->ClipmapLevel_ClipmapLevelCountRemaining = -1;
  return;
}

