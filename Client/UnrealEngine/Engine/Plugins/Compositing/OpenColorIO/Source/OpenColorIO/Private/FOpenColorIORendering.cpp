// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 12

// operator() @ 14d76a9f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FOpenColorIORendering::AddPass_RenderThread'::__l25::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FScreenPassViewInfo local_38;
  <lambda_1> local_28;
  
  local_38._0_8_ = *(undefined8 *)this;
  local_38._8_8_ = *(undefined8 *)((longlong)this + 8);
  local_28.PipelineState = (FScreenPassPipelineState *)((longlong)this + 0x40);
  local_28.ParametersMetadata =
       (TSharedPtr<FShaderParametersMetadata_const_,1> *)((longlong)this + 0x80);
  local_28.PixelShaderParameters = (FParameters **)((longlong)this + 0x90);
  local_28.RHICmdList = param_2;
  DrawScreenPass<__FOpenColorIORendering::AddPass_RenderThread_::__l25::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (param_2,&local_38,(FScreenPassTextureViewport *)((longlong)this + 0x10),
             (FScreenPassTextureViewport *)((longlong)this + 0x28),local_28.PipelineState,None,
             &local_28);
  return;
}

// operator() @ 14d76aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  Type TVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TRefCountPtr<IPooledRenderTarget> TVar7;
  FRDGTexture *pFVar8;
  FRDGTexture *pFVar9;
  longlong lVar10;
  undefined1 auStackY_8d8 [32];
  undefined1 local_898 [16];
  longlong local_888;
  FOpenColorIORenderPassResources local_878;
  undefined1 local_850 [16];
  longlong local_840;
  longlong lStack_838;
  FScreenPassRenderTarget local_830;
  FRDGBuilder local_808;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  local_898._0_8_ = L"";
  local_898._8_8_ = (FScriptContainerElement *)0x0;
  local_888 = 0;
  FRDGBuilder::FRDGBuilder(&local_808,param_1,(FRDGEventName *)local_898,None,GMaxRHIShaderPlatform)
  ;
  TVar7 = CreateRenderTarget((FRHITexture *)local_850,
                             *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x20));
  pFVar8 = FRDGBuilder::RegisterExternalTexture
                     (&local_808,(TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((longlong *)local_850._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_850._0_8_ + 0x38))();
  }
  TVar7 = CreateRenderTarget((FRHITexture *)local_898,
                             *(wchar_t **)(*(longlong *)((longlong)this + 0x10) + 0x20));
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     (&local_808,(TRefCountPtr<IPooledRenderTarget> *)TVar7.Reference,None);
  if ((wchar_t *)local_898._0_8_ != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_898._0_8_ + 0x38))();
  }
  iVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x38))();
  iVar6 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x30))();
  local_830._padding_ = (longlong)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_830._padding_ = CONCAT44(iVar5,iVar6);
  if (pFVar9 != (FRDGTexture *)0x0) {
    iVar1 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    iVar1 = (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.X = iVar6;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    (pFVar9->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar5;
  }
  local_878.TextureResources.ArrayNum = *(int *)((longlong)this + 0x28);
  lVar10 = (longlong)local_878.TextureResources.ArrayNum;
  local_878.ShaderResource = *(FOpenColorIOTransformResource **)((longlong)this + 0x18);
  pvVar3 = *(void **)((longlong)this + 0x20);
  local_830.LoadAction = EClear;
  local_878.TextureResources.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_830._padding_ = (longlong)pFVar9;
  if (local_878.TextureResources.ArrayNum == 0) {
    local_878.TextureResources.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_878.TextureResources.ArrayNum,0,
               &local_878.TextureResources.AllocatorInstance,local_878.TextureResources.ArrayNum,
               &local_878.TextureResources.ArrayMax);
    memcpy(local_878.TextureResources.AllocatorInstance.Data,pvVar3,lVar10 << 3);
  }
  local_878.TransformName.Data.ArrayNum = *(int *)((longlong)this + 0x38);
  lVar10 = (longlong)local_878.TransformName.Data.ArrayNum;
  pvVar3 = *(void **)((longlong)this + 0x30);
  local_878.TransformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_878.TransformName.Data.ArrayNum == 0) {
    local_878.TransformName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_878.TransformName.Data.ArrayNum,0,
               (ForAnyElementType *)&local_878.TransformName,local_878.TransformName.Data.ArrayNum,
               &local_878.TransformName.Data.ArrayMax);
    memcpy(local_878.TransformName.Data.AllocatorInstance.Data,pvVar3,lVar10 * 2);
  }
  local_840 = 0;
  lStack_838 = 0;
  if (pFVar8 != (FRDGTexture *)0x0) {
    lStack_838 = *(longlong *)&(pFVar8->Desc).field_0x24;
  }
  TVar2 = *(Type *)this;
  local_898._4_4_ = 0xffffffff;
  local_898._0_4_ = GMaxRHIFeatureLevel;
  local_898._8_4_ = 1;
  local_850._8_8_ = pFVar8;
  bVar4 = IsHMDHiddenAreaMaskActive();
  local_898[0xc] = bVar4;
  FOpenColorIORendering::AddPass_RenderThread
            (&local_808,(FScreenPassViewInfo *)local_898,TVar2,(FScreenPassTexture *)(local_850 + 8)
             ,&local_830,&local_878,__real_3f800000,None);
  if (local_878.TransformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.TransformName.Data.AllocatorInstance.Data);
  }
  if (local_878.TextureResources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.TextureResources.AllocatorInstance.Data);
  }
  FRDGBuilder::Execute(&local_808);
  FRDGBuilder::~FRDGBuilder(&local_808);
  return;
}

