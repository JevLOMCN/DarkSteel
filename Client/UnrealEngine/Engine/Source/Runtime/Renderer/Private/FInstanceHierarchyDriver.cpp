// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// operator() @ 144f76040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntVector3<int> * __thiscall
`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__)

{
  longlong lVar1;
  FGPUWorkGroupLoadBalancer *this_00;
  uint uVar2;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)this);
  uVar2 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)this);
  *(uint *)(*(longlong *)((longlong)this + 8) + 0xe8) = uVar2;
  lVar1 = *(longlong *)((longlong)this + 8);
  this_00 = *(FGPUWorkGroupLoadBalancer **)(*(longlong *)this + 8);
  FGPUWorkGroupLoadBalancer::FinalizeParametersAsync(this_00,(FShaderParameters *)(lVar1 + 0x130));
  *(int *)(lVar1 + 0x158) = this_00[1].WorkGroupInfos.ArrayNum;
  FGPUWorkGroupLoadBalancer::GetWrappedCsGroupCount
            (*(FGPUWorkGroupLoadBalancer **)(*(longlong *)this + 8),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 144f779b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntVector3<int> * __thiscall
`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TIntVector3<int> *pTVar6;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)this);
  if (*(int *)(*(longlong *)this + 0x1c) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeferredSetupContext->NumChunkViewGroups < ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                       ,0x1c5d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (*(int *)(*(longlong *)this + 0x20) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeferredSetupContext->NumAllocatedChunks < ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                       ,0x1c5e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar4 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)this);
  lVar1 = *(longlong *)((longlong)this + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1;
  *(uint *)(lVar1 + 0xe8) = uVar4;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x130) =
       *(undefined4 *)(*(longlong *)this + 0x1c);
  lVar1 = *(longlong *)this;
  iVar5 = *(int *)(lVar1 + 0x20) + 0x3f;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)(lVar1 + 0x1c);
  return __return_storage_ptr__;
}

