// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// FLandscapeGrassWeightExporter_RenderThread @ 145f79aa0

FLandscapeGrassWeightExporter_RenderThread * __thiscall
FLandscapeGrassWeightExporter_RenderThread::FLandscapeGrassWeightExporter_RenderThread
          (FLandscapeGrassWeightExporter_RenderThread *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FLandscapeAsyncTextureReadback *pFVar4;
  FLandscapeAsyncTextureReadback *pFVar5;
  
  pFVar5 = (FLandscapeAsyncTextureReadback *)0x0;
  pTVar1 = &this->HeightMips;
  this->SceneInterface = (FSceneInterface *)0x0;
  this->_padding_ = (longlong)&___7FLandscapeGrassWeightExporter_RenderThread__6B_;
  (this->ComponentInfos).AllocatorInstance.SecondaryData =
       (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)0x0;
  piVar2 = &(this->HeightMips).ArrayMax;
  (this->ComponentInfos).ArrayNum = 0;
  (this->ComponentInfos).ArrayMax = 1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->HeightMips).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->GameThreadAsyncReadbackPtr = (FLandscapeAsyncTextureReadback *)0x0;
  if (param_2) {
    pFVar4 = ::operator_new(0x28);
    if (pFVar4 != (FLandscapeAsyncTextureReadback *)0x0) {
      pFVar4->PendingRenderThreadCommands = (atomic<int>)0x0;
      pFVar4->bCancel = (atomic<bool>)0x0;
      pFVar4->bStartedOnRenderThread = (atomic<bool>)0x0;
      pFVar4->bFinishedOnRenderThread = (atomic<bool>)0x0;
      (pFVar4->AsyncReadback).Ptr = (FRHIGPUTextureReadback *)0x0;
      pFVar4->TextureWidth = 0;
      pFVar4->TextureHeight = 0;
      (pFVar4->ReadbackResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->ReadbackResults).ArrayNum = 0;
      (pFVar4->ReadbackResults).ArrayMax = 0;
      pFVar5 = pFVar4;
    }
    this->GameThreadAsyncReadbackPtr = pFVar5;
  }
  return this;
}

// ~FLandscapeGrassWeightExporter_RenderThread @ 145f7d2c0

void __thiscall
FLandscapeGrassWeightExporter_RenderThread::~FLandscapeGrassWeightExporter_RenderThread
          (FLandscapeGrassWeightExporter_RenderThread *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo> FVar2;
  
  this->_padding_ = (longlong)&___7FLandscapeGrassWeightExporter_RenderThread__6B_;
  if (this->GameThreadAsyncReadbackPtr != (FLandscapeAsyncTextureReadback *)0x0) {
    FLandscapeAsyncTextureReadback::QueueDeletionFromGameThread(this->GameThreadAsyncReadbackPtr);
    this->GameThreadAsyncReadbackPtr = (FLandscapeAsyncTextureReadback *)0x0;
  }
  pFVar1 = (this->HeightMips).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ComponentInfos).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)0x0) {
    FVar2 = (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)
            &this->ComponentInfos;
  }
  DestructItems<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int>
            ((FComponentInfo *)FVar2,(this->ComponentInfos).ArrayNum);
  FVar2 = (this->ComponentInfos).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// operator() @ 145f7eda0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread'::__l2::