// AddPass_RenderThread @ 14d76b790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FOpenColorIORendering::AddPass_RenderThread
          (FRDGBuilder *param_1,FSceneView *param_2,FScreenPassTexture *param_3,
          FScreenPassRenderTarget *param_4,FOpenColorIORenderPassResources *param_5,
          EOpenColorIOTransformAlpha param_6)

{
  FEngineShowFlags *pFVar1;
  float fVar2;
  float fVar3;
  FScreenPassViewInfo local_28 [2];
  
  fVar2 = (float)(**(code **)(param_2->Family->RenderTarget->_padding_ + 0x30))();
  fVar3 = UTextureRenderTarget::GetDefaultDisplayGamma();
  if (pFVar1->PostProcessing == 1 && pFVar1->Tonemapper == 1) {
    fVar3 = fVar3 / fVar2;
  }
  local_28[0].bHMDHiddenAreaMaskActive = param_2->bHMDHiddenAreaMaskActive;
  local_28[0].InstanceCount = param_2->InstanceFactor;
  local_28[0].StereoViewIndex = param_2->StereoViewIndex;
  local_28[0].FeatureLevel = param_2->FeatureLevel;
  AddPass_RenderThread(param_1,local_28,param_2->FeatureLevel,param_3,param_4,param_5,fVar3,param_6)
  ;
  return;
}

