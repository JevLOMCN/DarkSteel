// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// AddCrossGPUTransfers @ 144d532f0

/* WARNING: Removing unreachable block (ram,0x000144d5349f) */
/* WARNING: Removing unreachable block (ram,0x000144d5362d) */
/* WARNING: Removing unreachable block (ram,0x000144d534ad) */
/* WARNING: Removing unreachable block (ram,0x000144d5363b) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenViewState::AddCrossGPUTransfers
          (FLumenViewState *this,uint param_1,uint param_2,
          TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *param_3)

{
  IPooledRenderTarget *pIVar1;
  FRHITexture *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRHITexture *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FRHITexture *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pIVar1 = (this->TranslucencyVolume0).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_a8 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_a0 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_78 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = param_1;
    local_7c = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_a8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_a0;
    *(undefined8 *)(pFVar3 + 0x10) = local_98;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_90;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_88,uStack_8c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_84;
    *(uint *)(pFVar3 + 0x28) = local_80;
    *(uint *)(pFVar3 + 0x2c) = local_7c;
    pFVar3[0x30] = local_78._0_1_;
    pFVar3[0x31] = local_78._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_70;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_68;
    local_a0 = 0;
    local_a8 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->TranslucencyVolume1).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_60 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_58 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_30 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = param_1;
    local_34 = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_60;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_58;
    *(undefined8 *)(pFVar3 + 0x10) = local_50;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_48;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_40,uStack_44);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_3c;
    *(uint *)(pFVar3 + 0x28) = local_38;
    *(uint *)(pFVar3 + 0x2c) = local_34;
    pFVar3[0x30] = local_30._0_1_;
    pFVar3[0x31] = local_30._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_28;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_20;
    local_58 = 0;
    local_60 = (FRHITexture *)0x0;
  }
  FScreenProbeGatherTemporalState::AddCrossGPUTransfers
            (&this->ScreenProbeGatherState,param_1,param_2,param_3);
  FReflectionTemporalState::AddCrossGPUTransfers(&this->ReflectionState,param_1,param_2,param_3);
  FReflectionTemporalState::AddCrossGPUTransfers
            (&this->TranslucentReflectionState,param_1,param_2,param_3);
  FRadianceCacheState::AddCrossGPUTransfers(&this->RadianceCacheState,param_1,param_2,param_3);
  FRadianceCacheState::AddCrossGPUTransfers
            (&this->TranslucencyVolumeRadianceCacheState,param_1,param_2,param_3);
  return;
}

// FLumenViewState @ 1453f9c10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenViewState * __thiscall FLumenViewState::FLumenViewState(FLumenViewState *this)

{
  *(undefined8 *)
   ((longlong)
    &(this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0 + 0xc)
       = 0x3f800000;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  *(undefined8 *)
   &(this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0 = 0;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0._s_0.Z =
       0.0;
  *(undefined8 *)
   ((longlong)&(this->ScreenProbeGatherState).HistoryBufferSizeAndInvSize.field0_0x0 + 4) = 0;
  (this->ScreenProbeGatherState).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = 0.0;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryRT.Reference = (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).BackfaceDiffuseIndirectHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).RoughSpecularIndirectHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).FastUpdateMode_NumFramesAccumulatedHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ShortRangeAOHistoryRT.Reference = (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ShortRangeGIHistoryRT.Reference = (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  *(undefined8 *)&(this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0 = 0;
  (this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0._s_0.Z = 0.0;
  (this->ScreenProbeGatherState).HistoryScreenProbeSceneDepth.Reference = (IPooledRenderTarget *)0x0
  ;
  (this->ScreenProbeGatherState).HistoryScreenProbeTranslatedWorldPosition.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryScreenProbeRadiance.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ImportanceSamplingHistoryScreenProbeRadiance.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0._s_0.W = 1.0;
  FLumenGatherCvarState::FLumenGatherCvarState(&(this->ScreenProbeGatherState).LumenGatherCvars);
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0._s_0.X =
       1.0;
  *(undefined8 *)
   ((longlong)
    &(this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0 + 4) =
       0x3f800000;
  (this->ScreenProbeGatherState).DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0._s_0.W =
       0.0;
  (this->ScreenProbeGatherState).ProbeHistoryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0._s_0.X = 1.0;
  *(undefined8 *)
   ((longlong)&(this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0 + 4) =
       0x3f800000;
  (this->ScreenProbeGatherState).ProbeHistoryScreenPositionScaleBias.field0_0x0._s_0.W = 0.0;
  (this->ScreenProbeGatherState).HistoryEffectiveResolution.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScreenProbeGatherState).HistorySubstrateMaxClosureCount = 0;
  (this->ReSTIRGatherState).TemporalResamplingState.TemporalReservoirRayDirectionRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.TemporalReservoirTraceRadianceRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.TemporalReservoirTraceHitDistanceRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.TemporalReservoirTraceHitNormalRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.TemporalReservoirWeightsRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.DownsampledDepthHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.DownsampledNormalHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryScreenPositionScaleBias.field0_0x0._s_0.X
       = 1.0;
  *(undefined8 *)
   ((longlong)
    &(this->ReSTIRGatherState).TemporalResamplingState.HistoryScreenPositionScaleBias.field0_0x0 + 4
   ) = 0x3f800000;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryScreenPositionScaleBias.field0_0x0._s_0.W
       = 0.0;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryReservoirViewSize.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalResamplingState.HistoryReservoirBufferSize.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.RoughSpecularIndirectHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.ResolveVarianceHistoryRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.NumFramesAccumulatedRT.Reference =
       (IPooledRenderTarget *)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryViewRect.field0_0x0._s_0
  .Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryViewRect.field0_0x0._s_0
  .Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryScreenPositionScaleBias.
  field0_0x0._s_0.X = 1.0;
  *(undefined8 *)
   ((longlong)
    &(this->ReSTIRGatherState).TemporalAccumulationState.
     DiffuseIndirectHistoryScreenPositionScaleBias.field0_0x0 + 4) = 0x3f800000;
  (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryScreenPositionScaleBias.
  field0_0x0._s_0.W = 0.0;
  (this->ReflectionState).SpecularAndSecondMomentHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionState).NumFramesAccumulatedHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionState).LayerSceneDepthHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->ReflectionState).LayerSceneNormalHistory.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->ReflectionState).HistoryFrameIndex = 0;
  *(undefined8 *)
   ((longlong)&(this->ReflectionState).HistoryViewRect.field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->ReflectionState).HistoryViewRect.field0_0x0 + 0xc) = 0;
  (this->ReflectionState).HistoryScreenPositionScaleBias.field0_0x0._s_0.X = 1.0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 4)
       = 0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->ReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryUVMinMax.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryGatherUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryGatherUVMinMax.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->ReflectionState).HistoryBufferSizeAndInvSize.field0_0x0 + 4) = 0
  ;
  (this->ReflectionState).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = 0.0;
  (this->TranslucentReflectionState).SpecularAndSecondMomentHistory.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucentReflectionState).NumFramesAccumulatedHistory.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucentReflectionState).LayerSceneDepthHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->TranslucentReflectionState).LayerSceneNormalHistory.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->TranslucentReflectionState).HistoryFrameIndex = 0;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryViewRect.field0_0x0._s_0.Min.field0_0x0 + 4
   ) = 0;
  *(undefined4 *)((longlong)&(this->TranslucentReflectionState).HistoryViewRect.field0_0x0 + 0xc) =
       0;
  (this->TranslucentReflectionState).HistoryScreenPositionScaleBias.field0_0x0._s_0.X = 1.0;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 4) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 0xc) =
       0;
  *(undefined8 *)((longlong)&(this->TranslucentReflectionState).HistoryUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->TranslucentReflectionState).HistoryUVMinMax.field0_0x0 + 0xc) =
       0;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryGatherUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryGatherUVMinMax.field0_0x0 + 0xc) = 0;
  *(undefined8 *)
   ((longlong)&(this->TranslucentReflectionState).HistoryBufferSizeAndInvSize.field0_0x0 + 4) = 0;
  (this->TranslucentReflectionState).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = 0.0;
  (this->WaterReflectionState).SpecularAndSecondMomentHistory.Reference = (IPooledRenderTarget *)0x0
  ;
  (this->WaterReflectionState).NumFramesAccumulatedHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionState).LayerSceneDepthHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->WaterReflectionState).LayerSceneNormalHistory.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->WaterReflectionState).HistoryFrameIndex = 0;
  *(undefined8 *)
   ((longlong)&(this->WaterReflectionState).HistoryViewRect.field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->WaterReflectionState).HistoryViewRect.field0_0x0 + 0xc) = 0;
  (this->WaterReflectionState).HistoryScreenPositionScaleBias.field0_0x0._s_0.X = 1.0;
  *(undefined8 *)
   ((longlong)&(this->WaterReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 4) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->WaterReflectionState).HistoryScreenPositionScaleBias.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->WaterReflectionState).HistoryUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WaterReflectionState).HistoryUVMinMax.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->WaterReflectionState).HistoryGatherUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->WaterReflectionState).HistoryGatherUVMinMax.field0_0x0 + 0xc) =
       0;
  *(undefined8 *)
   ((longlong)&(this->WaterReflectionState).HistoryBufferSizeAndInvSize.field0_0x0 + 4) = 0;
  (this->WaterReflectionState).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = 0.0;
  (this->TranslucencyVolume0).Reference = (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolume1).Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).Clipmaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RadianceCacheState).Clipmaps.ArrayNum = 0;
  (this->RadianceCacheState).Clipmaps.ArrayMax = 0;
  (this->RadianceCacheState).ClipmapWorldExtent = 0.0;
  (this->RadianceCacheState).ClipmapDistributionBase = 0.0;
  (this->RadianceCacheState).CachedLightingPreExposure = 0.0;
  (this->RadianceCacheState).RadianceProbeIndirectionTexture.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).RadianceProbeAtlasTexture.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).SkyVisibilityProbeAtlasTexture.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).FinalRadianceAtlas.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).FinalSkyVisibilityAtlas.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).FinalIrradianceAtlas.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).ProbeOcclusionAtlas.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).DepthProbeAtlasTexture.Reference = (IPooledRenderTarget *)0x0;
  (this->RadianceCacheState).ProbeAllocator.Reference = (FRDGPooledBuffer *)0x0;
  (this->RadianceCacheState).ProbeFreeListAllocator.Reference = (FRDGPooledBuffer *)0x0;
  (this->RadianceCacheState).ProbeFreeList.Reference = (FRDGPooledBuffer *)0x0;
  (this->RadianceCacheState).ProbeLastUsedFrame.Reference = (FRDGPooledBuffer *)0x0;
  (this->RadianceCacheState).ProbeLastTracedFrame.Reference = (FRDGPooledBuffer *)0x0;
  (this->RadianceCacheState).ProbeWorldOffset.Reference = (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).Clipmaps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).Clipmaps.ArrayNum = 0;
  (this->TranslucencyVolumeRadianceCacheState).Clipmaps.ArrayMax = 0;
  (this->TranslucencyVolumeRadianceCacheState).ClipmapWorldExtent = 0.0;
  (this->TranslucencyVolumeRadianceCacheState).ClipmapDistributionBase = 0.0;
  (this->TranslucencyVolumeRadianceCacheState).CachedLightingPreExposure = 0.0;
  (this->TranslucencyVolumeRadianceCacheState).RadianceProbeIndirectionTexture.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).RadianceProbeAtlasTexture.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).SkyVisibilityProbeAtlasTexture.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).FinalRadianceAtlas.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).FinalSkyVisibilityAtlas.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).FinalIrradianceAtlas.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeOcclusionAtlas.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).DepthProbeAtlasTexture.Reference =
       (IPooledRenderTarget *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeAllocator.Reference = (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeFreeListAllocator.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeFreeList.Reference = (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeLastUsedFrame.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeLastTracedFrame.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolumeRadianceCacheState).ProbeWorldOffset.Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~FLumenViewState @ 1454053c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenViewState::~FLumenViewState(FLumenViewState *this)

{
  IPooledRenderTarget *pIVar1;
  
  FRadianceCacheState::~FRadianceCacheState(&this->TranslucencyVolumeRadianceCacheState);
  FRadianceCacheState::~FRadianceCacheState(&this->RadianceCacheState);
  pIVar1 = (this->TranslucencyVolume1).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TranslucencyVolume0).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->WaterReflectionState).LayerSceneNormalHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->WaterReflectionState).LayerSceneDepthHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->WaterReflectionState).NumFramesAccumulatedHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->WaterReflectionState).SpecularAndSecondMomentHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TranslucentReflectionState).LayerSceneNormalHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TranslucentReflectionState).LayerSceneDepthHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TranslucentReflectionState).NumFramesAccumulatedHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TranslucentReflectionState).SpecularAndSecondMomentHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReflectionState).LayerSceneNormalHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReflectionState).LayerSceneDepthHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReflectionState).NumFramesAccumulatedHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReflectionState).SpecularAndSecondMomentHistory.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReSTIRGatherState).TemporalAccumulationState.NumFramesAccumulatedRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReSTIRGatherState).TemporalAccumulationState.ResolveVarianceHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReSTIRGatherState).TemporalAccumulationState.RoughSpecularIndirectHistoryRT.
           Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ReSTIRGatherState).TemporalAccumulationState.DiffuseIndirectHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  FReSTIRTemporalResamplingState::~FReSTIRTemporalResamplingState
            (&(this->ReSTIRGatherState).TemporalResamplingState);
  FScreenProbeGatherTemporalState::~FScreenProbeGatherTemporalState(&this->ScreenProbeGatherState);
  return;
}

// GetGPUSizeBytes @ 1454f45e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FLumenViewState::GetGPUSizeBytes(FLumenViewState *this,bool param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  ulong64 uVar23;
  
  uVar1 = GetRenderTargetGPUSizeBytes
                    (&(this->WaterReflectionState).SpecularAndSecondMomentHistory,param_1);
  uVar2 = GetRenderTargetGPUSizeBytes
                    (&(this->WaterReflectionState).NumFramesAccumulatedHistory,param_1);
  uVar3 = GetRenderTargetGPUSizeBytes(&(this->WaterReflectionState).LayerSceneDepthHistory,param_1);
  uVar4 = GetRenderTargetGPUSizeBytes(&(this->WaterReflectionState).LayerSceneNormalHistory,param_1)
  ;
  uVar5 = GetRenderTargetGPUSizeBytes
                    (&(this->TranslucentReflectionState).SpecularAndSecondMomentHistory,param_1);
  uVar6 = GetRenderTargetGPUSizeBytes
                    (&(this->TranslucentReflectionState).NumFramesAccumulatedHistory,param_1);
  uVar7 = GetRenderTargetGPUSizeBytes
                    (&(this->TranslucentReflectionState).LayerSceneDepthHistory,param_1);
  uVar8 = GetRenderTargetGPUSizeBytes
                    (&(this->TranslucentReflectionState).LayerSceneNormalHistory,param_1);
  uVar9 = GetRenderTargetGPUSizeBytes
                    (&(this->ReflectionState).SpecularAndSecondMomentHistory,param_1);
  uVar10 = GetRenderTargetGPUSizeBytes(&(this->ReflectionState).NumFramesAccumulatedHistory,param_1)
  ;
  uVar11 = GetRenderTargetGPUSizeBytes(&(this->ReflectionState).LayerSceneDepthHistory,param_1);
  uVar12 = GetRenderTargetGPUSizeBytes(&(this->ReflectionState).LayerSceneNormalHistory,param_1);
  uVar13 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).ImportanceSamplingHistoryScreenProbeRadiance,
                      param_1);
  uVar14 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).ProbeHistoryScreenProbeRadiance,param_1);
  uVar15 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).HistoryScreenProbeTranslatedWorldPosition,
                      param_1);
  uVar16 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).HistoryScreenProbeSceneDepth,param_1);
  uVar17 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).FastUpdateMode_NumFramesAccumulatedHistoryRT,
                      param_1);
  uVar18 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).RoughSpecularIndirectHistoryRT,param_1);
  uVar19 = GetRenderTargetGPUSizeBytes
                     (&(this->ScreenProbeGatherState).DiffuseIndirectHistoryRT,param_1);
  uVar20 = FRadianceCacheState::GetGPUSizeBytes(&this->TranslucencyVolumeRadianceCacheState,param_1)
  ;
  uVar21 = FRadianceCacheState::GetGPUSizeBytes(&this->RadianceCacheState,param_1);
  uVar22 = GetRenderTargetGPUSizeBytes(&this->TranslucencyVolume1,param_1);
  uVar23 = GetRenderTargetGPUSizeBytes(&this->TranslucencyVolume0,param_1);
  return uVar23 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 +
         uVar9 + uVar12 + uVar11 + uVar10 + uVar7 + uVar8 + uVar6 + uVar5 +
         uVar3 + uVar4 + uVar2 + uVar1 + uVar20 + uVar21 + uVar22;
}