// operator() @ 144f77e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntVector3<int> * __thiscall
`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>::operator()
          (void *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntVector3<int> *pTVar6;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)this);
  uVar5 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)this);
  *(uint *)(*(longlong *)((longlong)this + 8) + 0x70) = uVar5;
  iVar1 = *(int *)(**(longlong **)this + 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  *(int *)(*(longlong *)((longlong)this + 8) + 0x58) = iVar1;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x78) =
       *(undefined4 *)(*(longlong *)(*(longlong *)this + 8) + 0x80);
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)this + 8) + 0x84);
  plVar2 = *(longlong **)this;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(int *)(*(longlong *)((longlong)this + 8) + 0x7c) + 0x3fU >> 6;
  iVar1 = *(int *)(*plVar2 + 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1;
  return __return_storage_ptr__;
}

// DispatchCullingPass @ 144f8ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FInstanceWorkGroupParameters * __thiscall
Nanite::FInstanceHierarchyDriver::DispatchCullingPass
          (FInstanceHierarchyDriver *this,FInstanceWorkGroupParameters *__return_storage_ptr__,
          FRDGBuilder *param_1,uint param_2,FRenderer *param_3)

{
  FParameters *pFVar1;
  FParameters *pFVar2;
  int *piVar3;
  FRDGBuffer *pFVar4;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar5;
  FSceneInstanceCullResult *this_00;
  FGlobalShaderMap *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  undefined8 uVar14;
  TVector2<float>_u_0 TVar15;
  FRDGTexture *pFVar16;
  FRDGTexture *pFVar17;
  FRHISamplerState *pFVar18;
  FParameters *pFVar19;
  FParameters *pFVar20;
  byte bVar21;
  EUniformBufferBindingFlags EVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  FRDGBufferUAV *pFVar26;
  FRDGBufferUAV *pFVar27;
  FShaderParametersMetadata *pFVar28;
  FParameters *pFVar29;
  FParameters *pFVar30;
  FRDGBufferSRV *pFVar31;
  FRDGEventName *pFVar32;
  undefined8 *puVar33;
  FParameters *pFVar34;
  undefined8 *puVar35;
  FInstanceWorkGroupParameters *pFVar36;
  FShaderType *pFVar37;
  FName FVar38;
  undefined8 *puVar39;
  undefined ***pppuVar40;
  longlong *plVar41;
  int iVar42;
  FParameters *pFVar43;
  bool bVar44;
  undefined1 auStackY_7b8 [32];
  FRDGBufferUAVDesc local_768;
  TShaderPermutationDomain<FInstanceHierarchyCullShader::FDebugFlagsDim,FInstanceHierarchyCullShader::FCullingPassDim,FInstanceHierarchyCullShader::FVirtualTextureTargetDim>
  local_758;
  undefined8 *local_748;
  undefined8 *local_740;
  undefined8 *local_738;
  FParameters *local_730;
  FRDGBuffer *local_728;
  FGlobalShaderMap *local_720;
  FRDGBufferUAV *local_718;
  FRDGBufferUAVDesc local_710;
  FRDGBufferUAVDesc local_700;
  FRDGBufferUAVDesc local_6f0;
  FRDGBufferUAVDesc local_6e0;
  FRDGBufferUAV *local_6d0;
  FInstanceWorkGroupParameters *local_6c8;
  FRDGBufferSRVDesc local_6c0;
  FRDGBufferSRVDesc local_6a0;
  FRDGBufferSRVDesc local_680;
  FRDGBufferSRVDesc local_660;
  FRDGBufferSRVDesc local_640;
  FRDGBufferSRVDesc local_620;
  FRDGBufferSRVDesc local_600;
  FRDGBufferSRVDesc local_5e0;
  FDeferredSetupContext *local_5c0;
  uint uStack_5b8;
  undefined4 uStack_5b4;
  FParameters *local_5b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_598;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_588;
  FRDGBufferSRVDesc local_578;
  FString local_558;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_548;
  initializer_list<FRDGResource_*> local_538;
  FString local_528;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_518;
  initializer_list<FRDGResource_*> local_508;
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [8];
  TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable> local_4e0;
  FString local_4d0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4b8;
  initializer_list<FRDGResource_*> local_4a8;
  TShaderRefBase<FInstanceHierarchyChunkCull_CS,FShaderMapPointerTable> local_498;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_488;
  initializer_list<FRDGResource_*> local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  FRDGBufferSRV *pFStack_450;
  FRDGBufferSRV *local_448;
  FRDGBufferSRV *pFStack_440;
  FRDGBufferSRV *local_438;
  FRDGBufferSRV *pFStack_430;
  FRDGBufferSRV *local_428;
  FRDGBufferSRV *pFStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  TVector2<float>_u_0 TStack_3f0;
  FRDGTexture *local_3e8;
  FRDGTexture *pFStack_3e0;
  FRHISamplerState *local_3d8;
  FRDGBufferSRV *pFStack_3d0;
  TRDGUniformBuffer<FSceneUniformParameters> *local_3c8;
  FRDGBuffer *pFStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  FRDGTexture *local_3a8;
  FRDGBufferSRV *pFStack_3a0;
  FRDGTexture *local_398;
  FRDGBufferUAV *pFStack_390;
  FRDGBufferSRV *local_388;
  uint local_37c;
  FRDGBufferUAV *local_378;
  FRDGBufferUAV *local_370;
  FRDGBufferUAV *local_368;
  FRDGBufferSRV *local_360;
  FRDGBufferUAV *local_358;
  FRDGBufferUAV *local_350;
  FRDGBuffer *local_348;
  FRDGBuffer *pFStack_340;
  FRDGEventName local_338;
  FRDGEventName local_320;
  FRDGEventName local_308;
  FRDGEventName local_2f0;
  FRDGEventName local_2d8;
  code *local_2b8;
  undefined **local_2a8;
  FDeferredSetupContext *pFStack_2a0;
  FParameters *local_298;
  undefined ***local_290;
  code *local_288;
  undefined **local_278;
  FDeferredSetupContext *pFStack_270;
  FParameters *local_268;
  undefined ***local_260;
  code *local_258;
  undefined **local_248;
  FDeferredSetupContext *pFStack_240;
  FParameters *local_238;
  undefined ***local_230;
  code *local_228;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  longlong *local_200;
  code *local_1f8 [2];
  undefined **local_1e8;
  FDeferredSetupContext *local_1e0;
  FParameters *local_1d8;
  undefined ***local_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  FSceneInstanceCullResult *local_1b0;
  undefined ***local_1a0;
  <lambda_1> local_198;
  undefined **local_168;
  FDeferredSetupContext *pFStack_160;
  FParameters *local_158;
  undefined ***local_150;
  <lambda_1> local_148;
  undefined **local_118;
  FDeferredSetupContext *pFStack_110;
  FParameters *local_108;
  undefined ***local_100;
  <lambda_1> local_f8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  <lambda_1> local_a8;
  undefined **local_78;
  FDeferredSetupContext *pFStack_70;
  FParameters *local_68;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_7b8;
  lVar25 = 0x70;
  if (param_2 == 2) {
    lVar25 = 0x78;
  }
  local_710._padding_._2_1_ = 0;
  pFVar4 = *(FRDGBuffer **)((longlong)this->InstanceWorkArgs + lVar25 + -0x70);
  local_710.Buffer = this->InstanceWorkGroupsRDG;
  bVar21 = 0;
  if ((((local_710.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar21 = 0x1c;
  }
  local_710._padding_._0_2_ = (ushort)bVar21;
  local_728 = pFVar4;
  local_6c8 = __return_storage_ptr__;
  pFVar26 = FRDGBuilder::CreateUAV(param_1,&local_710,SkipBarrier);
  local_6e0._padding_._0_2_ = 0x1c;
  local_6e0._padding_._2_1_ = 0;
  local_6e0.Buffer = pFVar4;
  local_6d0 = pFVar26;
  pFVar27 = FRDGBuilder::CreateUAV(param_1,&local_6e0,SkipBarrier);
  pTVar5 = param_3->SceneUniformBuffer;
  local_368 = (FRDGBufferUAV *)0x0;
  local_350 = (FRDGBufferUAV *)0x0;
  local_718 = pFVar27;
  pFVar28 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_418 = *(undefined8 *)&(param_3->CullingParameters).PageConstants.field0_0x0;
  uStack_410 = *(undefined8 *)((longlong)&(param_3->CullingParameters).PageConstants.field0_0x0 + 8)
  ;
  local_6c0._padding_._0_4_ = 0xffffffff;
  local_3f8._0_4_ = (param_3->CullingParameters).NumViews;
  local_3f8._4_4_ = (param_3->CullingParameters)._padding_;
  TStack_3f0 = (param_3->CullingParameters).HZBSize.field0_0x0;
  EVar22 = Static;
  if (pFVar28->BindingFlags != StaticAndShader) {
    EVar22 = pFVar28->BindingFlags;
  }
  local_768.Buffer = (FRDGBuffer *)CONCAT71(local_768.Buffer._1_7_,EVar22);
  pFStack_3c0 = local_768.Buffer;
  local_408._0_4_ = (param_3->CullingParameters).MaxCandidateClusters;
  local_408._4_4_ = (param_3->CullingParameters).MaxVisibleClusters;
  uStack_400._0_4_ = (param_3->CullingParameters).RenderFlags;
  uStack_400._4_4_ = (param_3->CullingParameters).DebugFlags;
  local_3d8 = (param_3->CullingParameters).HZBSampler;
  pFStack_3d0 = (param_3->CullingParameters).InViews;
  local_6c0._padding_._4_4_ = 0;
  local_3e8 = (param_3->CullingParameters).HZBTextureArray;
  pFStack_3e0 = (param_3->CullingParameters).HZBTexture;
  local_6c0._padding_ = 0;
  local_3a8 = (param_3->VirtualTargetParameters).HZBPageTable;
  pFStack_3a0 = (param_3->VirtualTargetParameters).HZBPageRectBounds;
  local_3b8 = *(undefined8 *)&(param_3->VirtualTargetParameters).VirtualShadowMap;
  uStack_3b0 = *(undefined8 *)&(param_3->VirtualTargetParameters).VirtualShadowMap.field_0x8;
  local_458._0_4_ = (this->ShaderParameters).bCullChunkViewDistance;
  local_458._4_4_ = (this->ShaderParameters).NumAllocatedChunks;
  pFStack_450 = (this->ShaderParameters).InstanceHierarchyCellBlockData;
  local_398 = (param_3->VirtualTargetParameters).HZBPageFlags;
  pFStack_390 = (param_3->VirtualTargetParameters).OutDirtyPageFlags;
  local_438 = (this->ShaderParameters).InstanceIds;
  pFStack_430 = (this->ShaderParameters).ExplicitChunkBounds;
  local_468._0_4_ = (this->ShaderParameters).NumCellsPerBlockLog2;
  local_468._4_4_ = (this->ShaderParameters).CellBlockDimLog2;
  uStack_460._0_4_ = (this->ShaderParameters).LocalCellCoordMask;
  uStack_460._4_4_ = (this->ShaderParameters).FirstLevel;
  local_448 = (this->ShaderParameters).InstanceHierarchyCellHeaders;
  pFStack_440 = (this->ShaderParameters).InstanceHierarchyItemChunks;
  local_428 = (this->ShaderParameters).ExplicitChunkCellIds;
  pFStack_420 = (this->ShaderParameters).UsedChunkIdMask;
  local_6c0.Buffer = this->ViewDrawRangesRDG;
  local_6c0._padding_._0_1_ = 0;
  if ((((local_6c0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_6c0._padding_._0_1_ = 0x1c;
  }
  local_768._padding_ = (longlong)pTVar5;
  local_3c8 = pTVar5;
  local_388 = FRDGBuilder::CreateSRV(param_1,&local_6c0);
  local_358 = (FRDGBufferUAV *)0x0;
  local_37c = (uint)(this->bAllowStaticGeometryPath != false);
  local_378 = pFVar26;
  local_370 = pFVar27;
  if (param_2 == 2) {
    local_6a0.Buffer = this->OccludedChunkArgsRDG;
    local_6a0._padding_._4_4_ = 0;
    local_6a0._padding_._0_4_ = 0xffffffff;
    local_6a0._padding_ = 0;
    local_6a0._padding_._0_1_ = 0;
    if ((((local_6a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_6a0._padding_._0_1_ = 0x1c;
    }
    local_360 = FRDGBuilder::CreateSRV(param_1,&local_6a0);
    local_768._padding_ = (longlong)this->OccludedChunkArgsRDG;
  }
  else {
    local_360 = (FRDGBufferSRV *)0x0;
    if ((param_3->Configuration).bTwoPassOcclusion != 0) {
      local_700.Buffer = this->OccludedChunkArgsRDG;
      local_700._padding_._2_1_ = 0;
      bVar21 = 0;
      if ((((local_700.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar21 = 0x1c;
      }
      local_700._padding_._0_2_ = (ushort)bVar21;
      local_358 = FRDGBuilder::CreateUAV(param_1,&local_700,SkipBarrier);
      local_6f0.Buffer = this->OccludedChunkDrawsRDG;
      local_6f0._padding_._2_1_ = 0;
      bVar21 = 0;
      if ((((local_6f0.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar21 = 0x1c;
      }
      local_6f0._padding_._0_2_ = (ushort)bVar21;
      local_350 = FRDGBuilder::CreateUAV(param_1,&local_6f0,SkipBarrier);
    }
    local_768._padding_ = 0;
  }
  local_768.Buffer = (FRDGBuffer *)CONCAT44(local_768.Buffer._4_4_,4);
  local_348 = (FRDGBuffer *)local_768._padding_;
  pFStack_340 = local_768.Buffer;
  if (param_3->StatsBuffer != (FRDGBuffer *)0x0) {
    local_368 = param_3->StatsBufferSkipBarrierUAV;
  }
  if ((param_3->DebugFlags == 0) && ((param_3->RenderFlags & 0x8000) == 0)) {
    local_758.DimensionValue = false;
  }
  else {
    local_758.DimensionValue = true;
  }
  local_758.Tail.Tail.DimensionValue =
       param_3->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0;
  local_758.Tail.DimensionValue = param_2;
  if (param_2 == 2) {
    pFVar29 = FRDGBuilder::AllocParameters<FInstanceHierarchyChunkCull_CS::FParameters>(param_1);
    lVar25 = 2;
    pFVar19 = pFVar29;
    puVar33 = &local_468;
    do {
      puVar35 = puVar33;
      pFVar30 = pFVar19;
      pFVar19 = (FParameters *)&(pFVar30->CommonParameters).CullingParameters.HZBTextureArray;
      uVar8 = *puVar35;
      uVar9 = puVar35[1];
      uVar10 = puVar35[2];
      pFVar31 = (FRDGBufferSRV *)puVar35[3];
      (pFVar30->CommonParameters).InstanceHierarchyParameters.NumCellsPerBlockLog2 = (int)uVar8;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.CellBlockDimLog2 =
           (int)((ulonglong)uVar8 >> 0x20);
      (pFVar30->CommonParameters).InstanceHierarchyParameters.LocalCellCoordMask = (int)uVar9;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.FirstLevel =
           (int)((ulonglong)uVar9 >> 0x20);
      pFVar11 = (FRDGBufferSRV *)puVar35[4];
      pFVar12 = (FRDGBufferSRV *)puVar35[5];
      (pFVar30->CommonParameters).InstanceHierarchyParameters.bCullChunkViewDistance = (int)uVar10;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.NumAllocatedChunks =
           (int)((ulonglong)uVar10 >> 0x20);
      (pFVar30->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyCellBlockData =
           pFVar31;
      pFVar31 = (FRDGBufferSRV *)puVar35[6];
      pFVar13 = (FRDGBufferSRV *)puVar35[7];
      (pFVar30->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyCellHeaders = pFVar11
      ;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyItemChunks = pFVar12;
      pFVar11 = (FRDGBufferSRV *)puVar35[8];
      pFVar12 = (FRDGBufferSRV *)puVar35[9];
      (pFVar30->CommonParameters).InstanceHierarchyParameters.InstanceIds = pFVar31;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.ExplicitChunkBounds = pFVar13;
      uVar8 = puVar35[10];
      uVar9 = puVar35[0xb];
      (pFVar30->CommonParameters).InstanceHierarchyParameters.ExplicitChunkCellIds = pFVar11;
      (pFVar30->CommonParameters).InstanceHierarchyParameters.UsedChunkIdMask = pFVar12;
      uVar10 = puVar35[0xc];
      uVar14 = puVar35[0xd];
      *(undefined8 *)&(pFVar30->CommonParameters).CullingParameters.PageConstants.field0_0x0 = uVar8
      ;
      *(undefined8 *)
       ((longlong)&(pFVar30->CommonParameters).CullingParameters.PageConstants.field0_0x0 + 8) =
           uVar9;
      uVar8 = puVar35[0xe];
      TVar15 = *(TVector2<float>_u_0 *)(puVar35 + 0xf);
      (pFVar30->CommonParameters).CullingParameters.MaxCandidateClusters = (int)uVar10;
      (pFVar30->CommonParameters).CullingParameters.MaxVisibleClusters =
           (int)((ulonglong)uVar10 >> 0x20);
      (pFVar30->CommonParameters).CullingParameters.RenderFlags = (int)uVar14;
      (pFVar30->CommonParameters).CullingParameters.DebugFlags = (int)((ulonglong)uVar14 >> 0x20);
      (pFVar30->CommonParameters).CullingParameters.NumViews = (int)uVar8;
      (pFVar30->CommonParameters).CullingParameters._padding_ = (int)((ulonglong)uVar8 >> 0x20);
      (pFVar30->CommonParameters).CullingParameters.HZBSize.field0_0x0 = TVar15;
      lVar25 = lVar25 + -1;
      puVar33 = puVar35 + 0x10;
    } while (lVar25 != 0);
    pFVar16 = (FRDGTexture *)puVar35[0x10];
    pFVar17 = (FRDGTexture *)puVar35[0x11];
    pFVar29->InGroupIds = (FRDGBufferSRV *)0x0;
    pFVar18 = (FRHISamplerState *)puVar35[0x12];
    pFVar31 = (FRDGBufferSRV *)puVar35[0x13];
    pFVar29->NumGroupIds = 0;
    *(FRDGTexture **)pFVar19 = pFVar16;
    (pFVar30->CommonParameters).CullingParameters.HZBTexture = pFVar17;
    local_680._padding_._4_4_ = 0;
    uVar8 = puVar35[0x14];
    uVar9 = puVar35[0x15];
    local_680._padding_._0_4_ = 0xffffffff;
    (pFVar30->CommonParameters).CullingParameters.HZBSampler = pFVar18;
    (pFVar30->CommonParameters).CullingParameters.InViews = pFVar31;
    *(undefined8 *)&(pFVar30->CommonParameters).Scene = uVar8;
    *(undefined8 *)&(pFVar30->CommonParameters).Scene.field_0x8 = uVar9;
    local_680.Buffer = this->OccludedChunkDrawsRDG;
    local_680._padding_ = 0;
    local_680._padding_._0_1_ = 0;
    if ((((local_680.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_680._padding_._0_1_ = 0x1c;
    }
    pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_680);
    pFVar29->InOccludedChunkDraws = pFVar31;
    FGlobalShaderMap::GetShader<FInstanceHierarchyChunkCull_CS>
              (param_3->SharedContext->ShaderMap,&local_4e0,&local_758);
    pFVar4 = this->OccludedChunkArgsRDG;
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`19'::<lambda_1>,0,0>
                 ::_vftable_;
    local_1e0 = this->DeferredSetupContext;
    local_1d0 = (undefined ***)0x0;
    local_1f8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l19::<lambda_1>,void>
                   ::Call;
    local_1d8 = pFVar29;
    pFVar32 = FRDGEventName::FRDGEventName(&local_320,1,L"HierarchyChunkCull");
    FComputeShaderUtils::AddPass<FInstanceHierarchyChunkCull_CS>
              (param_1,pFVar32,Compute,&local_4e0,pFVar29,pFVar4,0,
               (TFunction<void___cdecl(void)> *)local_1f8);
    if (local_320.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_320.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_1f8[0] != (code *)0x0) {
      pppuVar40 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar40 = local_1d0;
      }
      (*(code *)(*pppuVar40)[2])();
    }
  }
  else {
    puVar33 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x170,0x10);
    if (puVar33 == (undefined8 *)0x0) {
      puVar33 = (undefined8 *)0x0;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar23) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
        return pFVar36;
      }
    }
    else {
      *puVar33 = &___7__TObject_VFParameters_FInstanceHierarchyCellChunkCull_CS___FRDGAllocator__6B_
      ;
      FInstanceHierarchyCullShader::FCommonParameters::FCommonParameters
                ((FCommonParameters *)(puVar33 + 2));
      puVar33[0x28] = 0;
      puVar33[0x29] = 0;
      puVar33[0x2c] = 0;
    }
    local_748 = puVar33;
    if ((((undefined8 **)param_1->_padding_ <= &local_748) &&
        (&local_748 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar7 = (code *)swi(3);
      pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
      return pFVar36;
    }
    iVar24 = (int)param_1->_padding_;
    if (iVar24 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,
                          (int *)((longlong)&param_1->_padding_ + 4));
    }
    pFVar43 = (FParameters *)(puVar33 + 2);
    *(int *)&param_1->_padding_ = iVar24 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar24 * 8) = local_748;
    lVar25 = 2;
    pFVar20 = pFVar43;
    puVar35 = &local_468;
    do {
      puVar39 = puVar35;
      pFVar34 = pFVar20;
      pFVar26 = (FRDGBufferUAV *)puVar39[1];
      pFVar27 = (FRDGBufferUAV *)puVar39[2];
      uVar8 = puVar39[3];
      *(undefined8 *)pFVar34 = *puVar39;
      pFVar34->OutShadingBinData = pFVar26;
      uVar9 = puVar39[4];
      pFVar26 = (FRDGBufferUAV *)puVar39[5];
      pFVar34->OutShadingBinScatterCounters = pFVar27;
      *(undefined8 *)&pFVar34->field_0x18 = uVar8;
      pFVar27 = (FRDGBufferUAV *)puVar39[6];
      uVar8 = puVar39[7];
      *(undefined8 *)(pFVar34 + 1) = uVar9;
      pFVar34[1].OutShadingBinData = pFVar26;
      uVar9 = puVar39[8];
      pFVar26 = (FRDGBufferUAV *)puVar39[9];
      pFVar34[1].OutShadingBinScatterCounters = pFVar27;
      *(undefined8 *)&pFVar34[1].field_0x18 = uVar8;
      pFVar27 = (FRDGBufferUAV *)puVar39[10];
      uVar8 = puVar39[0xb];
      *(undefined8 *)(pFVar34 + 2) = uVar9;
      pFVar34[2].OutShadingBinData = pFVar26;
      uVar9 = puVar39[0xc];
      pFVar26 = (FRDGBufferUAV *)puVar39[0xd];
      pFVar34[2].OutShadingBinScatterCounters = pFVar27;
      *(undefined8 *)&pFVar34[2].field_0x18 = uVar8;
      pFVar27 = (FRDGBufferUAV *)puVar39[0xe];
      uVar8 = puVar39[0xf];
      *(undefined8 *)(pFVar34 + 3) = uVar9;
      pFVar34[3].OutShadingBinData = pFVar26;
      pFVar34[3].OutShadingBinScatterCounters = pFVar27;
      *(undefined8 *)&pFVar34[3].field_0x18 = uVar8;
      lVar25 = lVar25 + -1;
      pFVar20 = pFVar34 + 4;
      puVar35 = puVar39 + 0x10;
    } while (lVar25 != 0);
    pFVar26 = (FRDGBufferUAV *)puVar39[0x11];
    pFVar27 = (FRDGBufferUAV *)puVar39[0x12];
    uVar8 = puVar39[0x13];
    *(undefined8 *)(pFVar34 + 4) = puVar39[0x10];
    pFVar34[4].OutShadingBinData = pFVar26;
    uVar9 = puVar39[0x14];
    pFVar26 = (FRDGBufferUAV *)puVar39[0x15];
    pFVar34[4].OutShadingBinScatterCounters = pFVar27;
    *(undefined8 *)&pFVar34[4].field_0x18 = uVar8;
    *(undefined8 *)(pFVar34 + 5) = uVar9;
    pFVar34[5].OutShadingBinData = pFVar26;
    this_00 = this->DeferredSetupContext->SceneInstanceCullResult;
    local_730 = pFVar43;
    FGPUWorkGroupLoadBalancer::GetParametersAsync
              ((FGPUWorkGroupLoadBalancer *)this_00,param_1,(FShaderParameters *)(puVar33 + 0x28));
    local_1a0 = (undefined ***)0x0;
    local_1b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__GetParametersAsync___TGPUWorkGroupLoadBalancer_UFCellChunkDraw_HLSL_UE____QEAAXAEAVFRDGBuilder__AEAVFShaderParameters_3__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::GetParametersAsync'::__l2::<lambda_1>,TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                   ::Call;
    local_1b0 = this_00;
    local_660.Buffer =
         CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
                   (param_1,L"GPUWorkGroupLoadBalancer.ParentInfos",
                    (TFunction<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&___cdecl(void)>
                     *)local_1c8);
    if (local_1c8[0] != (code *)0x0) {
      pppuVar40 = &local_1b8;
      if (local_1a0 != (undefined ***)0x0) {
        pppuVar40 = local_1a0;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    local_660._padding_._0_4_ = 0xffffffff;
    local_660._padding_._4_4_ = 0;
    local_660._padding_ = 0;
    local_660._padding_._0_1_ = 0;
    if ((((local_660.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_660._padding_._0_1_ = 0x1c;
    }
    pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_660);
    puVar33[0x2c] = pFVar31;
    bVar23 = local_758.DimensionValue != false;
    *(undefined4 *)(puVar33 + 0x2d) = 0xffffffff;
    local_720 = param_3->SharedContext->ShaderMap;
    if (param_2 == 0) {
      iVar24 = 2;
    }
    else if (param_2 == 1) {
      iVar24 = 1;
    }
    else {
      if ((param_2 != 2) &&
         (bVar44 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x90,L"Unknown shader permutation dimension value %i."), bVar44)) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
        return pFVar36;
      }
      iVar24 = 0;
    }
    bVar44 = local_758.Tail.Tail.DimensionValue != false;
    pFVar37 = (FShaderType *)FInstanceHierarchyCellChunkCull_CS::GetStaticType();
    FGlobalShaderMap::GetShader
              (local_720,&local_5a8,pFVar37,(uint)bVar23 + ((-(uint)bVar44 & 3) + iVar24) * 2);
    if (local_5a8.ShaderContent == (FShader *)0x0) {
      FVar38 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_4f8);
      ::FName::ToString((FName *)FVar38,&local_4d0);
      FInstanceHierarchyCellChunkCull_CS::GetStaticType();
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
      }
      if (bVar23) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
        return pFVar36;
      }
    }
    FInstanceHierarchyCellChunkCull_CS::GetStaticType();
    local_290 = (undefined ***)0x0;
    local_2a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`22'::<lambda_2>,0,0>
                 ::_vftable_;
    pFStack_2a0 = this->DeferredSetupContext;
    local_2b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>,UE::Math::TIntVector3<int>_>
                ::Call;
    local_298 = pFVar43;
    pFVar32 = FRDGEventName::FRDGEventName(&local_308,1,L"HierarchyCellChunkCull");
    pFVar28 = FInstanceHierarchyCellChunkCull_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_4b8.ShaderContent = local_5a8.ShaderContent;
    local_4b8.ShaderMap = local_5a8.ShaderMap;
    ValidateShaderParameters(&local_4b8,pFVar28,local_730);
    local_4a8._First = (FRDGResource **)0x0;
    local_4a8._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_5a8.ShaderContent)->Bindings,pFVar28,local_730,&local_4a8)
    ;
    local_198.GroupCount.field0_0x0._0_8_ = local_2b8;
    local_150 = local_290;
    local_198.ComputeShader.ShaderContent = (FShadingBinValidateCS *)local_5a8.ShaderContent;
    local_198.Parameters = local_730;
    local_198.ComputeShader.ShaderMap = local_5a8.ShaderMap;
    local_168 = local_2a8;
    pFStack_160 = pFStack_2a0;
    local_158 = local_298;
    local_2b8 = (code *)0x0;
    local_198.ParametersMetadata = pFVar28;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FInstanceHierarchyCellChunkCull_CS>_::__l2::<lambda_1>_>
              (param_1,pFVar32,pFVar28,local_730,Compute,&local_198);
    if ((code *)local_198.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      pppuVar40 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar40 = local_150;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    if (local_308.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_308.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_2b8 != (code *)0x0) {
      pppuVar40 = &local_2a8;
      if (local_290 != (undefined ***)0x0) {
        pppuVar40 = local_290;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    local_a8.Parameters =
         (FBuildBricksParameters *)
         FRDGBuilder::AllocParameters<FInstanceHierarchyChunkCull_CS::FParameters>(param_1);
    lVar25 = 2;
    pFVar19 = (FParameters *)local_a8.Parameters;
    puVar33 = &local_468;
    do {
      puVar35 = puVar33;
      pFVar29 = pFVar19;
      pFVar19 = (FParameters *)&(pFVar29->CommonParameters).CullingParameters.HZBTextureArray;
      uVar8 = *puVar35;
      uVar9 = puVar35[1];
      uVar10 = puVar35[2];
      pFVar31 = (FRDGBufferSRV *)puVar35[3];
      (pFVar29->CommonParameters).InstanceHierarchyParameters.NumCellsPerBlockLog2 = (int)uVar8;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.CellBlockDimLog2 =
           (int)((ulonglong)uVar8 >> 0x20);
      (pFVar29->CommonParameters).InstanceHierarchyParameters.LocalCellCoordMask = (int)uVar9;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.FirstLevel =
           (int)((ulonglong)uVar9 >> 0x20);
      pFVar11 = (FRDGBufferSRV *)puVar35[4];
      pFVar12 = (FRDGBufferSRV *)puVar35[5];
      (pFVar29->CommonParameters).InstanceHierarchyParameters.bCullChunkViewDistance = (int)uVar10;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.NumAllocatedChunks =
           (int)((ulonglong)uVar10 >> 0x20);
      (pFVar29->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyCellBlockData =
           pFVar31;
      pFVar31 = (FRDGBufferSRV *)puVar35[6];
      pFVar13 = (FRDGBufferSRV *)puVar35[7];
      (pFVar29->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyCellHeaders = pFVar11
      ;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.InstanceHierarchyItemChunks = pFVar12;
      pFVar11 = (FRDGBufferSRV *)puVar35[8];
      pFVar12 = (FRDGBufferSRV *)puVar35[9];
      (pFVar29->CommonParameters).InstanceHierarchyParameters.InstanceIds = pFVar31;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.ExplicitChunkBounds = pFVar13;
      uVar8 = puVar35[10];
      uVar9 = puVar35[0xb];
      (pFVar29->CommonParameters).InstanceHierarchyParameters.ExplicitChunkCellIds = pFVar11;
      (pFVar29->CommonParameters).InstanceHierarchyParameters.UsedChunkIdMask = pFVar12;
      uVar10 = puVar35[0xc];
      uVar14 = puVar35[0xd];
      *(undefined8 *)&(pFVar29->CommonParameters).CullingParameters.PageConstants.field0_0x0 = uVar8
      ;
      *(undefined8 *)
       ((longlong)&(pFVar29->CommonParameters).CullingParameters.PageConstants.field0_0x0 + 8) =
           uVar9;
      uVar8 = puVar35[0xe];
      TVar15 = *(TVector2<float>_u_0 *)(puVar35 + 0xf);
      (pFVar29->CommonParameters).CullingParameters.MaxCandidateClusters = (int)uVar10;
      (pFVar29->CommonParameters).CullingParameters.MaxVisibleClusters =
           (int)((ulonglong)uVar10 >> 0x20);
      (pFVar29->CommonParameters).CullingParameters.RenderFlags = (int)uVar14;
      (pFVar29->CommonParameters).CullingParameters.DebugFlags = (int)((ulonglong)uVar14 >> 0x20);
      (pFVar29->CommonParameters).CullingParameters.NumViews = (int)uVar8;
      (pFVar29->CommonParameters).CullingParameters._padding_ = (int)((ulonglong)uVar8 >> 0x20);
      (pFVar29->CommonParameters).CullingParameters.HZBSize.field0_0x0 = TVar15;
      lVar25 = lVar25 + -1;
      puVar33 = puVar35 + 0x10;
    } while (lVar25 != 0);
    pFVar16 = (FRDGTexture *)puVar35[0x11];
    local_640._padding_._4_4_ = 0;
    pFVar18 = (FRHISamplerState *)puVar35[0x12];
    pFVar31 = (FRDGBufferSRV *)puVar35[0x13];
    local_640._padding_._0_4_ = 0xffffffff;
    *(FRDGTexture **)pFVar19 = (FRDGTexture *)puVar35[0x10];
    (pFVar29->CommonParameters).CullingParameters.HZBTexture = pFVar16;
    local_640._padding_ = 0;
    uVar8 = puVar35[0x14];
    uVar9 = puVar35[0x15];
    (pFVar29->CommonParameters).CullingParameters.HZBSampler = pFVar18;
    (pFVar29->CommonParameters).CullingParameters.InViews = pFVar31;
    *(undefined8 *)&(pFVar29->CommonParameters).Scene = uVar8;
    *(undefined8 *)&(pFVar29->CommonParameters).Scene.field_0x8 = uVar9;
    local_640.Buffer = this->ChunkDrawViewGroupIdsRDG;
    local_640._padding_._0_1_ = 0;
    if ((((local_640.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_640._padding_._0_1_ = 0x1c;
    }
    pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_640);
    ((FParameters *)local_a8.Parameters)->InGroupIds = pFVar31;
    ((FParameters *)local_a8.Parameters)->NumGroupIds = 0;
    ((FParameters *)local_a8.Parameters)->InOccludedChunkDraws = (FRDGBufferSRV *)0x0;
    FGlobalShaderMap::GetShader<FInstanceHierarchyChunkCull_CS>
              (param_3->SharedContext->ShaderMap,&local_498,&local_758);
    local_260 = (undefined ***)0x0;
    local_278 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`23'::<lambda_3>,0,0>
                 ::_vftable_;
    pFStack_270 = this->DeferredSetupContext;
    local_288 = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>,UE::Math::TIntVector3<int>_>
                ::Call;
    local_268 = (FParameters *)local_a8.Parameters;
    pFVar32 = FRDGEventName::FRDGEventName(&local_2f0,1,L"HierarchyChunkCull");
    pFVar28 = FInstanceHierarchyChunkCull_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_488.ShaderContent = (FShader *)local_498.ShaderContent;
    local_488.ShaderMap = local_498.ShaderMap;
    ValidateShaderParameters(&local_488,pFVar28,local_a8.Parameters);
    local_478._First = (FRDGResource **)0x0;
    local_478._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl
              ((FShaderParameterBindings *)local_498.ShaderContent,pFVar28,local_a8.Parameters,
               &local_478);
    local_a8.GroupCount.field0_0x0._0_8_ = local_288;
    local_60 = local_260;
    local_a8.ComputeShader.ShaderContent = (FVisibleBricksHashCS *)local_498.ShaderContent;
    local_a8.ComputeShader.ShaderMap = local_498.ShaderMap;
    local_78 = local_278;
    pFStack_70 = pFStack_270;
    local_68 = local_268;
    local_288 = (code *)0x0;
    local_a8.ParametersMetadata = pFVar28;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FInstanceHierarchyChunkCull_CS>_::__l2::<lambda_1>_>
              (param_1,pFVar32,pFVar28,local_a8.Parameters,Compute,&local_a8);
    if ((code *)local_a8.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      pppuVar40 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar40 = local_60;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    if (local_2f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_288 != (code *)0x0) {
      pppuVar40 = &local_278;
      if (local_260 != (undefined ***)0x0) {
        pppuVar40 = local_260;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xa0,0x10);
    puVar33 = (undefined8 *)0x0;
    if (puVar35 == (undefined8 *)0x0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar23) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
        return pFVar36;
      }
    }
    else {
      puVar35[5] = 0;
      *puVar35 = &
                 ___7__TObject_VFParameters_FInstanceHierarchyAppendUncullable_CS___FRDGAllocator__6B_
      ;
      puVar35[6] = 0;
      puVar35[7] = 0;
      puVar35[8] = 0;
      puVar35[9] = 0;
      puVar35[10] = 0;
      puVar35[0xb] = 0;
      puVar35[0xc] = 0;
      puVar35[0xe] = 0;
      puVar35[0xf] = 0;
      puVar35[0x12] = 0;
      puVar33 = puVar35;
    }
    piVar3 = (int *)((longlong)&param_1->_padding_ + 4);
    local_740 = puVar33;
    if ((((undefined8 **)param_1->_padding_ <= &local_740) &&
        (&local_740 < (undefined8 **)param_1->_padding_ + *piVar3)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar7 = (code *)swi(3);
      pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
      return pFVar36;
    }
    iVar24 = (int)param_1->_padding_;
    if (iVar24 == *piVar3) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar3);
    }
    pFVar1 = (FParameters *)(puVar33 + 2);
    *(int *)&param_1->_padding_ = iVar24 + 1;
    iVar42 = 0;
    local_620._padding_._4_4_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar24 * 8) = local_740;
    uVar8 = *(undefined8 *)&(this->ShaderParameters).LocalCellCoordMask;
    local_620._padding_._0_4_ = 0xffffffff;
    pFVar1->NormalTexture = *(FRDGTextureUAV **)&this->ShaderParameters;
    puVar33[3] = uVar8;
    local_620._padding_ = 0;
    pFVar31 = (this->ShaderParameters).InstanceHierarchyCellBlockData;
    puVar33[4] = *(undefined8 *)&(this->ShaderParameters).bCullChunkViewDistance;
    puVar33[5] = pFVar31;
    pFVar31 = (this->ShaderParameters).InstanceHierarchyItemChunks;
    puVar33[6] = (this->ShaderParameters).InstanceHierarchyCellHeaders;
    puVar33[7] = pFVar31;
    pFVar31 = (this->ShaderParameters).ExplicitChunkBounds;
    puVar33[8] = (this->ShaderParameters).InstanceIds;
    puVar33[9] = pFVar31;
    pFVar31 = (this->ShaderParameters).UsedChunkIdMask;
    puVar33[10] = (this->ShaderParameters).ExplicitChunkCellIds;
    puVar33[0xb] = pFVar31;
    local_620.Buffer = this->ViewDrawRangesRDG;
    local_620._padding_._0_1_ = 0;
    if ((((local_620.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_620._padding_._0_1_ = 0x1c;
    }
    pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_620);
    puVar33[0xc] = pFVar31;
    puVar33[0xe] = local_6d0;
    puVar33[0xf] = local_718;
    *(uint *)((longlong)puVar33 + 0x84) = (uint)(this->bAllowStaticGeometryPath != false);
    if (param_3->StatsBuffer != (FRDGBuffer *)0x0) {
      puVar33[0x12] = param_3->StatsBufferSkipBarrierUAV;
    }
    if ((param_3->DebugFlags != 0) || ((param_3->RenderFlags & 0x8000) != 0)) {
      iVar42 = 1;
    }
    pFVar6 = param_3->SharedContext->ShaderMap;
    pFVar37 = (FShaderType *)FInstanceHierarchyAppendUncullable_CS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar6,&local_598,pFVar37,iVar42);
    if (local_598.ShaderContent == (FShader *)0x0) {
      FVar38 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_4f0);
      ::FName::ToString((FName *)FVar38,&local_558);
      FInstanceHierarchyAppendUncullable_CS::GetStaticType();
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_558.Data.AllocatorInstance.Data);
      }
      if (bVar23) {
        pcVar7 = (code *)swi(3);
        pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
        return pFVar36;
      }
    }
    FInstanceHierarchyAppendUncullable_CS::GetStaticType();
    local_230 = (undefined ***)0x0;
    local_248 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`26'::<lambda_4>,0,0>
                 ::_vftable_;
    pFStack_240 = this->DeferredSetupContext;
    local_258 = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>,UE::Math::TIntVector3<int>_>
                ::Call;
    local_238 = pFVar1;
    pFVar32 = FRDGEventName::FRDGEventName(&local_2d8,1,L"InstanceHierarchyAppendUncullable");
    pFVar28 = FInstanceHierarchyAppendUncullable_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_548.ShaderContent = local_598.ShaderContent;
    local_548.ShaderMap = local_598.ShaderMap;
    ValidateShaderParameters(&local_548,pFVar28,pFVar1);
    local_538._First = (FRDGResource **)0x0;
    local_538._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_598.ShaderContent)->Bindings,pFVar28,pFVar1,&local_538);
    local_148.GroupCount.field0_0x0._0_8_ = local_258;
    local_100 = local_230;
    local_148.ComputeShader.ShaderContent =
         (FConvertWorldSpaceNormalToCameraSpaceCS *)local_598.ShaderContent;
    local_148.ComputeShader.ShaderMap = local_598.ShaderMap;
    local_118 = local_248;
    pFStack_110 = pFStack_240;
    local_108 = local_238;
    local_258 = (code *)0x0;
    local_148.ParametersMetadata = pFVar28;
    local_148.Parameters = pFVar1;
    FRDGBuilder::
    AddPassInternal<void,_FComputeShaderUtils::AddPass<FInstanceHierarchyAppendUncullable_CS>_::__l2::<lambda_1>_>
              (param_1,pFVar32,pFVar28,pFVar1,Compute,&local_148);
    if ((code *)local_148.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
      pppuVar40 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar40 = local_100;
      }
      (*(code *)(*pppuVar40)[2])();
    }
    if (local_2d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2d8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_258 != (code *)0x0) {
      pppuVar40 = &local_248;
      if (local_230 != (undefined ***)0x0) {
        pppuVar40 = local_230;
      }
      (*(code *)(*pppuVar40)[2])();
    }
  }
  puVar33 = (undefined8 *)0x0;
  puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar35 == (undefined8 *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar23) {
      pcVar7 = (code *)swi(3);
      pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
      return pFVar36;
    }
  }
  else {
    puVar35[2] = 0;
    *puVar35 = &
               ___7__TObject_VFParameters_FInstanceHierarchySanitizeInstanceArgs_CS___FRDGAllocator__6B_
    ;
    puVar35[3] = 0;
    puVar33 = puVar35;
  }
  local_738 = puVar33;
  if ((((undefined8 **)param_1->_padding_ <= &local_738) &&
      (&local_738 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
    pcVar7 = (code *)swi(3);
    pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
    return pFVar36;
  }
  iVar24 = (int)param_1->_padding_;
  piVar3 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar24 == *piVar3) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar3);
    *(int *)&param_1->_padding_ = iVar24;
  }
  *(int *)&param_1->_padding_ = iVar24 + 1;
  pFVar2 = (FParameters *)(puVar33 + 2);
  local_768._padding_ = CONCAT53(local_768._padding_._3_5_,0x1c);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar24 * 8) = local_738;
  local_768.Buffer = local_728;
  pFVar26 = FRDGBuilder::CreateUAV(param_1,&local_768,None);
  *(FRDGBufferUAV **)&(pFVar2->DenoisingCommonParameters).ViewUniformBuffer = pFVar26;
  *(undefined4 *)((longlong)puVar33 + 0x24) = 0;
  if (param_3->StatsBuffer != (FRDGBuffer *)0x0) {
    puVar33[3] = param_3->StatsBufferSkipBarrierUAV;
  }
  if ((param_3->DebugFlags == 0) && ((param_3->RenderFlags & 0x8000) == 0)) {
    iVar24 = 0;
  }
  else {
    iVar24 = 1;
  }
  pFVar6 = param_3->SharedContext->ShaderMap;
  pFVar37 = (FShaderType *)FInstanceHierarchySanitizeInstanceArgs_CS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar6,&local_588,pFVar37,iVar24);
  if (local_588.ShaderContent == (FShader *)0x0) {
    FVar38 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_4e8);
    ::FName::ToString((FName *)FVar38,&local_528);
    FInstanceHierarchySanitizeInstanceArgs_CS::GetStaticType();
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
    if (bVar23) {
      pcVar7 = (code *)swi(3);
      pFVar36 = (FInstanceWorkGroupParameters *)(*pcVar7)();
      return pFVar36;
    }
  }
  FInstanceHierarchySanitizeInstanceArgs_CS::GetStaticType();
  local_5c0 = this->DeferredSetupContext;
  uStack_5b8 = this->GroupWorkArgsMaxCount;
  local_228 = (code *)0x0;
  local_5b0 = pFVar2;
  local_200 = FMemory::Malloc(0x20,8);
  *local_200 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::`30'::<lambda_5>,0,1>
                ::_vftable_;
  local_200[1] = (longlong)local_5c0;
  local_200[2] = CONCAT44(uStack_5b4,uStack_5b8);
  local_200[3] = (longlong)local_5b0;
  if (local_200 + 1 != (longlong *)0x0) {
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l30::<lambda_5>,UE::Math::TIntVector3<int>_>
                ::Call;
  }
  pFVar32 = FRDGEventName::FRDGEventName(&local_338,1,L"InstanceHierarchySanitizeInstanceArgs");
  pFVar28 = FInstanceHierarchySanitizeInstanceArgs_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_518.ShaderContent = local_588.ShaderContent;
  local_518.ShaderMap = local_588.ShaderMap;
  ValidateShaderParameters(&local_518,pFVar28,pFVar2);
  local_508._First = (FRDGResource **)0x0;
  local_508._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_588.ShaderContent)->Bindings,pFVar28,pFVar2,&local_508);
  local_f8.GroupCount.field0_0x0._0_8_ = local_228;
  local_b0 = local_200;
  local_f8.ComputeShader.ShaderContent = (FMotionVectorSubtractCS *)local_588.ShaderContent;
  local_f8.ComputeShader.ShaderMap = local_588.ShaderMap;
  local_200 = (longlong *)0x0;
  local_c8 = local_218;
  uStack_c0 = uStack_210;
  local_b8 = local_208;
  local_228 = (code *)0x0;
  local_f8.ParametersMetadata = pFVar28;
  local_f8.Parameters = pFVar2;
  FRDGBuilder::
  AddPassInternal<void,_FComputeShaderUtils::AddPass<FInstanceHierarchySanitizeInstanceArgs_CS>_::__l2::<lambda_1>_>
            (param_1,pFVar32,pFVar28,pFVar2,Compute,&local_f8);
  if ((code *)local_f8.GroupCount.field0_0x0._0_8_ != (code *)0x0) {
    plVar41 = &local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar41 = local_b0;
    }
    (**(code **)(*plVar41 + 0x10))();
  }
  if (local_338.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_228 != (code *)0x0) {
    plVar41 = &local_218;
    if (local_200 != (longlong *)0x0) {
      plVar41 = local_200;
    }
    (**(code **)(*plVar41 + 0x10))();
  }
  pFVar36 = local_6c8;
  local_578._padding_._0_1_ = 0x1c;
  local_578._padding_._4_4_ = 0;
  local_6c8->InInstanceWorkArgs = (FRDGBufferSRV *)0x0;
  local_6c8->InInstanceWorkGroups = (FRDGBufferSRV *)0x0;
  local_6c8->InViewDrawRanges = (FRDGBufferSRV *)0x0;
  local_6c8->InstanceIds = (FRDGBufferSRV *)0x0;
  local_578._padding_._0_4_ = 0xffffffff;
  local_578._padding_ = 0;
  local_578.Buffer = local_728;
  pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_578);
  pFVar36->InInstanceWorkArgs = pFVar31;
  local_600.Buffer = this->InstanceWorkGroupsRDG;
  local_600._padding_._4_4_ = 0;
  local_600._padding_._0_4_ = 0xffffffff;
  local_600._padding_ = 0;
  local_600._padding_._0_1_ = 0;
  if ((((local_600.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_600._padding_._0_1_ = 0x1c;
  }
  pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_600);
  pFVar36->InInstanceWorkGroups = pFVar31;
  pFVar36->InstanceIds = (this->ShaderParameters).InstanceIds;
  local_5e0.Buffer = this->ViewDrawRangesRDG;
  local_5e0._padding_._0_1_ = 0;
  local_5e0._padding_._4_4_ = 0;
  local_5e0._padding_._0_4_ = 0xffffffff;
  local_5e0._padding_ = 0;
  if ((((local_5e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_5e0._padding_._0_1_ = 0x1c;
  }
  pFVar31 = FRDGBuilder::CreateSRV(param_1,&local_5e0);
  pFVar36->InViewDrawRanges = pFVar31;
  return pFVar36;
}

// Init @ 144fc58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
Nanite::FInstanceHierarchyDriver::Init
          (FInstanceHierarchyDriver *this,FRDGBuilder *param_1,bool param_2,bool param_3,
          FGlobalShaderMap *param_4,FSceneInstanceCullingQuery *param_5,FRDGBuffer *param_6)

{
  code *pcVar1;
  FRDGBufferSRV *pFVar2;
  uint uVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  FRDGBuffer *pFVar10;
  FInstanceHierarchyParameters *pFVar11;
  undefined8 *puVar12;
  FRDGBufferUAV *pFVar13;
  FShaderType *pFVar14;
  FName this_00;
  FRDGEventName *pFVar15;
  FShaderParametersMetadata *pFVar16;
  byte bVar17;
  undefined ***pppuVar18;
  undefined1 auStackY_268 [32];
  undefined4 uStack_204;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  FRDGBufferUAVDesc local_1e8;
  FRDGBufferUAVDesc local_1d8;
  FRDGBufferUAVDesc local_1c8;
  TIntVector3<int>_u_0 local_1b8;
  undefined1 local_1a8 [8];
  FGlobalShaderMap *local_1a0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  FString local_188;
  TShaderRefBase<FInitInstanceHierarchyArgs_CS,FShaderMapPointerTable> local_178;
  FRDGBufferDesc local_168;
  FRDGBufferDesc local_150;
  FRDGBufferDesc local_138;
  FRDGBufferDesc local_120;
  FRDGBufferDesc local_108;
  FRDGEventName local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FDeferredSetupContext *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FDeferredSetupContext *local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  FDeferredSetupContext *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  puVar12 = (undefined8 *)0x0;
  local_1a0 = param_4;
  if ((param_2) && (param_5 != (FSceneInstanceCullingQuery *)0x0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  this->bIsEnabled = bVar6;
  pTVar5 = CVarNaniteAllowStaticGeometryPath.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bAllowStaticGeometryPath = pTVar5->ShadowedValue[1] != false;
  pTVar4 = CVarNaniteInstanceHierarchyArgsMaxWorkGroups.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = pTVar4->ShadowedValue[1];
  if ((int)uVar7 < 0x20) {
    uVar7 = 0x20;
  }
  this->GroupWorkArgsMaxCount = uVar7;
  if (this->bIsEnabled != false) {
    if ((param_6 == (FRDGBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InViewDrawRanges",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                           ,0x1bb7,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->ViewDrawRangesRDG = param_6;
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar9 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *puVar9 = &
                ___7__TObject_UFDeferredSetupContext_FInstanceHierarchyDriver_Nanite___FRDGAllocator__6B_
      ;
      *(undefined2 *)((longlong)puVar9 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar9 + 0x2f) = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar9 + 0x24) = 0xffffffffffffffff;
      *(undefined1 *)((longlong)puVar9 + 0x2c) = 0;
      puVar12 = puVar9;
    }
    local_1f8 = puVar12;
    if ((((undefined8 **)param_1->_padding_ <= &local_1f8) &&
        (&local_1f8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar8 = (int)param_1->_padding_;
    if (iVar8 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    local_b0 = (undefined ***)0x0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_1f8;
    this->DeferredSetupContext = (FDeferredSetupContext *)(puVar12 + 1);
    ((FDeferredSetupContext *)(puVar12 + 1))->SceneInstanceCullingQuery = param_5;
    this->DeferredSetupContext->SceneInstanceCullResult = param_5->CullingResult;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_c0 = this->DeferredSetupContext;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_1>,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
                  ::Call;
    pFVar10 = CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
                        (param_1,L"Shadow.CellChunkDraws",
                         (TFunction<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&___cdecl(void)>
                          *)local_d8);
    if (local_d8[0] != (code *)0x0) {
      pppuVar18 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar18 = local_b0;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    this->ChunkDrawViewGroupIdsRDG = pFVar10;
    local_168.BytesPerElement = 4;
    local_168.NumElements = 8;
    local_168._12_4_ = uStack_204;
    local_168.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_168.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar10 = FRDGBuilder::CreateBuffer
                        (param_1,&local_168,L"Nanite.InstanceHierarhcy.InstanceWorkArgs[0]",None);
    this->InstanceWorkArgs[0] = pFVar10;
    if (param_3) {
      local_150.BytesPerElement = 4;
      local_150.NumElements = 4;
      local_150._12_4_ = uStack_204;
      local_150.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
      local_150.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar10 = FRDGBuilder::CreateBuffer
                          (param_1,&local_150,L"Nanite.InstanceHierarhcy.OccludedChunkArgs",None);
      local_138.BytesPerElement = 4;
      local_138.NumElements = 8;
      local_138._12_4_ = uStack_204;
      local_138.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
      this->OccludedChunkArgsRDG = pFVar10;
      local_138.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar10 = FRDGBuilder::CreateBuffer
                          (param_1,&local_138,L"Nanite.InstanceHierarhcy.InstanceWorkArgs[1]",None);
      this->InstanceWorkArgs[1] = pFVar10;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`15'::<lambda_2>,0,0>
                  ::_vftable_;
      local_90 = this->DeferredSetupContext;
      local_120.BytesPerElement = 0xc;
      local_120.NumElements = 1;
      local_120._12_4_ = uStack_204;
      local_120.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l15::<lambda_2>,unsigned_int>
                    ::Call;
      local_80 = (undefined ***)0x0;
      local_120.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar10 = FRDGBuilder::CreateBuffer
                          (param_1,&local_120,L"Nanite.InstanceHierarhcy.OccludedChunkDraws",
                           (TFunction<unsigned_int___cdecl(void)> *)local_a8,None);
      this->OccludedChunkDrawsRDG = pFVar10;
      if (local_a8[0] != (code *)0x0) {
        pppuVar18 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar18 = local_80;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Nanite::FInstanceHierarchyDriver::Init'::`5'::<lambda_3>,0,0>
                ::_vftable_;
    local_60 = this->DeferredSetupContext;
    local_108.BytesPerElement = 0xc;
    local_108.NumElements = 1;
    local_108._12_4_ = uStack_204;
    local_108.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_3>,unsigned_int>
                  ::Call;
    local_50 = (undefined ***)0x0;
    local_108.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar10 = FRDGBuilder::CreateBuffer
                        (param_1,&local_108,L"Nanite.InstanceHierarhcy.InstanceWorkGroups",
                         (TFunction<unsigned_int___cdecl(void)> *)local_78,None);
    this->InstanceWorkGroupsRDG = pFVar10;
    if (local_78[0] != (code *)0x0) {
      pppuVar18 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar18 = local_50;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    pFVar11 = FSceneCullingRenderer::GetShaderParameters(param_5->SceneCullingRenderer,param_1);
    uVar7 = pFVar11->CellBlockDimLog2;
    uVar3 = pFVar11->LocalCellCoordMask;
    iVar8 = pFVar11->FirstLevel;
    (this->ShaderParameters).NumCellsPerBlockLog2 = pFVar11->NumCellsPerBlockLog2;
    (this->ShaderParameters).CellBlockDimLog2 = uVar7;
    (this->ShaderParameters).LocalCellCoordMask = uVar3;
    (this->ShaderParameters).FirstLevel = iVar8;
    uVar7 = pFVar11->NumAllocatedChunks;
    pFVar2 = pFVar11->InstanceHierarchyCellBlockData;
    (this->ShaderParameters).bCullChunkViewDistance = pFVar11->bCullChunkViewDistance;
    (this->ShaderParameters).NumAllocatedChunks = uVar7;
    (this->ShaderParameters).InstanceHierarchyCellBlockData = pFVar2;
    pFVar2 = pFVar11->InstanceHierarchyItemChunks;
    (this->ShaderParameters).InstanceHierarchyCellHeaders = pFVar11->InstanceHierarchyCellHeaders;
    (this->ShaderParameters).InstanceHierarchyItemChunks = pFVar2;
    pFVar2 = pFVar11->ExplicitChunkBounds;
    (this->ShaderParameters).InstanceIds = pFVar11->InstanceIds;
    (this->ShaderParameters).ExplicitChunkBounds = pFVar2;
    pFVar2 = pFVar11->UsedChunkIdMask;
    (this->ShaderParameters).ExplicitChunkCellIds = pFVar11->ExplicitChunkCellIds;
    (this->ShaderParameters).UsedChunkIdMask = pFVar2;
    puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *puVar12 = &___7__TObject_VFParameters_FInitInstanceHierarchyArgs_CS___FRDGAllocator__6B_;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
    }
    local_1f0 = puVar12;
    if ((((undefined8 **)param_1->_padding_ <= &local_1f0) &&
        (&local_1f0 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar8 = (int)param_1->_padding_;
    if (iVar8 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar8 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_1f0;
    local_1e8.Buffer = this->InstanceWorkArgs[0];
    local_1e8._padding_._2_1_ = 0;
    bVar17 = 0;
    if ((((local_1e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_1e8._padding_._0_2_ = (ushort)bVar17;
    pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_1e8,None);
    puVar12[7] = pFVar13;
    if (param_3) {
      local_1d8.Buffer = this->InstanceWorkArgs[1];
      bVar17 = 0;
      local_1d8._padding_._2_1_ = 0;
      if ((((local_1d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar17 = 0x1c;
      }
      local_1d8._padding_._0_2_ = (ushort)bVar17;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_1d8,None);
      puVar12[8] = pFVar13;
      local_1c8.Buffer = this->OccludedChunkArgsRDG;
      bVar17 = 0;
      local_1c8._padding_._2_1_ = 0;
      if ((((local_1c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar17 = 0x1c;
      }
      local_1c8._padding_._0_2_ = (ushort)bVar17;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_1c8,None);
      puVar12[10] = pFVar13;
    }
    pFVar14 = (FShaderType *)FInitInstanceHierarchyArgs_CS::GetStaticType();
    FGlobalShaderMap::GetShader(local_1a0,&local_198,pFVar14,(uint)param_3);
    if (local_198.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1a8);
      ::FName::ToString((FName *)this_00,&local_188);
      FInitInstanceHierarchyArgs_CS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FInitInstanceHierarchyArgs_CS::GetStaticType();
    local_178.ShaderContent = (FInitInstanceHierarchyArgs_CS *)local_198.ShaderContent;
    local_178.ShaderMap = local_198.ShaderMap;
    pFVar15 = FRDGEventName::FRDGEventName(&local_f0,1,L"InitArgs");
    pFVar16 = FInitInstanceHierarchyArgs_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_1b8._s_0.X = 1;
    local_1b8._s_0.Y = 1;
    local_1b8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FInitInstanceHierarchyArgs_CS>
              (param_1,pFVar15,Compute,&local_178,pFVar16,(FParameters *)(puVar12 + 2),
               (TIntVector3<int> *)&local_1b8._s_0);
    if (local_f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