<lambda_1>::operator()(void *this,FDynamicPassMeshDrawListContext *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FPrimitiveSceneProxy *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar12;
  FMaterial *pFVar13;
  FMaterialRenderProxy *pFVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  TVector2<double>_u_0 local_e8;
  FLandscapeGrassWeightMeshProcessor local_d8;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)&local_d8,LandscapeGrassWeightMeshPassName,(FScene *)0x0,
             ((FSceneView *)**(undefined8 **)this)->FeatureLevel,(FSceneView *)**(undefined8 **)this
             ,(FMeshPassDrawListContext *)param_1);
  local_d8.PassDrawRenderState.DepthStencilAccess = DepthRead_StencilRead;
  local_d8._padding_ = (longlong)&___7FLandscapeGrassWeightMeshProcessor__6B_;
  local_d8.PassDrawRenderState.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_d8.PassDrawRenderState.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  lVar3 = *(longlong *)((longlong)this + 8);
  local_d8.PassDrawRenderState.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_d8.PassDrawRenderState.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_d8.PassDrawRenderState.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_d8.PassDrawRenderState.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_d8.PassDrawRenderState.StencilRef = 0;
  local_res20 = *(uint *)(lVar3 + 0x58);
  uVar12 = (ulonglong)(int)local_res20;
  lVar15 = *(longlong *)(lVar3 + 0x50);
  if (*(longlong *)(lVar3 + 0x50) == 0) {
    lVar15 = lVar3 + 0x10;
  }
  lVar16 = uVar12 * 0x40;
  plVar17 = (longlong *)(lVar15 + 0x30);
  do {
    if (*(int *)(lVar3 + 0x58) != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FLandscapeGrassWeightExporter_RenderThread::FComponentInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (plVar17 + -6 == (longlong *)(lVar16 + lVar15)) {
      return;
    }
    lVar4 = *plVar17;
    if (lVar4 == 0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7012649994763107871>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                          ,0x1e1,"ComponentInfo.SceneProxy");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
                (*(FMaterialRenderProxy **)(lVar4 + 0x488),*(Type *)(**(longlong **)this + 0x1bf8));
      lVar5 = *(longlong *)((longlong)this + 8);
      pFVar6 = (FPrimitiveSceneProxy *)*plVar17;
      iVar2 = *(int *)((longlong)plVar17 + 0xc);
      fVar1 = *(float *)(lVar5 + 0x78);
      lVar10 = plVar17[1];
      dVar8 = (double)plVar17[-3];
      dVar9 = (double)plVar17[-2];
      for (pFVar14 = *(FMaterialRenderProxy **)(lVar4 + 0x488);
          pFVar14 != (FMaterialRenderProxy *)0x0;
          pFVar14 = (FMaterialRenderProxy *)
                    (**(code **)(pFVar14->_padding_ + 0x38))(pFVar14,(undefined4)local_d8._padding_)
          ) {
        pFVar13 = (FMaterial *)
                  (**(code **)(pFVar14->_padding_ + 0x30))(pFVar14,(undefined4)local_d8._padding_);
        if (pFVar13 != (FMaterial *)0x0) {
          if ((*(longlong *)(lVar4 + 0x480) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MeshBatch.VertexFactory != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                                  ,0x115,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_e8._s_0.X = dVar8;
          local_e8._s_0.Y = dVar9;
          bVar11 = FLandscapeGrassWeightMeshProcessor::Process
                             (&local_d8,(FMeshBatch *)(lVar4 + 0x3d8),1,pFVar6,pFVar14,pFVar13,
                              (int)lVar10,(TVector2<double> *)&local_e8._s_0,fVar1,iVar2,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x68));
          if (bVar11) break;
        }
      }
    }
    plVar17 = plVar17 + 8;
    uVar12 = (ulonglong)local_res20;
  } while( true );
}