// AddPass_RenderThread @ 14d76b870

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FOpenColorIORendering::AddPass_RenderThread
          (FRDGBuilder *param_1,FScreenPassViewInfo *param_2,Type param_3,
          FScreenPassTexture *param_4,FScreenPassRenderTarget *param_5,
          FOpenColorIORenderPassResources *param_6,float param_7,EOpenColorIOTransformAlpha param_8)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement FVar2;
  FRDGTexture *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  FOpenColorIOTransformResource *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  TRefCountPtr<FRHIBlendState> TVar9;
  TRefCountPtr<FRHIDepthStencilState> TVar10;
  FShaderParametersMetadata *pFVar11;
  FShader *pFVar12;
  FOpenColorIOPixelShader *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FGlobalShaderMap *this;
  FShaderType *pFVar17;
  FName FVar18;
  UTexture *this_00;
  TStridedView<FOpenColorIOPixelShader::FParameters,int> *this_01;
  FParameters *pFVar19;
  undefined8 uVar20;
  FRDGEventName *pFVar21;
  FOpenColorIOInvalidShaderParameters *pFVar22;
  FShaderParametersMetadata *pFVar23;
  uint uVar24;
  TReferenceControllerBase<1> *pTVar25;
  FWeakObjectPtr *this_02;
  TIntPoint<int>_u_0 TVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 local_res18 [8];
  FScreenPassTexture *local_res20;
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  FTextureResource *local_398;
  TReferenceControllerBase<1> *local_390;
  FShaderParametersMetadata *local_388;
  FShader *local_380;
  FShaderMapBase *local_378;
  TIntPoint<int>_u_0 local_370;
  TIntPoint<int>_u_0 local_368;
  TIntPoint<int>_u_0 local_360;
  TIntPoint<int>_u_0 local_358;
  FShader *local_348;
  FShaderMapBase *pFStack_340;
  FShader *local_338;
  FShaderMapBase *pFStack_330;
  FRHIBlendState *local_328;
  FRHIDepthStencilState *pFStack_320;
  FRHIVertexDeclaration *local_318;
  uchar uStack_310;
  uint7 uStack_30f;
  FRenderTargetBinding local_308;
  FRenderTargetBinding local_2f0;
  TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> local_2d8;
  TIntPoint<int>_u_0 local_2c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2c0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2a0;
  FRDGEventName local_290;
  FRDGEventName local_278;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_258;
  initializer_list<FRDGResource_*> local_248;
  FString local_238;
  initializer_list<FRDGResource_*> local_228;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  FString local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  <lambda_1> local_1d8;
  undefined8 local_140;
  undefined8 uStack_138;
  TIntPoint<int>_u_0 local_130;
  TIntPoint<int>_u_0 local_128;
  TIntPoint<int>_u_0 local_120;
  TIntPoint<int>_u_0 local_118;
  TIntPoint<int>_u_0 local_110;
  TIntPoint<int>_u_0 local_108;
  FShader *local_100;
  FShaderMapBase *pFStack_f8;
  FShader *local_f0;
  FShaderMapBase *pFStack_e8;
  FRHIBlendState *local_e0;
  FRHIDepthStencilState *pFStack_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  FShader *local_c0;
  FShaderMapBase *local_b8;
  FOpenColorIOInvalidShaderParameters *local_b0;
  undefined1 local_a8;
  FRDGEventName local_a0;
  FRDGEventName local_88;
  TStridedView<FOpenColorIOPixelShader::FParameters,int> local_70 [3];
  
  local_res20 = param_4;
  bVar14 = IsInRenderingThread();
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                          ,0x27,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = param_4->Texture;
  local_360 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(param_4->ViewRect).field0_0x0;
  local_358 = (TIntPoint<int>_u_0)
              *(TIntPoint<int>_u_0 *)
               &((TIntPoint<int>_u_0 *)((longlong)&(param_4->ViewRect).field0_0x0 + 8))->_s_0;
  if (((pFVar3 == (FRDGTexture *)0x0) ||
      ((local_358._s_0.X == local_360._s_0.X && (local_358._s_0.Y == local_360._s_0.Y)))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar26 = *(TIntPoint<int>_u_0 *)&(pFVar3->Desc).field_0x24;
  lVar29 = param_5->_padding_;
  local_370 = (TIntPoint<int>_u_0)param_5->_padding_;
  local_368 = (TIntPoint<int>_u_0)param_5->_padding_;
  local_2c8 = TVar26;
  if (((lVar29 == 0) ||
      ((local_368._s_0.X == local_370._s_0.X && (local_368._s_0.Y == local_370._s_0.Y)))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar4 = *(TIntPoint<int>_u_0 *)(lVar29 + 0xa4);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar17 = (FShaderType *)FScreenPassVS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_2b0,pFVar17,0);
  if (local_2b0.ShaderContent == (FShader *)0x0) {
    FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_218);
    ::FName::ToString((FName *)FVar18,&local_208);
    FScreenPassVS::GetStaticType();
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FScreenPassVS::GetStaticType();
  local_380 = local_2b0.ShaderContent;
  local_378 = local_2b0.ShaderMap;
  uVar28 = (param_6->TextureResources).ArrayNum;
  local_3a8.Data = (FScriptContainerElement *)0x0;
  local_3a0 = 0;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  if (0 < (int)uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar28,&local_3a8,0,(int *)((longlong)&local_3a0 + 4));
  }
  this_02 = (FWeakObjectPtr *)(param_6->TextureResources).AllocatorInstance.Data;
  iVar27 = (param_6->TextureResources).ArrayNum;
  pFVar1 = this_02 + iVar27;
  while( true ) {
    if ((param_6->TextureResources).ArrayNum != iVar27) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (this_02 == pFVar1) break;
    bVar14 = FWeakObjectPtr::IsValid(this_02,false,true);
    if (bVar14) {
      this_00 = (UTexture *)FWeakObjectPtr::Get(this_02);
      local_398 = UTexture::GetResource(this_00);
      if ((local_398 != (FTextureResource *)0x0) && (local_398->_padding_ != 0)) {
        if ((local_3a8.Data <= (FScriptContainerElement *)&local_398) &&
           (((FScriptContainerElement *)&local_398 < local_3a8.Data + (longlong)local_3a0._4_4_ * 8
            && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = (int)local_3a0;
        if ((int)local_3a0 == local_3a0._4_4_) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_3a8,(int *)((longlong)&local_3a0 + 4));
        }
        local_3a0 = CONCAT44(local_3a0._4_4_,iVar15 + 1);
        *(FTextureResource **)(local_3a8.Data + (longlong)iVar15 * 8) = local_398;
      }
    }
    this_02 = this_02 + 1;
  }
  pFVar5 = param_6->ShaderResource;
  iVar27 = (param_6->TextureResources).ArrayNum;
  iVar15 = (int)local_3a0;
  if (pFVar5 == (FOpenColorIOTransformResource *)0x0) {
    local_390 = (TReferenceControllerBase<1> *)0x0;
    local_388 = (FShaderParametersMetadata *)0x0;
    local_1e0 = 0;
    local_1e8 = 0;
  }
  else {
    local_390 = (pFVar5->ShaderParametersMetadata).SharedReferenceCount.ReferenceController;
    local_388 = (pFVar5->ShaderParametersMetadata).Object;
    if (local_390 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_390->SharedReferenceCount = (atomic<int>)((int)local_390->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0 = 0;
    local_1f8 = 0;
  }
  pFVar23 = local_388;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((iVar15 == iVar27) &&
      (pFVar5 = param_6->ShaderResource, pFVar5 != (FOpenColorIOTransformResource *)0x0)) &&
     (pFVar23 != (FShaderParametersMetadata *)0x0)) {
    if (((GIsThreadedRendering != false) && (bVar14 = IsInGameThread(), bVar14)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GIsThreadedRendering || !IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Public\\OpenColorIOShared.h"
                            ,0x1e9,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FOpenColorIOShaderMap::GetShader<FOpenColorIOPixelShader>
              (pFVar5->RenderingThreadShaderMap,&local_2d8);
    uVar28 = 1;
    this_01 = FRDGBuilder::AllocParameters<FOpenColorIOPixelShader::FParameters>
                        (param_1,local_70,pFVar23,1);
    pFVar19 = TStridedView<FOpenColorIOPixelShader::FParameters,int>::GetElementPtr(this_01,0);
    local_308.ResolveTexture = (FRDGTexture *)0x0;
    local_308.MipIndex = '\0';
    *(FRDGTexture **)pFVar19 = local_res20->Texture;
    *(FRHISamplerState **)&pFVar19->field_0x8 =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    *(EOpenColorIOTransformAlpha *)&pFVar19[1].field_0x4 = param_8;
    *(float *)(pFVar19 + 1) = param_7;
    local_308.Texture = (FRDGTexture *)param_5->_padding_;
    local_308.LoadAction = param_5->LoadAction;
    local_308.ArraySlice = -1;
    bVar14 = FRenderTargetBinding::Validate(&local_308);
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = local_388;
    *(FRDGTexture **)(pFVar19 + 2) = local_308.Texture;
    *(FRDGTexture **)&pFVar19[2].field_0x8 = local_308.ResolveTexture;
    *(ulonglong *)(pFVar19 + 3) =
         CONCAT44(local_308._20_4_,
                  CONCAT22(local_308.ArraySlice,CONCAT11(local_308.MipIndex,local_308.LoadAction)));
    iVar27 = (pFVar23->Members).ArrayNum;
    if (1 < iVar27) {
      lVar29 = 0x30;
      do {
        uVar16 = (int)(uVar28 - 1) / 2;
        uVar24 = 0;
        if ((int)uVar28 < iVar27) {
          uVar24 = ~uVar28 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pFVar11->Members).AllocatorInstance.Data;
        FVar2 = pFVar6[lVar29 + 0x18];
        if (FVar2 == (FScriptContainerElement)0x5) {
          uVar24 = 0;
          if ((int)uVar16 < (int)local_3a0) {
            uVar24 = ~uVar16 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar20 = *(undefined8 *)(*(longlong *)(local_3a8.Data + (longlong)(int)uVar16 * 8) + 0x20)
          ;
LAB_14d76bed5:
          *(undefined8 *)(&pFVar19->field_0x0 + *(uint *)(pFVar6 + lVar29 + 0x14)) = uVar20;
        }
        else {
          if (FVar2 == (FScriptContainerElement)0x8) {
            uVar24 = 0;
            if ((int)uVar16 < (int)local_3a0) {
              uVar24 = ~uVar16 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar20 = *(undefined8 *)
                      (*(longlong *)(local_3a8.Data + (longlong)(int)uVar16 * 8) + 0x28);
            goto LAB_14d76bed5;
          }
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                              ,100,L"");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar27 = (pFVar11->Members).ArrayNum;
        uVar28 = uVar28 + 1;
        lVar29 = lVar29 + 0x30;
        TVar26 = local_2c8;
        pFVar23 = local_388;
      } while ((int)uVar28 < iVar27);
    }
    pFVar12 = local_380;
    if ((local_380 == (FShader *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                            ,0x69,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar13 = local_2d8.ShaderContent;
    if (((FShader *)local_2d8.ShaderContent == (FShader *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                            ,0x6a,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar19 == (FParameters *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShaderParameters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                            ,0x6b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_258.ShaderContent = (FShader *)local_2d8.ShaderContent;
    local_258.ShaderMap = local_2d8.ShaderMap;
    ValidateShaderParameters(&local_258,pFVar23,pFVar19);
    local_248._First = (FRDGResource **)0x0;
    local_248._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl((FShaderParameterBindings *)pFVar13,pFVar23,pFVar19,&local_248);
    pFStack_340 = local_378;
    local_328 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                ::StaticResource.StateRHI.Reference;
    pFStack_320 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                  ::StaticResource.StateRHI.Reference;
    local_318 = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_348 = pFVar12;
    local_338 = (FShader *)pFVar13;
    pFStack_330 = local_2d8.ShaderMap;
    uStack_310 = '\0';
    pFVar21 = FRDGEventName::FRDGEventName(&local_a0,L"OpenColorIOPass %dx%d (%s)");
    local_290.EventFormat = pFVar21->EventFormat;
    ::FString::FString(&local_290.FormattedEventName,&pFVar21->FormattedEventName);
    if (local_a0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pTVar25 = local_390;
    local_1d8.ParametersMetadata.SharedReferenceCount.ReferenceController = local_390;
    local_1d8.ViewInfo.FeatureLevel = param_2->FeatureLevel;
    local_1d8.ViewInfo.StereoViewIndex = param_2->StereoViewIndex;
    local_1d8.ViewInfo.InstanceCount = param_2->InstanceCount;
    local_1d8.ViewInfo.bHMDHiddenAreaMaskActive = param_2->bHMDHiddenAreaMaskActive;
    local_1d8.ViewInfo._13_3_ = *(undefined3 *)&param_2->field_0xd;
    local_1d8.OutputViewport.Rect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_370;
    local_1d8.OutputViewport.Rect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_368;
    local_1d8.InputViewport.Rect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_360;
    local_1d8.InputViewport.Rect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)local_358;
    local_1d8.PipelineState.VertexShader.ShaderContent = local_348;
    local_1d8.PipelineState.VertexShader.ShaderMap = pFStack_340;
    local_1d8.PipelineState.PixelShader.ShaderContent = local_338;
    local_1d8.PipelineState.PixelShader.ShaderMap = pFStack_330;
    local_1d8.PipelineState._57_7_ = uStack_30f;
    local_1d8.PipelineState.StencilRef = uStack_310;
    local_1d8.PipelineState.BlendState = local_328;
    local_1d8.PipelineState.DepthStencilState = pFStack_320;
    local_1d8.PipelineState.VertexDeclaration = local_318;
    if (local_390 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_390->SharedReferenceCount = (atomic<int>)((int)local_390->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d8.OutputViewport.Extent.field0_0x0 = TVar4;
    local_1d8.InputViewport.Extent.field0_0x0 = TVar26;
    local_1d8.ParametersMetadata.Object = pFVar23;
    local_1d8.PixelShaderParameters = pFVar19;
    FRDGBuilder::
    AddPassInternal<void,_FOpenColorIORendering::AddPass_RenderThread_::__l25::<lambda_1>_>
              (param_1,&local_290,pFVar23,pFVar19,Raster,&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.ParametersMetadata.SharedReferenceCount.ReferenceController);
    if (local_290.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_290.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar17 = (FShaderType *)FOpenColorIOInvalidPixelShader::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_2c0,pFVar17,0);
    if (local_2c0.ShaderContent == (FShader *)0x0) {
      FVar18 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_210);
      ::FName::ToString((FName *)FVar18,&local_238);
      FOpenColorIOInvalidPixelShader::GetStaticType();
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FOpenColorIOInvalidPixelShader::GetStaticType();
    pFVar22 = FRDGAllocator::Alloc<FOpenColorIOInvalidShaderParameters>
                        ((FRDGAllocator *)&param_1->_padding_);
    pFVar22->InputTexture = local_res20->Texture;
    pFVar22->InputTextureSampler =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    lVar29 = GSystemTextures._296_8_;
    if (GSystemTextures._296_8_ == 0) {
      lVar29 = GSystemTextures._32_8_;
    }
    pFVar22->MiniFontTexture = *(FRHITexture **)(lVar29 + 8);
    local_2f0.Texture = (FRDGTexture *)param_5->_padding_;
    local_2f0.LoadAction = param_5->LoadAction;
    local_2f0.ArraySlice = -1;
    local_2f0.ResolveTexture = (FRDGTexture *)0x0;
    local_2f0.MipIndex = '\0';
    bVar14 = FRenderTargetBinding::Validate(&local_2f0);
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (pFVar22->RenderTargets).Output.Elements[0].Texture = local_2f0.Texture;
    (pFVar22->RenderTargets).Output.Elements[0].ResolveTexture = local_2f0.ResolveTexture;
    (pFVar22->RenderTargets).Output.Elements[0].LoadAction = local_2f0.LoadAction;
    (pFVar22->RenderTargets).Output.Elements[0].MipIndex = local_2f0.MipIndex;
    (pFVar22->RenderTargets).Output.Elements[0].ArraySlice = local_2f0.ArraySlice;
    *(undefined4 *)&(pFVar22->RenderTargets).Output.Elements[0].field_0x14 = local_2f0._20_4_;
    pFVar21 = FRDGEventName::FRDGEventName(&local_88,L"OpenColorIOInvalidPass %dx%d");
    local_278.EventFormat = pFVar21->EventFormat;
    ::FString::FString(&local_278.FormattedEventName,&pFVar21->FormattedEventName);
    if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
    }
    TVar10.Reference =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    TVar9.Reference =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    uVar20._0_4_ = param_2->FeatureLevel;
    uVar20._4_4_ = param_2->StereoViewIndex;
    uVar8._0_4_ = param_2->InstanceCount;
    uVar8._4_1_ = param_2->bHMDHiddenAreaMaskActive;
    uVar8._5_3_ = *(undefined3 *)&param_2->field_0xd;
    if ((local_380 == (FShader *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x206,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((local_2c0.ShaderContent == (FShader *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x207,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar22 == (FOpenColorIOInvalidShaderParameters *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelShaderParameters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                            ,0x208,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar23 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
    local_2a0.ShaderContent = local_2c0.ShaderContent;
    local_2a0.ShaderMap = local_2c0.ShaderMap;
    ValidateShaderParameters(&local_2a0,pFVar23,pFVar22);
    local_228._First = (FRDGResource **)0x0;
    local_228._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_2c0.ShaderContent)->Bindings,pFVar23,pFVar22,&local_228);
    local_348 = local_380;
    pFStack_340 = local_378;
    local_318 = (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_128 = local_370;
    local_120 = local_368;
    pFStack_330 = local_2c0.ShaderMap;
    local_110 = local_360;
    local_100 = local_380;
    pFStack_f8 = local_378;
    local_338 = local_2c0.ShaderContent;
    local_f0 = local_2c0.ShaderContent;
    pFStack_e8 = local_2c0.ShaderMap;
    local_328 = TVar9.Reference;
    pFStack_320 = TVar10.Reference;
    uStack_310 = '\0';
    lStack_c8 = (ulonglong)uStack_30f << 8;
    local_108 = local_358;
    local_e0 = TVar9.Reference;
    pFStack_d8 = TVar10.Reference;
    local_c0 = local_2c0.ShaderContent;
    local_d0 = GFilterVertexDeclaration._32_8_;
    local_b8 = local_2c0.ShaderMap;
    local_a8 = 0;
    local_140 = uVar20;
    uStack_138 = uVar8;
    local_130 = TVar4;
    local_118 = TVar26;
    local_b0 = pFVar22;
    pFVar23 = FOpenColorIOInvalidShaderParameters::FTypeInfo::GetStructMetadata();
    FRDGBuilder::
    AddPassInternal<FOpenColorIOInvalidShaderParameters,_AddDrawScreenPass<FOpenColorIOInvalidPixelShader>_::__l2::<lambda_1>_>
              (param_1,&local_278,pFVar23,pFVar22,Raster,(<lambda_1> *)&local_140);
    pTVar25 = local_390;
    if (local_278.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_278.FormattedEventName.Data.AllocatorInstance.Data);
      pTVar25 = local_390;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  if (local_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data);
  }
  return;
}

// ApplyColorTransform @ 14d76c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FOpenColorIORendering::ApplyColorTransform
          (UWorld *param_1,FOpenColorIOColorConversionSettings *param_2,UTexture *param_3,
          UTextureRenderTarget2D *param_4)

{
  Type TVar1;
  int iVar2;
  int iVar3;
  UOpenColorIOConfiguration *pUVar4;
  UOpenColorIOColorTransform *this;
  FOpenColorIOShaderMap *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FOpenColorIOTransformResource *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  FTextureResource *pFVar13;
  FTextureResource *pFVar14;
  FString *pFVar15;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar16;
  code **ppcVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125 [5];
  FOpenColorIOTransformResource *local_120;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_118;
  Type local_108;
  FOpenColorIOColorConversionSettings *local_100;
  FOpenColorIOTransformResource **local_f8;
  FTextureResource *local_f0;
  FTextureResource *local_e8;
  TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                          ,0xd7,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  if (param_3 == (UTexture *)0x0) {
    local_128 = 0;
    bVar11 = `FOpenColorIORendering::ApplyColorTransform'::__l10::<lambda_1>::operator()(&local_128)
    ;
    if (bVar11) goto LAB_14d76c82b;
LAB_14d76c892:
    bVar11 = false;
  }
  else {
LAB_14d76c82b:
    if (param_4 == (UTextureRenderTarget2D *)0x0) {
      local_127 = 0;
      bVar11 = `FOpenColorIORendering::ApplyColorTransform'::__l13::<lambda_2>::operator()
                         (&local_127);
      if (!bVar11) goto LAB_14d76c892;
    }
    pFVar13 = UTexture::GetResource(param_3);
    local_f0 = pFVar13;
    pFVar14 = UTexture::GetResource((UTexture *)param_4);
    local_e8 = pFVar14;
    if (pFVar13 == (FTextureResource *)0x0) {
      local_126 = 0;
      bVar11 = `FOpenColorIORendering::ApplyColorTransform'::__l16::<lambda_3>::operator()
                         (&local_126);
      if (!bVar11) goto LAB_14d76c892;
    }
    if (pFVar14 == (FTextureResource *)0x0) {
      local_125[0] = 0;
      bVar11 = `FOpenColorIORendering::ApplyColorTransform'::__l19::<lambda_4>::operator()
                         (local_125);
      if (!bVar11) goto LAB_14d76c892;
    }
    TVar1 = param_1->Scene->FeatureLevel;
    pUVar4 = (param_2->ConfigurationSource).field0_0x0.DebugPtr;
    local_120 = (FOpenColorIOTransformResource *)0x0;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_108 = TVar1;
    if (pUVar4 != (UOpenColorIOConfiguration *)0x0) {
      pFVar18 = (pUVar4->ColorTransforms).AllocatorInstance.Data;
      pFVar5 = pFVar18 + (longlong)(pUVar4->ColorTransforms).ArrayNum * 8;
      local_100 = param_2;
      for (; pFVar18 != pFVar5; pFVar18 = pFVar18 + 8) {
        bVar11 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                           (&local_100,*(UOpenColorIOColorTransform **)pFVar18);
        if (bVar11) {
          this = *(UOpenColorIOColorTransform **)pFVar18;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (this == (UOpenColorIOColorTransform *)0x0) break;
            UE::GC::MarkAsReachable((UObject *)this);
          }
          if (this == (UOpenColorIOColorTransform *)0x0) break;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          if ((((uint)this->_padding_ >> 0x1e & 1) != 0) ||
             (bVar11 = UOpenColorIOColorTransform::GetRenderResources
                                 (this,TVar1,&local_120,&local_118), !bVar11)) break;
          if ((local_120 == (FOpenColorIOTransformResource *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ShaderResource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                                  ,0xf9,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          this_00 = (local_120->GameThreadShaderMap).Reference;
          if (this_00 == (FOpenColorIOShaderMap *)0x0) {
            local_e0.ShaderContent = (FOpenColorIOPixelShader *)0x0;
            local_e0.ShaderMap = (FShaderMapBase *)0x0;
          }
          else {
            FOpenColorIOShaderMap::GetShader<FOpenColorIOPixelShader>(this_00,&local_e0);
            if (local_e0.ShaderContent != (FOpenColorIOPixelShader *)0x0) break;
          }
          local_f8 = &local_120;
          `FOpenColorIORendering::ApplyColorTransform'::__l37::<lambda_5>::operator()(&local_f8);
          local_120 = (FOpenColorIOTransformResource *)0x0;
          break;
        }
      }
    }
    pFVar15 = FOpenColorIOColorConversionSettings::ToString(param_2,&local_d0);
    FVar8.Data = local_118.AllocatorInstance.Data;
    pFVar7 = local_120;
    iVar10 = local_118.ArrayMax;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = local_118.ArrayNum;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pFVar15->Data).ArrayNum;
    iVar3 = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x48,8);
    local_90[4] = (code *)pFVar7;
    local_90[5] = (code *)FVar8.Data;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::`2'::<lambda_6>,1,1>
                         ::_vftable_;
    *(Type *)(local_90 + 1) = local_108;
    local_90[2] = (code *)local_f0;
    local_90[3] = (code *)local_e8;
    *(int *)(local_90 + 6) = iVar9;
    *(int *)((longlong)local_90 + 0x34) = iVar10;
    local_90[7] = (code *)pFVar5;
    *(int *)(local_90 + 8) = iVar2;
    *(int *)((longlong)local_90 + 0x44) = iVar3;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FOpenColorIORendering::ApplyColorTransform_::__l2::TSTR_ProcessColorSpaceTransform260>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`FOpenColorIORendering::ApplyColorTransform'::__l2::TSTR_ProcessColorSpaceTransform260>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar16);
      uVar19 = (ulonglong)local_58;
      if ((2 < uVar19) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar17 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar17 = local_60;
          }
          (**(code **)(*ppcVar17 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar17 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar17 = local_90;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    bVar11 = local_120 != (FOpenColorIOTransformResource *)0x0;
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  return bVar11;
}

// GetRenderPassResources @ 14d771a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOpenColorIORenderPassResources * __cdecl
FOpenColorIORendering::GetRenderPassResources
          (FOpenColorIORenderPassResources *__return_storage_ptr__,
          FOpenColorIOColorConversionSettings *param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOConfiguration *pUVar2;
  UOpenColorIOColorTransform *this;
  FOpenColorIOShaderMap *this_00;
  code *pcVar3;
  bool bVar4;
  FOpenColorIORenderPassResources *pFVar5;
  FScriptContainerElement *pFVar6;
  FOpenColorIOTransformResource *pFVar7;
  FOpenColorIOColorConversionSettings *local_res8;
  TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> local_58;
  FOpenColorIOTransformResource *local_48;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_40;
  FString local_30;
  
  pFVar7 = (FOpenColorIOTransformResource *)0x0;
  TStack_40.ArrayNum = 0;
  TStack_40.ArrayMax = 0;
  local_48 = (FOpenColorIOTransformResource *)0x0;
  TStack_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FOpenColorIOColorConversionSettings::ToString(param_1,&local_30);
  pUVar2 = (param_1->ConfigurationSource).field0_0x0.DebugPtr;
  if (pUVar2 != (UOpenColorIOConfiguration *)0x0) {
    pFVar6 = (pUVar2->ColorTransforms).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)(pUVar2->ColorTransforms).ArrayNum * 8;
    local_res8 = param_1;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      bVar4 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                        (&local_res8,*(UOpenColorIOColorTransform **)pFVar6);
      if (bVar4) {
        this = *(UOpenColorIOColorTransform **)pFVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (this == (UOpenColorIOColorTransform *)0x0) break;
          UE::GC::MarkAsReachable((UObject *)this);
        }
        if (this != (UOpenColorIOColorTransform *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          if ((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
             (bVar4 = UOpenColorIOColorTransform::GetRenderResources
                                (this,param_2,&local_48,&TStack_40), bVar4)) {
            if ((local_48 == (FOpenColorIOTransformResource *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result.ShaderResource",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIORendering.cpp"
                                   ,200,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FOpenColorIORenderPassResources *)(*pcVar3)();
              return pFVar5;
            }
            this_00 = (local_48->GameThreadShaderMap).Reference;
            if ((this_00 == (FOpenColorIOShaderMap *)0x0) ||
               (FOpenColorIOShaderMap::GetShader<FOpenColorIOPixelShader>(this_00,&local_58),
               local_58.ShaderContent == (FOpenColorIOPixelShader *)0x0)) goto LAB_14d771b3c;
          }
        }
        break;
      }
    }
  }
  pFVar7 = local_48;
LAB_14d771b3c:
  (__return_storage_ptr__->TextureResources).AllocatorInstance.Data =
       TStack_40.AllocatorInstance.Data;
  __return_storage_ptr__->ShaderResource = pFVar7;
  (__return_storage_ptr__->TextureResources).ArrayNum = TStack_40.ArrayNum;
  (__return_storage_ptr__->TextureResources).ArrayMax = TStack_40.ArrayMax;
  (__return_storage_ptr__->TransformName).Data.AllocatorInstance.Data =
       local_30.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->TransformName).Data.ArrayNum = local_30.Data.ArrayNum;
  (__return_storage_ptr__->TransformName).Data.ArrayMax = local_30.Data.ArrayMax;
  return __return_storage_ptr__;
}

// PrepareView @ 14d774660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FOpenColorIORendering::PrepareView(FSceneViewFamily *param_1,FSceneView *param_2)

{
  undefined1 *puVar1;
  
  (param_1->EngineShowFlags).ToneCurve = 0;
  param_1->SceneCaptureSource = SCS_FinalColorHDR;
  puVar1 = &(param_2->FinalPostProcessSettings).field_0x3;
  *puVar1 = *puVar1 | 0x10;
  *(undefined4 *)&(param_2->FinalPostProcessSettings).field_0x2d4 = 0;
  return;
}

// operator() @ 1505867a0

bool __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2465721345741160665>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2465721345741160665>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505867e0

bool __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2465721345741160670>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2465721345741160670>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586820

bool __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l16::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2465721345741160677>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2465721345741160677>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586860

bool __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l19::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2465721345741160682>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2465721345741160682>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505868a0

bool __thiscall
`FOpenColorIORendering::ApplyColorTransform'::__l37::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2465721345741160700>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<2465721345741160700>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