// RenderLandscapeComponentToTexture_RenderThread @ 145fa0050

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
FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread
          (FLandscapeGrassWeightExporter_RenderThread *this,FRHICommandListImmediate *param_1,
          FLandscapeAsyncTextureReadback *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FRDGTexture *pFVar7;
  undefined1 auStackY_8f8 [32];
  FRDGEventName local_8c0;
  char *local_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  TGPUStat<TRHIGPUStatNameProvider_LandscapeGrassMaps> *local_898;
  wchar_t *pwStack_890;
  FRHIBreadcrumbScope local_888;
  undefined1 local_878;
  undefined1 local_868 [44];
  undefined4 local_83c;
  undefined4 local_838;
  undefined2 local_834;
  void *local_828;
  undefined4 local_820;
  undefined4 local_81c;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_8c0.EventFormat = L"";
  local_8c0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c0.FormattedEventName.Data.ArrayNum = 0;
  local_8c0.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_818,param_1,&local_8c0,None,GMaxRHIShaderPlatform);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_8a8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
    ;
    local_898 = &GPUStat_LandscapeGrassMaps;
    uStack_8a0 = 0x1a8;
    pwStack_890 = L"LandscapeGrassMaps";
    ::Desc._padding_._0_4_ = 0x511b3210;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x1a8;
    ::Desc._padding_._4_4_ = uStack_89c;
    ::Desc._padding_._0_4_ = 0x54bed460;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x511a91e0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FLandscapeGrassWeightExporter_RenderThread::
           RenderLandscapeComponentToTexture_RenderThread'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar5 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x50,8);
  pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar6->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar6->Allocator = pFVar5;
  pFVar6->TraceCpuSpecId = 0;
  pFVar6->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6->ID = uVar3;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar2)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar4 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar4;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar6->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_888,(FRHIComputeCommandList *)param_1,pFVar6);
  local_868._36_8_ = (this->TargetSize).field0_0x0;
  local_868._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_868._0_8_ = 1;
  local_868._8_8_ = 1;
  local_81c = 1;
  local_878 = 1;
  local_868._16_8_ = 0;
  local_868._24_4_ = 0;
  local_868._32_4_ = 0;
  local_83c = 0x10001;
  local_838 = 0x2000101;
  local_834 = 0xff00;
  local_828 = (void *)0x0;
  local_820 = 0;
  pFVar7 = FRDGBuilder::CreateTexture
                     (&local_818,(FRDGTextureDesc *)local_868,L"LandscapeGrassMapRenderTarget",None)
  ;
  RenderLandscapeComponentToTexture_RenderThread(this,&local_818,pFVar7);
  if ((param_2 == (FLandscapeAsyncTextureReadback *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncReadbackPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                         ,0x1b5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FLandscapeAsyncTextureReadback::StartReadback_RenderThread(param_2,&local_818,pFVar7);
  FRDGBuilder::Execute(&local_818);
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_888);
  FRDGBuilder::~FRDGBuilder(&local_818);
  return;
}

// RenderLandscapeComponentToTexture_RenderThread @ 145fa03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread
          (FLandscapeGrassWeightExporter_RenderThread *this,FRDGBuilder *param_1,
          FRDGTexture *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  ConstructionValues *pCVar10;
  FGameTime *pFVar11;
  IRendererModule *pIVar12;
  undefined8 *puVar13;
  FLandscapeGrassPassParameters *pFVar14;
  FShaderParametersMetadata *pFVar15;
  undefined8 uVar16;
  undefined1 auStackY_728 [32];
  longlong local_6d0 [2];
  int local_6c0;
  int iStack_6bc;
  undefined8 local_6b8;
  EUniformBufferBindingFlags EStack_6b0;
  undefined7 uStack_6af;
  FRenderTargetBinding local_6a8;
  undefined8 local_690;
  undefined8 local_688;
  longlong *local_678;
  FLandscapeGrassWeightExporter_RenderThread *local_670;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_668;
  FRDGEventName local_658;
  FGameTime local_640;
  double local_628;
  double dStack_620;
  double local_618;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  undefined8 local_508;
  TIntPoint<int>_u_0 TStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined8 local_4e0;
  TIntPoint<int>_u_0 local_4d8;
  undefined1 *local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  FSceneViewOwner local_4b8;
  undefined4 local_4a8;
  undefined8 local_4a0;
  FLinearColor_u_0 local_498;
  FLinearColor_u_0 local_488;
  FLinearColor_u_0 local_478;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  ForAnyElementType local_428;
  undefined8 local_420;
  TBitArray<FDefaultBitArrayAllocator> local_418;
  undefined4 local_3f8;
  undefined4 local_3f4;
  void *local_3e8;
  undefined4 local_3e0;
  ForAnyElementType local_3d8;
  undefined4 local_3d0;
  int local_3cc;
  TBitArray<FDefaultBitArrayAllocator> local_3c8;
  undefined4 local_3a8;
  undefined4 local_3a4;
  void *local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined2 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined5 uStack_350;
  undefined3 uStack_34b;
  undefined4 local_348;
  undefined2 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  FEngineShowFlags local_318;
  ConstructionValues local_2d8;
  undefined1 local_238 [16];
  int local_228;
  undefined1 local_130;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_728;
  local_318.CustomShowFlags.MaxBits = 0x80;
  local_668.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_668.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_318._8_8_ = _UNK_15060db28;
  local_318.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_318._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_318._24_8_ = _UNK_15060db28;
  local_318.CustomShowFlags.NumBits = 0;
  FEngineShowFlags::InitCustomShowFlags(&local_318,ESFIM_Game);
  local_318.Pivot = 0;
  local_318.LightInfluences = 0;
  local_318.HitProxies = 0;
  local_318.Bounds = 0;
  local_318.ModeWidgets = 0;
  local_318.EditingLevelInstance = 0;
  local_318.Selection = 0;
  local_318.Splines = 0;
  local_318.Cover = 0;
  local_318.MeshEdges = 0;
  local_318.Snap = 0;
  local_318.Grid = 0;
  local_318.LargeVertices = 0;
  local_318.Editor = 0;
  local_318.Brushes = 0;
  local_318.BSPSplit = 0;
  local_318.AudioRadius = 0;
  local_318.CameraFrustums = 0;
  local_318.MassProperties = 0;
  local_318.Constraints = 0;
  local_318.StreamingBounds = 0;
  local_318.LightMapDensity = 0;
  local_318.StationaryLightOverlap = 0;
  local_318.ShaderComplexity = 0;
  local_318.LightComplexity = 0;
  local_318.VisualizeInstanceUpdates = 0;
  local_318.HISMCClusterTree = 0;
  local_318.HISMCOcclusionBounds = 0;
  local_318.Navigation = 0;
  local_318.DebugAI = 0;
  local_318.VisualizeSSS = 0;
  local_318.SelectionOutline = 0;
  local_318.DisableOcclusionQueries = 0;
  local_318.VisualizeInstanceOcclusionQueries = 0;
  local_318.OcclusionMeshes = 0;
  local_318.VREditing = 0;
  local_318.ServerDrawDebug = 0;
  local_318.Bones = 0;
  local_318.VisualizeVirtualTexture = 0;
  local_318.RequiredTextureResolution = 0;
  local_318.OutputMaterialTextureScales = 0;
  local_318.MaterialTextureScaleAccuracy = 0;
  local_318.MeshUVDensityAccuracy = 0;
  local_318.PrimitiveDistanceAccuracy = 0;
  local_318.ShaderComplexityWithQuadOverdraw = 0;
  local_318.QuadOverdraw = 0;
  local_318.HLODColoration = 0;
  local_318.LODColoration = 0;
  local_318.VisualizeShadingModels = 0;
  local_318.VisualizeSSR = 0;
  local_318.VisualizeLightingOnProbes = 0;
  local_318.VisualizeGlobalDistanceField = 0;
  local_318.PhysicsField = 0;
  local_318.VisualizeMeshDistanceFields = 0;
  local_318.VisualizeDistanceFieldAO = 0;
  local_318.VolumeLightingSamples = 0;
  local_318.VisualizeVolumetricLightmap = 0;
  local_318.PrecomputedVisibilityCells = 0;
  local_318.VisualizeLightCulling = 0;
  local_318.DistanceCulledPrimitives = 0;
  local_318.StereoRendering = 0;
  local_318.HMDDistortion = 0;
  local_318.HighResScreenshotMask = 0;
  local_318.CameraSafeFrames = 0;
  local_318.CameraAspectRatioBars = 0;
  local_318.CollisionPawn = 0;
  local_318.CollisionVisibility = 0;
  local_318.Collision = 0;
  local_318.ActorColoration = 0;
  local_318.Game = 1;
  local_318.Volumes = 0;
  local_318.LightRadius = 0;
  local_318.Wireframe = 0;
  local_318.ShadowFrustums = 0;
  local_318.VisualizeOutOfBoundsPixels = 0;
  local_318.VisualizeTSR = 0;
  local_318.VisualizeTemporalUpscaler = 0;
  local_318.VisualizeReprojection = 0;
  local_318.VisualizeMotionVectors = 0;
  local_318.VisualizeMotionBlur = 0;
  local_318.ScreenPercentage = 1;
  local_318.PhysicalMaterialMasks = 0;
  local_318.VertexColors = 0;
  local_318.VisualizeDOF = 0;
  local_318.TestImage = 0;
  local_318.OpaqueCompositeEditorPrimitives = 0;
  local_318.CompositeEditorPrimitives = 0;
  local_318.CompositeDebugPrimitives = 1;
  local_318.MotionBlur = 1;
  local_318.GBufferHints = 0;
  local_318.VectorFields = 0;
  local_318.VisualizeVirtualShadowMap = 0;
  local_318.VisualizeGroom = 0;
  local_318.VisualizeSubstrate = 0;
  local_318.VisualizeLumen = 0;
  local_318.VisualizeNanite = 0;
  local_318.VisualizeBuffer = 0;
  local_318.MaterialAmbientOcclusion = 1;
  local_318.MaterialNormal = 1;
  local_318.ReflectionOverride = 0;
  local_318.LightingOnlyOverride = 0;
  local_318.OverrideDiffuseAndSpecular = 0;
  local_318.VisualizeLocalExposure = 0;
  local_318.VisualizeLocalFogVolumes = 0;
  local_318.VisualizeSkyLightIlluminance = 0;
  local_318.VisualizeHDR = 0;
  local_318.RandomColor = 0;
  local_318.FrontBackFace = 0;
  local_318.Zebra = 0;
  local_318.Clay = 0;
  local_318.StereoMotionVectors = 0;
  local_318.AlphaInvert = 0;
  local_318.SceneCaptureCopySceneDepth = 1;
  local_318.VisualizeShadowCasters = 0;
  local_318.VisualizeLWCComplexity = 0;
  local_318.VisualizeGPUSkinCache = 0;
  local_318.LumenShortRangeAmbientOcclusion = 1;
  local_318.LumenSecondaryBounces = 1;
  local_318.LumenFarFieldTraces = 1;
  local_318.LumenGlobalTraces = 1;
  local_318.LumenDetailTraces = 1;
  local_318.LumenScreenTraces = 1;
  local_318.DebugDrawDistantVirtualSMLights = 0;
  local_318.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_318.VisualizeVolumetricCloudConservativeDensity = 0;
  local_318.VirtualTexturePrimitives = 0;
  local_318.VisualizePostProcessStack = 0;
  local_318.VisualizeCalibrationCustom = 0;
  local_318.VisualizeCalibrationGrayscale = 0;
  local_318.VisualizeCalibrationColor = 0;
  local_318.VisualizeLightFunctionAtlas = 0;
  local_318.VisualizeSkyAtmosphere = 0;
  local_318.RayTracingDebug = 0;
  local_318.PathTracing = 0;
  pCVar10 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_2d8,(FRenderTarget *)0x0,this->SceneInterface,&local_318,&local_668);
  pFVar11 = FGameTime::GetTimeSinceAppStart(&local_640);
  dVar4 = pFVar11->WorldTimeSeconds;
  (pCVar10->Time).RealTimeSeconds = pFVar11->RealTimeSeconds;
  (pCVar10->Time).WorldTimeSeconds = dVar4;
  fVar5 = pFVar11->DeltaRealTimeSeconds;
  fVar6 = pFVar11->DeltaWorldTimeSeconds;
  pCVar10->bTimesSet = 1;
  (pCVar10->Time).DeltaRealTimeSeconds = fVar5;
  (pCVar10->Time).DeltaWorldTimeSeconds = fVar6;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)local_238,pCVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_2d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_318.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_318.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  local_130 = 0;
  pIVar12 = GetRendererModule();
  puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x218))(pIVar12,param_1,local_238);
  local_598 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_590 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_518 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_510 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_508 = 0;
  TStack_500 = (TIntPoint<int>_u_0)0x0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_628 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_620 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_618 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_608 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_600 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_5f8 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_5f0 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_5e8 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_5e0 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_5d8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_5d0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_5c8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_5c0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_5b8 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_5b0 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_5a8 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_5a0 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_588 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_580 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_578 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_570 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_568 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_560 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_558 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_550 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_548 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_540 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_538 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_530 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_528 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_520 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_4f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4e0 = 0;
  local_4d8 = (TIntPoint<int>_u_0)0x0;
  local_4d0 = (undefined1 *)0x0;
  FSceneViewOwner::FSceneViewOwner(&local_4b8,(AActor *)0x0);
  local_4a0 = 0;
  local_4a8 = 0xffffffff;
  local_498 = FLinearColor::Transparent.field0_0x0;
  local_488 = FLinearColor::Transparent.field0_0x0;
  local_468 = 0;
  local_464 = 0xffffffff;
  local_478 = FLinearColor::White.field0_0x0;
  local_448 = 0;
  uStack_440 = 0;
  local_460 = 0x42c80000;
  local_458 = 0;
  uStack_450 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428.Data = (FScriptContainerElement *)0x0;
  local_420 = 0;
  local_418.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_418.NumBits = 0;
  local_418.MaxBits = 0x80;
  local_3f8 = 0xffffffff;
  local_3f4 = 0;
  local_3e8 = (void *)0x0;
  local_3e0 = 0;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = 0;
  local_3cc = -1;
  local_3c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3c8.NumBits = 0;
  local_3c8.MaxBits = 0x80;
  local_3a8 = 0xffffffff;
  local_3a4 = 0;
  local_6c0 = (this->TargetSize).field0_0x0._s_0.X;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_618 = (this->ViewOrigin).field0_0x0._s_0.Z;
  local_328 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_320 = _UNK_15076b1f8;
  local_628 = (this->ViewOrigin).field0_0x0._s_0.X;
  dStack_620 = (this->ViewOrigin).field0_0x0._s_0.Y;
  iStack_6bc = (this->TargetSize).field0_0x0._s_0.Y;
  TStack_500._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(this->TargetSize).field0_0x0;
  local_608 = (this->ViewRotationMatrix).M[0][0];
  dStack_600 = (this->ViewRotationMatrix).M[0][1];
  local_5f8 = (this->ViewRotationMatrix).M[0][2];
  dStack_5f0 = (this->ViewRotationMatrix).M[0][3];
  local_5e8 = (this->ViewRotationMatrix).M[1][0];
  dStack_5e0 = (this->ViewRotationMatrix).M[1][1];
  local_4d0 = local_238;
  local_5d8 = (this->ViewRotationMatrix).M[1][2];
  dStack_5d0 = (this->ViewRotationMatrix).M[1][3];
  local_398 = (void *)0x0;
  local_5c8 = (this->ViewRotationMatrix).M[2][0];
  dStack_5c0 = (this->ViewRotationMatrix).M[2][1];
  local_390 = 0;
  local_5b8 = (this->ViewRotationMatrix).M[2][2];
  dStack_5b0 = (this->ViewRotationMatrix).M[2][3];
  local_388 = 0xffffffffffffffff;
  local_5a8 = (this->ViewRotationMatrix).M[3][0];
  dStack_5a0 = (this->ViewRotationMatrix).M[3][1];
  local_380 = 0x3f800000;
  local_598 = (this->ViewRotationMatrix).M[3][2];
  dStack_590 = (this->ViewRotationMatrix).M[3][3];
  local_37c = 0xbf800000;
  local_588 = (this->ProjectionMatrix).M[0][0];
  dStack_580 = (this->ProjectionMatrix).M[0][1];
  local_360 = 0x100;
  local_578 = (this->ProjectionMatrix).M[0][2];
  dStack_570 = (this->ProjectionMatrix).M[0][3];
  local_35c = 0x42b40000;
  local_568 = (this->ProjectionMatrix).M[1][0];
  dStack_560 = (this->ProjectionMatrix).M[1][1];
  _local_358 = CONCAT44(0x3f800000,(int)___xmm_00000000000000000000000042b40000);
  local_558 = (this->ProjectionMatrix).M[1][2];
  dStack_550 = (this->ProjectionMatrix).M[1][3];
  local_548 = (this->ProjectionMatrix).M[2][0];
  dStack_540 = (this->ProjectionMatrix).M[2][1];
  _uStack_350 = CONCAT35((int3)((ulonglong)_UNK_150ee30d8 >> 0x28),0x3f800000);
  local_538 = (this->ProjectionMatrix).M[2][2];
  dStack_530 = (this->ProjectionMatrix).M[2][3];
  local_348 = 0;
  local_528 = (this->ProjectionMatrix).M[3][0];
  dStack_520 = (this->ProjectionMatrix).M[3][1];
  local_344 = 0;
  local_518 = (this->ProjectionMatrix).M[3][2];
  dStack_510 = (this->ProjectionMatrix).M[3][3];
  local_340 = 0xbf800000;
  local_33c = 0x3f800000;
  local_338 = 0x3f800000;
  local_6d0[1] = 0;
  local_508 = 0;
  local_4e0 = 0;
  local_4d8._s_0 = TStack_500._s_0;
  pIVar12 = GetRendererModule();
  (**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,param_1->_padding_,local_238,&local_628);
  if ((local_228 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_6d0[0] = *(longlong *)local_238._8_8_;
  pFVar14 = FRDGAllocator::Alloc<FLandscapeGrassPassParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  lVar1 = local_6d0[0];
  pFVar15 = FViewUniformShaderParameters::GetStructMetadata();
  EStack_6b0 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_6b0 = pFVar15->BindingFlags;
  }
  local_6b8 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)&pFVar14->View = local_6b8;
  *(ulonglong *)&(pFVar14->View).field_0x8 = CONCAT71(uStack_6af,EStack_6b0);
  lVar1 = *(longlong *)(local_6d0[0] + 8);
  if (lVar1 != 0) {
    if ((*(longlong *)(lVar1 + 0x178) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneRenderer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa7b,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(lVar1 + 0x178);
    if (plVar2 != (longlong *)0x0) {
      uVar16 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
      goto LAB_145fa0a24;
    }
  }
  uVar16 = 0;
LAB_145fa0a24:
  pFVar15 = ::GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
  local_6a8.ResolveTexture = (FRDGTexture *)0x0;
  local_6a8.LoadAction = EClear;
  local_6a8.MipIndex = '\0';
  local_6a8.ArraySlice = -1;
  EStack_6b0 = Static;
  if (pFVar15->BindingFlags != StaticAndShader) {
    EStack_6b0 = pFVar15->BindingFlags;
  }
  *(undefined8 *)&pFVar14->Scene = uVar16;
  *(ulonglong *)&(pFVar14->Scene).field_0x8 = CONCAT71(uStack_6af,EStack_6b0);
  local_6b8 = uVar16;
  local_6a8.Texture = param_2;
  bVar9 = FRenderTargetBinding::Validate(&local_6a8);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x216,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = local_6d0[0];
  (pFVar14->RenderTargets).Output.Elements[0].Texture = local_6a8.Texture;
  (pFVar14->RenderTargets).Output.Elements[0].ResolveTexture = local_6a8.ResolveTexture;
  (pFVar14->RenderTargets).Output.Elements[0].LoadAction = local_6a8.LoadAction;
  (pFVar14->RenderTargets).Output.Elements[0].MipIndex = local_6a8.MipIndex;
  (pFVar14->RenderTargets).Output.Elements[0].ArraySlice = local_6a8.ArraySlice;
  *(undefined4 *)&(pFVar14->RenderTargets).Output.Elements[0].field_0x14 = local_6a8._20_4_;
  FRDGEventName::FRDGEventName(&local_658,1,L"LandscapeGrass");
  lVar8 = local_6d0[0];
  uVar16 = (**(code **)(this->SceneInterface->_padding_ + 0x420))();
  local_690 = *(undefined8 *)(lVar1 + 0x380);
  local_688 = *(undefined8 *)(lVar1 + 0x388);
  local_678 = local_6d0;
  local_670 = this;
  AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>,_AddSimpleMeshPass<FLandscapeGrassPassParameters,_FLandscapeGrassWeightExporter_RenderThread::RenderLandscapeComponentToTexture_RenderThread_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
            (param_1,pFVar14,uVar16,lVar8);
  if (local_658.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_3cc != -1) {
    local_390 = 0;
    if (local_398 != (void *)0x0) {
      FMemory::Free(local_398);
    }
    local_3d0 = 0;
    if (local_3cc != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_3d8,0,&local_3cc);
    }
    local_3a8 = 0xffffffff;
    local_3a4 = 0;
    local_3c8.NumBits = 0;
    if (0x80 < (uint)local_3c8.MaxBits) {
      local_3c8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3c8,0);
    }
    if (local_3c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_3c8.AllocatorInstance.SecondaryData);
    }
    if (local_3d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data);
    }
  }
  local_3e0 = 0;
  if (local_3e8 != (void *)0x0) {
    FMemory::Free(local_3e8);
  }
  uVar7 = local_420 >> 0x20;
  local_420 = local_420 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_428,0,(int *)((longlong)&local_420 + 4));
  }
  local_3f8 = 0xffffffff;
  local_3f4 = 0;
  local_418.NumBits = 0;
  if (0x80 < (uint)local_418.MaxBits) {
    local_418.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_418,0);
  }
  if (local_418.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_418.AllocatorInstance.SecondaryData);
  }
  if (local_428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data);
  }
  if (puVar13 != (undefined8 *)0x0) {
    (**(code **)*puVar13)(puVar13,1);
  }
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)local_238);
  return;
}

