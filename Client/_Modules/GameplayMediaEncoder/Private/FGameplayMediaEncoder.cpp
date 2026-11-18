// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 28

// FGameplayMediaEncoder @ 148d20150

FGameplayMediaEncoder * __thiscall
FGameplayMediaEncoder::FGameplayMediaEncoder(FGameplayMediaEncoder *this)

{
  this->_padding_ = (longlong)&_vftable__for__ISubmixBufferListener__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AVEncoder__IAudioEncoderListener__;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ListenersCS,4000);
  (this->Listeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Listeners).ArrayNum = 0;
  (this->Listeners).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AudioProcessingCS,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->VideoProcessingCS,4000);
  (this->AudioEncoder).Ptr = (FAudioEncoder *)0x0;
  (this->VideoConfig).Codec.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoConfig).Codec.Data.ArrayNum = 0;
  (this->VideoConfig).Codec.Data.ArrayMax = 0;
  (this->VideoEncoder).Ptr = (FVideoEncoder *)0x0;
  (this->VideoEncoderInput).Object = (FVideoEncoderInput *)0x0;
  (this->VideoEncoderInput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StartTime).Ticks = 0;
  this->NumCapturedFrames = 0;
  (this->LastVideoInputTimestamp).Ticks = 0;
  this->AudioClock = 0.0;
  this->NewVideoBitrate = (TAtomic<unsigned_int>)0x0;
  this->bAudioFormatChecked = false;
  this->bDoFrameSkipping = false;
  this->bChangeBitrate = (FThreadSafeBool)0x0;
  this->NewVideoFramerate = (TAtomic<unsigned_int>)0x0;
  this->bChangeFramerate = (FThreadSafeBool)0x0;
  (this->PCM16).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PCM16).ArrayNum = 0;
  (this->PCM16).ArrayMax = 0;
  *(undefined8 *)&this->BackBuffers = 0;
  *(undefined8 *)&(this->BackBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->BackBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->BackBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->BackBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->BackBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BackBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->BackBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->BackBuffers).field_0x48 = 0;
  this->bIsInDestructor = false;
  return this;
}

// ~FGameplayMediaEncoder @ 148d20390

void __thiscall FGameplayMediaEncoder::~FGameplayMediaEncoder(FGameplayMediaEncoder *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FVideoEncoder *pFVar5;
  FAudioEncoder *pFVar6;
  longlong *plVar7;
  
  this->bIsInDestructor = true;
  this->_padding_ = (longlong)&_vftable__for__ISubmixBufferListener__;
  this->_padding_ = (longlong)&_vftable__for__AVEncoder__IAudioEncoderListener__;
  Shutdown(this);
  *(undefined4 *)&(this->BackBuffers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->BackBuffers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BackBuffers);
  pFVar4 = (this->PCM16).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VideoEncoderInput).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->VideoEncoder).Ptr;
  if (pFVar5 != (FVideoEncoder *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  pFVar4 = (this->VideoConfig).Codec.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar6 = (this->AudioEncoder).Ptr;
  if (pFVar6 != (FAudioEncoder *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->VideoProcessingCS);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AudioProcessingCS);
  pFVar4 = (this->Listeners).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ListenersCS);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// CopyTexture @ 148d20970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::CopyTexture
          (FGameplayMediaEncoder *this,TRefCountPtr<FRHITexture> *param_1,
          TRefCountPtr<FRHITexture> *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FRHITexture *pFVar7;
  FShaderMapResource *this_00;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  FName *pFVar11;
  FModuleManager *this_01;
  IModuleInterface *pIVar12;
  IRHICommandContext *pIVar13;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar14;
  FName FVar15;
  atomic<FRHIShader_*> aVar16;
  longlong lVar17;
  FRHIPixelShader *pFVar18;
  undefined8 *puVar19;
  undefined1 auStackY_448 [32];
  FName local_3d8;
  FRHISamplerState *local_3d0;
  FShader *local_3c8;
  FShaderMapBase *pFStack_3c0;
  FRHITransitionInfo *local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a8;
  TShaderRefBase<FScreenPS,FShaderMapPointerTable> local_398;
  TIntVector3<int>_u_0 local_388;
  undefined8 local_37c;
  int local_374;
  undefined8 local_370;
  int local_368;
  undefined8 local_364;
  undefined8 local_35c;
  undefined4 local_354;
  undefined4 local_350;
  FRHITransitionInfo local_348;
  FRHITransitionInfo local_318;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  FName local_2d8;
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  FString local_2c0;
  TArrayView<FRHITransitionInfo_const_,int> local_2a8;
  FString local_298;
  FString local_288;
  TArrayView<FRHITransitionInfo_const_,int> local_278;
  FGraphicsPipelineStateInitializer local_268;
  FRHIRenderPassInfo local_188;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_448;
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar10 = (**(code **)(param_1->Reference->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar10 + 0x33);
  lVar10 = (**(code **)(param_2->Reference->_padding_ + 0x20))();
  if (cVar1 == *(char *)(lVar10 + 0x33)) {
    pFVar7 = param_1->Reference;
    lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
    iVar2 = *(int *)(lVar10 + 0x28);
    lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
    pFVar7 = param_2->Reference;
    iVar3 = *(int *)(lVar10 + 0x24);
    lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
    iVar4 = *(int *)(lVar10 + 0x28);
    lVar10 = (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
    if ((iVar3 == *(int *)(lVar10 + 0x24)) && (iVar2 == iVar4)) {
      local_388._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_37c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_370 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      local_364 = 0;
      local_354 = 0;
      local_388._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_374 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_368 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_35c = 1;
      local_350 = 1;
      TransitionAndCopyTexture
                ((FRHICommandList *)&GRHICommandList.CommandListImmediate,param_1->Reference,
                 param_2->Reference,(FRHICopyTextureInfo *)&local_388._s_0);
      return;
    }
  }
  pFVar11 = ::FName::FName(&local_2d8,"Renderer");
  local_3d8 = *pFVar11;
  this_01 = FModuleManager::Get();
  bVar9 = FModuleManager::IsModuleLoaded(this_01,local_3d8);
  if (!bVar9) {
    ::FName::ToString(&local_3d8,&local_2c0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pIVar12 = FModuleManager::GetModule(this_01,local_3d8);
  local_188.ColorRenderTargets.Elements[0].RenderTarget = param_2->Reference;
  aVar16 = (atomic<FRHIShader_*>)0x0;
  local_188.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_188.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_188.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_188.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_188.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_188.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_188.ResolveRect.X1 = -1;
  local_188.ResolveRect.Y1 = -1;
  local_188.ResolveRect.X2 = -1;
  local_188.ResolveRect.Y2 = -1;
  local_188.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_188.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_188.NopAccess = None;
  local_188.NumOcclusionQueries = 0;
  local_188.bOcclusionQueries = false;
  local_188.MultiViewCount = '\0';
  local_188.SubpassHint = None;
  if ((local_188.ColorRenderTargets.Elements[0].RenderTarget == (FRHITexture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorRT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14b0,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uStack_3b0 = 1;
  local_348._padding_._4_2_ = 0xffff;
  local_348.field1_0x8 = (FRHITransitionInfo_u_8)param_2->Reference;
  local_2a8._12_4_ = uStack_3ac;
  local_2a8.ArrayNum = 1;
  local_188.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_188.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_188.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_188.ColorRenderTargets.Elements[0].Action = Load_Store;
  local_348._padding_._0_4_ = 0xffffffff;
  local_348.Type = Texture;
  local_348.AccessBefore = None;
  local_348.AccessAfter = RTV;
  local_348.Flags = None;
  local_348.CommitInfo.bIsSet = false;
  local_3b8 = &local_348;
  local_2a8.DataPtr = &local_348;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_2a8,None);
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)&GRHICommandList.CommandListImmediate,&local_188,L"CopyBackbuffer");
  lVar10 = (**(code **)(param_2->Reference->_padding_ + 0x20))();
  uVar5 = *(uint *)(lVar10 + 0x28);
  lVar10 = (**(code **)(param_2->Reference->_padding_ + 0x20))();
  uVar6 = *(uint *)(lVar10 + 0x24);
  if ((GRHICommandList.bLatchedBypass == false) ||
     ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar19;
    GRHICommandList.CommandListImmediate._48_8_ = puVar19 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar19 = &___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)puVar19 + 0x1c) = (float)uVar6;
    *(float *)(puVar19 + 4) = (float)uVar5;
    puVar19[2] = 0;
    *(undefined4 *)(puVar19 + 3) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  }
  else {
    pIVar13 = FRHICommandListBase::GetContext
                        ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    pcVar8 = *(code **)(pIVar13->_padding_ + 0x1a0);
    (*pcVar8)(pIVar13,pcVar8,0,0);
  }
  local_268.RenderTargetsEnabled = 0;
  local_268.RenderTargetFormats.Elements[0] = '\0';
  local_268.RenderTargetFormats.Elements[1] = '\0';
  local_268.RenderTargetFormats.Elements[2] = '\0';
  local_268.RenderTargetFormats.Elements[3] = '\0';
  local_268.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_268.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_268.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_268.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_268.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_268.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_268.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_268.BlendState = (FRHIBlendState *)0x0;
  local_268.RasterizerState = (FRHIRasterizerState *)0x0;
  local_268.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_268.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_268.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_268.RenderTargetFlags.Elements[0] = None;
  local_268.RenderTargetFlags.Elements[1] = None;
  local_268.RenderTargetFlags.Elements[2] = None;
  local_268.RenderTargetFlags.Elements[3] = None;
  local_268.RenderTargetFlags.Elements[4] = None;
  local_268.RenderTargetFlags.Elements[5] = None;
  local_268.RenderTargetFlags.Elements[6] = None;
  local_268.RenderTargetFlags.Elements[7] = None;
  local_268.RenderTargetFormats.Elements[4] = '\0';
  local_268.RenderTargetFormats.Elements[5] = '\0';
  local_268.RenderTargetFormats.Elements[6] = '\0';
  local_268.RenderTargetFormats.Elements[7] = '\0';
  local_268.DepthStencilTargetFormat = PF_Unknown;
  local_268.DepthStencilTargetFlag = None;
  local_268.DepthTargetLoadAction = ENoAction;
  local_268.DepthTargetStoreAction = ENoAction;
  local_268.StencilTargetLoadAction = ENoAction;
  local_268.StencilTargetStoreAction = ENoAction;
  local_268.DepthStencilAccess.Value = DepthNop;
  local_268.NumSamples = 0;
  local_268.SubpassHint = None;
  local_268.SubpassIndex = '\0';
  local_268.ConservativeRasterization = Disabled;
  local_268.bDepthBounds = false;
  local_268.MultiViewCount = '\0';
  local_268.bHasFragmentDensityAttachment = false;
  local_268.bAllowVariableRateShading = true;
  local_268.ShadingRate = VRSSR_1x1;
  local_268.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_268.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets
            ((FRHICommandList *)&GRHICommandList.CommandListImmediate,&local_268);
  local_268.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_268.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_268.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar14 = (FShaderType *)FScreenVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_3a8,pFVar14,0);
  if (local_3a8.ShaderContent == (FShader *)0x0) {
    FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2d0);
    ::FName::ToString((FName *)FVar15,&local_298);
    FScreenVS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FScreenVS::GetStaticType();
  pFVar14 = (FShaderType *)FScreenPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_2e8,pFVar14,0);
  if ((FScreenPS *)local_2e8.ShaderContent == (FScreenPS *)0x0) {
    FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2c8);
    ::FName::ToString((FName *)FVar15,&local_288);
    FScreenPS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FScreenPS::GetStaticType();
  local_268.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_398.ShaderContent = (FScreenPS *)local_2e8.ShaderContent;
  local_398.ShaderMap = local_2e8.ShaderMap;
  if (local_3a8.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_3a8.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    aVar16 = (this_00->RHIShaders).Ptr[(local_3a8.ShaderContent)->ResourceIndex];
    if ((aVar16 == (atomic<FRHIShader_*>)0x0) &&
       (aVar16 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,(local_3a8.ShaderContent)->ResourceIndex,true),
       aVar16 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_3a8.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FShader::GetType(local_3a8.ShaderContent,(local_3a8.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar16 = (atomic<FRHIShader_*>)0x0;
    }
  }
  local_268.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar16;
  local_268.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_398,true);
  local_268.PrimitiveType = PT_TriangleList;
  SetGraphicsPipelineState
            ((FRHICommandList *)&GRHICommandList.CommandListImmediate,&local_268,0,CheckApply,true);
  lVar10 = (**(code **)(param_2->Reference->_padding_ + 0x20))();
  lVar17 = (**(code **)(param_1->Reference->_padding_ + 0x20))();
  if ((*(int *)(lVar10 + 0x24) != *(int *)(lVar17 + 0x24)) ||
     (local_3d0 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                  ::StaticResource.StateRHI.Reference,
     *(int *)(lVar10 + 0x28) != *(int *)(lVar17 + 0x28))) {
    local_3d0 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                ::StaticResource.StateRHI.Reference;
  }
  pFVar18 = TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_398,true);
  SetShaderParametersLegacy<FRHICommandListImmediate,FScreenPS,FRHIPixelShader,FRHISamplerState_*_&,TRefCountPtr<FRHITexture>_const_&>
            (&GRHICommandList.CommandListImmediate,&local_398,pFVar18,&local_3d0,param_1);
  pFVar7 = param_2->Reference;
  local_3c8 = local_3a8.ShaderContent;
  pFStack_3c0 = local_3a8.ShaderMap;
  pcVar8 = *(code **)((longlong)*pIVar12 + 0xe8);
  (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
  (**(code **)(param_2->Reference->_padding_ + 0x20))();
  (**(code **)(param_2->Reference->_padding_ + 0x20))();
  (*pcVar8)(pIVar12,0x154be5ed0,0,0);
  if (((GRHICommandList.CommandListImmediate._667_1_ & 2) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c5,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((GRHICommandList.CommandListImmediate._667_1_ & 4) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInsideComputePass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c6,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((GRHICommandList.CommandListImmediate._667_1_ & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,0x154be5ed0);
    GRHICommandList.CommandListImmediate._667_1_ =
         GRHICommandList.CommandListImmediate._667_1_ & 0xf7;
  }
  if ((GRHICommandList.bLatchedBypass == false) ||
     ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) {
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x10,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar19;
    GRHICommandList.CommandListImmediate._48_8_ = puVar19 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar19 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar13 = FRHICommandListBase::GetContext
                        ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    (**(code **)(pIVar13->_padding_ + 0x250))(pIVar13);
  }
  GRHICommandList.CommandListImmediate._667_1_ = GRHICommandList.CommandListImmediate._667_1_ & 0xfd
  ;
  GRHICommandList.CommandListImmediate._664_2_ = 0;
  local_318._padding_._4_2_ = 0xffff;
  local_318.field1_0x8 = (FRHITransitionInfo_u_8)param_2->Reference;
  local_3c8 = (FShader *)&local_318;
  pFStack_3c0 = (FShaderMapBase *)CONCAT44(pFStack_3c0._4_4_,1);
  local_278._8_8_ = pFStack_3c0;
  local_318._padding_._0_4_ = 0xffffffff;
  local_318.Type = Texture;
  local_318.AccessBefore = RTV;
  local_318.AccessAfter = SRVMask;
  local_318.Flags = None;
  local_318.CommitInfo.bIsSet = false;
  local_278.DataPtr = (FRHITransitionInfo *)local_3c8;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_278,None);
  if (local_188.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.ShadingRateTexture.Reference);
  }
  return;
}

// FloatToPCM16 @ 148d21930

void __thiscall
FGameplayMediaEncoder::FloatToPCM16
          (FGameplayMediaEncoder *this,float *param_1,int param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_3->ArrayNum;
  piVar2 = &param_3->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 < param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2,&param_3->AllocatorInstance,0,piVar2);
  }
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,param_2,&param_3->AllocatorInstance,piVar1,piVar2);
  memset((param_3->AllocatorInstance).Data + (longlong)iVar8 * 2,0,(longlong)param_2 * 2);
  fVar6 = __real_47000000;
  fVar5 = __real_46fffe00;
  pFVar11 = (param_3->AllocatorInstance).Data;
  iVar8 = *piVar1;
  pFVar3 = pFVar11 + (longlong)iVar8 * 2;
  while( true ) {
    if (*piVar1 != iVar8) {
      `TCheckedPointerIterator<short,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar3) break;
    fVar4 = fVar6;
    if (0.0 <= *param_1) {
      fVar4 = fVar5;
    }
    iVar9 = (int)(*param_1 * fVar4);
    iVar10 = 0x7fff;
    if (iVar9 < 0x7fff) {
      iVar10 = iVar9;
    }
    uVar7 = 0x8000;
    if (-0x8000 < iVar10) {
      uVar7 = (short)iVar10;
    }
    param_1 = param_1 + 1;
    *(undefined2 *)pFVar11 = uVar7;
    pFVar11 = pFVar11 + 2;
  }
  return;
}

// Get @ 148d21a80

FGameplayMediaEncoder * __cdecl FGameplayMediaEncoder::Get(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FGameplayMediaEncoder *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> local_10;
  
  if (Singleton.Object != (FGameplayMediaEncoder *)0x0) {
    return Singleton.Object;
  }
  pTVar6 = ::operator_new(0x198);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = (FGameplayMediaEncoder *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGameplayMediaEncoder___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)&_vftable__for__ISubmixBufferListener__;
    *(undefined ***)&pTVar6[2].SharedReferenceCount =
         &_vftable__for__AVEncoder__IAudioEncoderListener__;
    pTVar6[2]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 3),4000);
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6[6].SharedReferenceCount,4000);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 9),4000);
    pTVar6[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pFVar7 = (FGameplayMediaEncoder *)(pTVar6 + 1);
    pTVar6[0xc]._padding_ = 0;
    pTVar6[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe]._padding_ = 0;
    pTVar6[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf]._padding_ = 0;
    pTVar6[0x10]._padding_ = 0;
    pTVar6[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x11]._padding_ = 0;
    pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x11].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar6[0x11].SharedReferenceCount = 0;
    *(undefined4 *)&pTVar6[0x12]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x12]._padding_ + 4) = 0;
    pTVar6[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x13]._padding_ = 0;
    pTVar6[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x14]._padding_ = 0;
    pTVar6[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x14].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16]._padding_ = 0;
    pTVar6[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x16].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[0x17]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[0x17]._padding_ + 4) = 0;
    pTVar6[0x18]._padding_ = 0;
    pTVar6[0x18].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar6[0x19]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pFVar7 == (FGameplayMediaEncoder *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGameplayMediaEncoder *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_148d21c90;
    }
  }
  if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
     (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar7->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_148d21c90:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  Singleton.Object = pFVar7;
  local_10.ReferenceController = pTVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Singleton.SharedReferenceCount,&local_10)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return Singleton.Object;
}

// GetAudioConfig @ 148d21d30

FAudioConfig * __thiscall
FGameplayMediaEncoder::GetAudioConfig
          (FGameplayMediaEncoder *this,FAudioConfig *__return_storage_ptr__)

{
  FAudioEncoder *pFVar1;
  wchar_t *pwVar2;
  void *local_28 [2];
  uint local_18;
  uint local_14;
  uint local_10;
  
  pFVar1 = (this->AudioEncoder).Ptr;
  if (pFVar1 == (FAudioEncoder *)0x0) {
    __return_storage_ptr__->Samplerate = 0;
    __return_storage_ptr__->NumChannels = 0;
    *(undefined8 *)&__return_storage_ptr__->Bitrate = 0;
    (__return_storage_ptr__->Codec).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Codec).Data.ArrayNum = 0;
    (__return_storage_ptr__->Codec).Data.ArrayMax = 0;
  }
  else {
    pwVar2 = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))();
    pFVar1 = (this->AudioEncoder).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,local_28);
    ::FString::FString(&__return_storage_ptr__->Codec,pwVar2);
    __return_storage_ptr__->Samplerate = local_18;
    __return_storage_ptr__->NumChannels = local_14;
    __return_storage_ptr__->Bitrate = local_10;
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetListenerName @ 148d21df0

FString * __thiscall FGameplayMediaEncoder::GetListenerName(FGameplayMediaEncoder *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGameplayMediaEncoder::GetListenerName'::__l2::
             _dynamic_atexit_destructor_for___S1751__);
      ::FString::FString(&_S1751,L"GameplayMediaEncoderListener");
      ListenerName = &_S1751;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ListenerName;
}

// GetMediaTimestamp @ 148d21e80

FTimespan __thiscall FGameplayMediaEncoder::GetMediaTimestamp(FGameplayMediaEncoder *this)

{
  longlong *in_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar2 [16];
  LARGE_INTEGER local_res8;
  undefined1 auVar1 [16];
  
  QueryPerformanceCounter(&local_res8);
  auVar1._8_8_ = extraout_XMM0_Qb;
  auVar1._0_8_ = extraout_XMM0_Qa;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
  auVar2 = roundpd(auVar1,auVar2,1);
  *in_RDX = (longlong)auVar2._0_8_ - (this->StartTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// Initialize @ 148d21f20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FGameplayMediaEncoder::Initialize(FGameplayMediaEncoder *this)

{
  TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> *pTVar1;
  TUniquePtr<AVEncoder::FAudioEncoder,TDefaultDelete<AVEncoder::FAudioEncoder>_> *pTVar2;
  FVideoConfig *pFVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  code *pcVar7;
  FAudioEncoder *pFVar8;
  FVideoEncoder *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FAudioEncoderFactory *pFVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  void *pvVar19;
  TSharedPtr<AVEncoder::FVideoEncoderInput,1> *pTVar20;
  FVideoEncoderFactory *pFVar21;
  FVideoEncoderFactory *this_00;
  TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> TVar22;
  uint uVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  bool bVar26;
  FScriptContainerElement *pFVar27;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined1 local_e8 [16];
  FString local_d8;
  void *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined1 local_54;
  undefined4 local_50;
  FString local_48;
  
  ::FString::FString((FString *)local_e8,"Initial");
  if ((FVideoEncoderInput *)local_e8._0_8_ != (FVideoEncoderInput *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  pTVar1 = &this->VideoEncoder;
  if (pTVar1->Ptr != (FVideoEncoder *)0x0) {
    if (4 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    return true;
  }
  bVar26 = false;
  ::FString::FString(&local_48,"aac");
  pFVar16 = AVEncoder::FAudioEncoderFactory::FindFactory(&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (pFVar16 == (FAudioEncoderFactory *)0x0) {
    if (1 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    goto LAB_148d225e1;
  }
  pcVar7 = *(code **)((longlong)*pFVar16 + 0x18);
  ::FString::FString((FString *)local_e8,"aac");
  puVar17 = (undefined8 *)(*pcVar7)(pFVar16,&local_res10,local_e8);
  pTVar2 = &this->AudioEncoder;
  if (pTVar2 != (TUniquePtr<AVEncoder::FAudioEncoder,TDefaultDelete<AVEncoder::FAudioEncoder>_> *)
                puVar17) {
    pFVar8 = pTVar2->Ptr;
    pTVar2->Ptr = (FAudioEncoder *)*puVar17;
    *puVar17 = 0;
    if (pFVar8 != (FAudioEncoder *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if ((FVideoEncoderInput *)local_e8._0_8_ != (FVideoEncoderInput *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  pFVar8 = pTVar2->Ptr;
  if (pFVar8 == (FAudioEncoder *)0x0) {
    if (1 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    goto LAB_148d225e1;
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = 48000;
  local_b4 = 2;
  local_b0 = 0x2ee00;
  cVar12 = (**(code **)(pFVar8->_padding_ + 0x18))(pFVar8,&local_c8);
  if (cVar12 == '\0') {
    if (1 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
  }
  else {
    (**(code **)(pTVar2->Ptr->_padding_ + 0x38))(pTVar2->Ptr,&this->_padding_);
    ::FString::FString((FString *)local_e8,"Audio encoder initialized");
    if ((FVideoEncoderInput *)local_e8._0_8_ != (FVideoEncoderInput *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    ::FString::FString(&local_d8,"h264");
    pFVar3 = &this->VideoConfig;
    if (pFVar3 != (FVideoConfig *)&local_d8) {
      pFVar25 = (pFVar3->Codec).Data.AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      (pFVar3->Codec).Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      (this->VideoConfig).Codec.Data.ArrayNum = local_d8.Data.ArrayNum;
      (this->VideoConfig).Codec.Data.ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    puVar4 = &(this->VideoConfig).Bitrate;
    (this->VideoConfig).Width = 0;
    puVar5 = &(this->VideoConfig).Framerate;
    *puVar4 = 0;
    puVar6 = &(this->VideoConfig).Height;
    *puVar5 = 0;
    *puVar6 = 0;
    pwVar18 = FCommandLine::Get();
    FParse::Value(pwVar18,L"GameplayMediaEncoder.ResY=",puVar6);
    if (4 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    uVar23 = *puVar6;
    uVar14 = 0x2d0;
    if ((uVar23 == 0) || (uVar23 == 0x2d0)) {
      uVar23 = 0x500;
    }
    else {
      uVar14 = 0x438;
      if (uVar23 != 0x438) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder)
        ;
        goto LAB_148d225ce;
      }
      uVar23 = 0x780;
    }
    (this->VideoConfig).Width = uVar23;
    *puVar6 = uVar14;
    pwVar18 = FCommandLine::Get();
    FParse::Value(pwVar18,L"GameplayMediaEncoder.FPS=",puVar5);
    uVar23 = *puVar5;
    if (uVar23 == 0) {
      *puVar5 = 0x3c;
      this->bDoFrameSkipping = false;
      if (4 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Uncapping_FPS_151cce470,
                   (FLogCategoryBase *)&GameplayMediaEncoder);
      }
    }
    else {
      uVar14 = 0x3c;
      if (uVar23 < 0x3c) {
        uVar14 = uVar23;
      }
      uVar23 = 10;
      if (10 < uVar14) {
        uVar23 = uVar14;
      }
      *puVar5 = uVar23;
      if (4 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      }
      this->bDoFrameSkipping = true;
    }
    *puVar4 = 20000000;
    pwVar18 = FCommandLine::Get();
    FParse::Value(pwVar18,L"GameplayMediaEncoder.Bitrate=",puVar4);
    uStack_5c = _UNK_151ccf0f8;
    local_64 = ___xmm_0000000300000003ffffffffffffffff;
    local_78 = (this->VideoConfig).Width;
    uVar23 = 20000000;
    if (*puVar4 < 20000000) {
      uVar23 = *puVar4;
    }
    local_74 = *puVar6;
    local_68 = 1000000;
    if (1000000 < uVar23) {
      local_68 = uVar23;
    }
    local_70 = *puVar5;
    *puVar4 = local_68;
    local_54 = 0;
    local_50 = 2;
    local_6c = 20000000;
    if (GDynamicRHI != (FDynamicRHI *)0x0) {
      iVar15 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      if (iVar15 == 2) {
        bVar13 = IsRHIDeviceAMD();
        pvVar19 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
        pTVar20 = AVEncoder::FVideoEncoderInput::CreateForD3D11
                            ((TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)local_e8,pvVar19,true,
                             bVar13);
      }
      else if (iVar15 == 3) {
        bVar13 = IsRHIDeviceNVIDIA();
        pvVar19 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
        pTVar20 = AVEncoder::FVideoEncoderInput::CreateForD3D12
                            ((TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)local_e8,pvVar19,true,
                             bVar13);
      }
      else {
        if (iVar15 != 4) {
          if (1 < (byte)GameplayMediaEncoder._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
          }
          goto LAB_148d225ce;
        }
        pvVar19 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
        pTVar20 = AVEncoder::FVideoEncoderInput::CreateForVulkan
                            ((TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)local_e8,pvVar19,true);
      }
      TSharedPtr<AVEncoder::FVideoEncoderInput,1>::operator=(&this->VideoEncoderInput,pTVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_e8._8_8_);
    }
    pFVar21 = AVEncoder::FVideoEncoderFactory::Get();
    iVar15 = (pFVar21->AvailableEncoders).ArrayNum;
    if (iVar15 == 0) {
      if (1 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      }
    }
    else {
      pFVar25 = (pFVar21->AvailableEncoders).AllocatorInstance.Data;
      pFVar27 = pFVar25 + (longlong)iVar15 * 0x30;
      while( true ) {
        if ((pFVar21->AvailableEncoders).ArrayNum != iVar15) {
          `TCheckedPointerIterator<AVEncoder::FVideoEncoderInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res10);
        }
        if (pFVar25 == pFVar27) break;
        if (*(uint *)(pFVar25 + 0xc) == 1) {
          this_00 = AVEncoder::FVideoEncoderFactory::Get();
          local_e8._0_8_ = (this->VideoEncoderInput).Object;
          local_e8._8_8_ = (this->VideoEncoderInput).SharedReferenceCount.ReferenceController;
          if ((TReferenceControllerBase<1> *)local_e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)local_e8._8_8_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_e8._8_8_)->SharedReferenceCount + 1);
            UNLOCK();
          }
          TVar22 = AVEncoder::FVideoEncoderFactory::Create
                             (this_00,(uint)&local_res18,
                              (TSharedPtr<AVEncoder::FVideoEncoderInput,1> *)
                              (ulonglong)*(uint *)pFVar25,(FLayerConfig *)local_e8);
          if ((FVideoEncoder *)pTVar1 != TVar22.Ptr) {
            pFVar9 = pTVar1->Ptr;
            pTVar1->Ptr = (FVideoEncoder *)(TVar22.Ptr)->_padding_;
            (TVar22.Ptr)->_padding_ = 0;
            if (pFVar9 != (FVideoEncoder *)0x0) {
              (**(code **)pFVar9->_padding_)(pFVar9,1);
            }
          }
          if (local_res18 != (undefined8 *)0x0) {
            (**(code **)*local_res18)(local_res18,1);
          }
        }
        pFVar25 = pFVar25 + 0x30;
      }
      pFVar9 = pTVar1->Ptr;
      if (pFVar9 == (FVideoEncoder *)0x0) {
        if (1 < (byte)GameplayMediaEncoder._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder)
          ;
        }
      }
      else {
        local_a8 = *(longlong *)&pFVar9->OnEncodedPacket;
        uVar11 = *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x8;
        local_98 = *(longlong *)&(pFVar9->OnEncodedPacket).field_0x10;
        uStack_90 = *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x18;
        uVar10 = *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x20;
        plStack_80 = *(longlong **)&(pFVar9->OnEncodedPacket).field_0x28;
        *(code **)&pFVar9->OnEncodedPacket =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FGameplayMediaEncoder::Initialize'::__l2::<lambda_2>,void,unsigned_int,TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,AVEncoder::FCodecPacket_const_&>
             ::Call;
        *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x8 = uStack_a0;
        *(undefined4 *)&(pFVar9->OnEncodedPacket).field_0x10 = 0x51ccf070;
        *(undefined4 *)&(pFVar9->OnEncodedPacket).field_0x14 = 1;
        *(FGameplayMediaEncoder **)&(pFVar9->OnEncodedPacket).field_0x18 = this;
        *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x20 = local_88;
        *(undefined8 *)&(pFVar9->OnEncodedPacket).field_0x28 = 0;
        local_88 = uVar10;
        uStack_a0 = uVar11;
        if (local_a8 != 0) {
          plVar24 = &local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar24 = plStack_80;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        if (pTVar1->Ptr == (FVideoEncoder *)0x0) {
          UE::Logging::Private::BasicFatalLog
                    (&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
        }
        else {
          ::FString::FString((FString *)local_e8,"Video encoder initialized");
          if ((FVideoEncoderInput *)local_e8._0_8_ != (FVideoEncoderInput *)0x0) {
            FMemory::Free((void *)local_e8._0_8_);
          }
          bVar26 = true;
        }
      }
    }
  }
LAB_148d225ce:
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (bVar26 != false) {
    return bVar26;
  }
LAB_148d225e1:
  Shutdown(this);
  return false;
}

// InitializeCmd @ 148d22620

void __cdecl FGameplayMediaEncoder::InitializeCmd(void)

{
  FGameplayMediaEncoder *this;
  
  this = Get();
  Initialize(this);
  return;
}

// ObtainInputFrame @ 148d22770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> * __thiscall
FGameplayMediaEncoder::ObtainInputFrame
          (FGameplayMediaEncoder *this,
          TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *__return_storage_ptr__)

{
  FVideoEncoderInput *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVideoEncoderInputFrame *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *pTVar7;
  ID3D11Texture2D *pIVar8;
  FVideoEncoderInputFrame *this_00;
  ID3D12Resource *pIVar9;
  uint uVar10;
  undefined1 auStack_298 [32];
  undefined1 local_278 [16];
  uint local_268;
  uint uStack_264;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_260;
  undefined1 local_250 [8];
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *local_248;
  undefined1 *local_240;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *local_238;
  undefined1 *local_230;
  code *local_228 [5];
  undefined8 *local_200;
  code *local_1f8 [5];
  undefined8 *local_1d0;
  FRHITextureDesc local_1c8;
  wchar_t *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (((this->VideoEncoderInput).Object == (FVideoEncoderInput *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar1 = (this->VideoEncoderInput).Object;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,__return_storage_ptr__);
  if ((__return_storage_ptr__->Object == (FVideoEncoderInputFrame *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->Width = (this->VideoConfig).Width;
  if ((__return_storage_ptr__->Object == (FVideoEncoderInputFrame *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
    return pTVar7;
  }
  __return_storage_ptr__->Object->Height = (this->VideoConfig).Height;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  local_260.Object = __return_storage_ptr__->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar10 = ((uint)((ulonglong)local_260.Object >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_260.Object >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_260.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar6 = TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
                    ((TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                      *)&this->BackBuffers,uVar10 >> 0x10 ^ uVar10,&local_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (iVar6 != -1) {
    return __return_storage_ptr__;
  }
  iVar6 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  local_1c8.Flags = None;
  local_1c8.ClearValue.Value._4_8_ = 0;
  local_1c8.ClearValue._0_8_ = 1;
  local_1c8.AliasableFormats.ArrayMax = 1;
  local_178 = L"VideoCapturerBackBuffer";
  local_268 = (this->VideoConfig).Width;
  local_1c8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_264 = (this->VideoConfig).Height;
  local_1c8.Extent.field0_0x0._0_4_ = (this->VideoConfig).Width;
  local_1c8.Extent.field0_0x0._4_4_ = (this->VideoConfig).Height;
  local_1c8.ClearValue.Value.Color[3] = 0.0;
  local_1c8.ExtData = 0;
  local_1c8.Depth = 1;
  local_1c8.ArraySize = 1;
  local_1c8.NumMips = '\x01';
  local_1c8.NumSamples = '\x01';
  local_1c8.Dimension = Texture2D;
  local_1c8.Format = PF_B8G8R8A8;
  local_1c8.UAVFormat = PF_Unknown;
  local_1c8.FastVRAMPercentage = 0xff;
  local_1c8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_1c8.AliasableFormats.ArrayNum = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_148,&local_1c8);
  local_f8 = local_178;
  local_f0 = (undefined4)local_170;
  local_ec = local_170._4_4_;
  local_e8 = local_168;
  local_e0 = local_160;
  local_d8 = local_158;
  if (local_1c8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_1c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_148.Flags = Shared|UAV|RenderTargetable;
  local_f0 = 0x2000;
  FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
  local_78 = local_f8;
  local_70 = local_f0;
  local_6c = local_ec;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  if (iVar6 == 2) {
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
      return pTVar7;
    }
    FRHICommandListBase::CreateTexture
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHITextureCreateDesc *)local_278);
    if ((__return_storage_ptr__->Object == (FVideoEncoderInputFrame *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
      return pTVar7;
    }
    pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pFVar3 = __return_storage_ptr__->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_228[0] = (code *)0x0;
    local_200 = FMemory::Malloc(0x20,8);
    local_200[1] = pFVar3;
    local_200[2] = pTVar2;
    *local_200 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::`8'::<lambda_1>,0,1>
                  ::_vftable_;
    local_200[3] = this;
    if (local_200 != (undefined8 *)0xfffffffffffffff8) {
      local_228[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FGameplayMediaEncoder::ObtainInputFrame'::__l8::<lambda_1>,void,ID3D11Texture2D_*>
                     ::Call;
    }
    pIVar8 = (ID3D11Texture2D *)(**(code **)(*(longlong *)local_278._0_8_ + 0x38))();
    AVEncoder::FVideoEncoderInputFrame::SetTexture
              (pFVar3,pIVar8,(TFunction<void___cdecl(ID3D11Texture2D_*)> *)local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_240 = local_278;
    local_248 = __return_storage_ptr__;
    TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>_>
              ((TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                *)&this->BackBuffers,
               (TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>
                *)local_250,(bool *)&local_248);
  }
  else {
    if (iVar6 != 3) goto LAB_148d22c79;
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *)(*pcVar4)();
      return pTVar7;
    }
    FRHICommandListBase::CreateTexture
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHITextureCreateDesc *)(local_278 + 8));
    this_00 = TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>::operator->(__return_storage_ptr__);
    pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pFVar3 = __return_storage_ptr__->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f8[0] = (code *)0x0;
    local_1d0 = FMemory::Malloc(0x20,8);
    local_1d0[1] = pFVar3;
    local_1d0[2] = pTVar2;
    *local_1d0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FGameplayMediaEncoder::ObtainInputFrame'::`12'::<lambda_2>,0,1>
                  ::_vftable_;
    local_1d0[3] = this;
    if (local_1d0 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_1f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FGameplayMediaEncoder::ObtainInputFrame'::__l12::<lambda_2>,void,ID3D12Resource_*>
                     ::Call;
    }
    pIVar9 = (ID3D12Resource *)(**(code **)(*(longlong *)local_278._8_8_ + 0x38))();
    AVEncoder::FVideoEncoderInputFrame::SetTexture
              (this_00,pIVar9,(TFunction<void___cdecl(ID3D12Resource_*)> *)local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_230 = local_278 + 8;
    local_238 = __return_storage_ptr__;
    TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>_>
              ((TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                *)&this->BackBuffers,
               (TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>
                *)(local_250 + 4),(bool *)&local_238);
    local_278._0_8_ = local_278._8_8_;
  }
  if ((FRHIResource *)local_278._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_278._0_8_);
  }
LAB_148d22c79:
  if (4 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// OnEncodedAudioFrame @ 148d22cf0

void __thiscall
FGameplayMediaEncoder::OnEncodedAudioFrame(FGameplayMediaEncoder *this,FMediaPacket *param_1)

{
  longlong *lpCriticalSection;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    puVar3 = (this->ListenersCS).CriticalSection.Opaque3[0];
    iVar2 = *(int *)((this->ListenersCS).CriticalSection.Opaque3 + 1);
    puVar1 = puVar3 + iVar2;
    while( true ) {
      if (*(int *)((this->ListenersCS).CriticalSection.Opaque3 + 1) != iVar2) {
        `TCheckedPointerIterator<IGameplayMediaEncoderListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar3 == puVar1) break;
      (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,param_1);
      puVar3 = puVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148d22d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnEncodedVideoFrame @ 148d22d90

void __thiscall
FGameplayMediaEncoder::OnEncodedVideoFrame
          (FGameplayMediaEncoder *this,uint param_1,
          TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *param_2,FCodecPacket *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  uchar *_Src;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  long64 local_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  uint local_30;
  
  local_68[0] = 1;
  local_50 = (void *)0x0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if (param_2->Object == (FVideoEncoderInputFrame *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = param_3->DataSize;
  _Src = (param_3->Data).Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_60 = param_2->Object->TimestampUs;
  local_58 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((_Src == (uchar *)0x0) && (uVar2 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_70 = CONCAT44(local_70._4_4_,uVar2);
  if (uVar2 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,0,&local_78,uVar2,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)(int)uVar2);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  local_50 = local_78.Data;
  local_48 = (undefined4)local_70;
  local_44 = local_70._4_4_;
  local_40 = CONCAT71(local_40._1_7_,param_3->IsKeyFrame);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (param_2->Object == (FVideoEncoderInputFrame *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_40 = CONCAT44(param_2->Object->Width,(undefined4)local_40);
  if (param_2->Object == (FVideoEncoderInputFrame *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lpCriticalSection = &this->ListenersCS;
  local_30 = (this->VideoConfig).Framerate;
  uStack_38 = CONCAT44(param_3->VideoQP,param_2->Object->Height);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = (this->Listeners).AllocatorInstance.Data;
    iVar3 = (this->Listeners).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Listeners).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<IGameplayMediaEncoderListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      (**(code **)**(undefined8 **)pFVar6)(*(undefined8 **)pFVar6,local_68);
      pFVar6 = pFVar6 + 8;
    }
    if (param_2->Object == (FVideoEncoderInputFrame *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)param_2->Object->_padding_)();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_50 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnFrameBufferReady @ 148d23030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::OnFrameBufferReady
          (FGameplayMediaEncoder *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  
  if (!__CsvProfilerStat481) {
    FCsvProfilerTrace::OutputInlineStat
              ("OnBackBufferReady",_GCsvCategory_GameplayMediaEncoder.Index);
    __CsvProfilerStat481 = true;
  }
  uVar2 = _GCsvCategory_GameplayMediaEncoder.Index;
  FCsvProfiler::BeginStat
            ("OnBackBufferReady",_GCsvCategory_GameplayMediaEncoder.Index,"CSV_OnBackBufferReady");
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayMediaEncoder\\Private\\GameplayMediaEncoder.cpp"
                       ,0x1e2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ProcessVideoFrame(this,param_2);
  FCsvProfiler::EndStat("OnBackBufferReady",uVar2);
  return;
}

// OnNewSubmixBuffer @ 148d230e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::OnNewSubmixBuffer
          (FGameplayMediaEncoder *this,USoundSubmix *param_1,float *param_2,int param_3,int param_4,
          int param_5,double param_6)

{
  uint uVar1;
  
  if (!__CsvProfilerStat464) {
    FCsvProfilerTrace::OutputInlineStat
              ("OnNewSubmixBuffer",_GCsvCategory_GameplayMediaEncoder.Index);
    __CsvProfilerStat464 = true;
  }
  uVar1 = _GCsvCategory_GameplayMediaEncoder.Index;
  FCsvProfiler::BeginStat
            ("OnNewSubmixBuffer",_GCsvCategory_GameplayMediaEncoder.Index,"CSV_OnNewSubmixBuffer");
  if (param_5 == 48000) {
    ProcessAudioFrame(this,param_2,param_3,param_4,48000);
  }
  else if ((this->bAudioFormatChecked == false) &&
          (this->bAudioFormatChecked = true, 1 < (byte)GameplayMediaEncoder._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
  }
  FCsvProfiler::EndStat("OnNewSubmixBuffer",uVar1);
  return;
}

// ProcessAudioFrame @ 148d231c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::ProcessAudioFrame
          (FGameplayMediaEncoder *this,float *param_1,int param_2,int param_3,int param_4)

{
  FAudioEncoder *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType _Src;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  LARGE_INTEGER local_res8;
  TSampleBuffer<float> local_f8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TSampleBuffer<float> local_c0;
  longlong local_98;
  longlong local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 auVar17 [16];
  
  if ((this->AudioEncoder).Ptr != (FAudioEncoder *)0x0) {
    uVar12 = 0;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    if (((param_1 == (float *)0x0) && (param_2 != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,param_2,&local_d0,(int *)&local_c8,(int *)((longlong)&local_c8 + 4));
    _Src.Data = local_d0.Data;
    if (param_2 != 0) {
      memcpy(local_d0.Data + (longlong)iVar7 * 4,param_1,(longlong)param_2 << 2);
    }
    local_f8.RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.NumFrames = (int)local_c8 / param_3;
    local_f8.RawPCMData.ArrayNum = 0;
    local_f8.RawPCMData.ArrayMax = 0;
    local_c0.RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.RawPCMData.ArrayMax = 0;
    local_c0.NumSamples = (int)local_c8;
    local_c0.SampleRate = param_4;
    local_c0.SampleDuration = (float)local_c0.NumFrames / (float)param_4;
    local_c0.NumChannels = param_3;
    if ((int)local_c8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_c8 & 0xffffffff);
    }
    local_c0.RawPCMData.ArrayNum = 0;
    if (0 < (int)local_c8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_c8,(ForAnyElementType *)&local_c0,0,&local_c0.RawPCMData.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_c0.NumSamples,(ForAnyElementType *)&local_c0,&local_c0.RawPCMData.ArrayNum,
               &local_c0.RawPCMData.ArrayMax);
    memcpy(local_c0.RawPCMData.AllocatorInstance.Data,_Src.Data,(longlong)local_c0.NumSamples << 2);
    Audio::TSampleBuffer<float>::operator=(&local_f8,&local_c0);
    if (local_c0.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.RawPCMData.AllocatorInstance.Data);
    }
    if ((local_f8.NumChannels != 2) && (local_f8.RawPCMData.ArrayNum != 0)) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (longlong)(local_f8.NumFrames * 2);
      uVar9 = SUB168(ZEXT816(4) * auVar18,0);
      if (SUB168(ZEXT816(4) * auVar18,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      _Dst = operator_new__(uVar9);
      operator_delete__((void *)0x0);
      memset(_Dst,0,(longlong)(local_f8.NumFrames * 2) << 2);
      uVar13 = uVar12;
      uVar15 = uVar12;
      if (0 < local_f8.NumFrames) {
        do {
          uVar14 = uVar12;
          if (0 < local_f8.NumChannels) {
            do {
              uVar11 = (uint)uVar14;
              uVar8 = uVar11 & 0x80000001;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
              }
              lVar10 = (longlong)(int)(uVar8 + (int)uVar15);
              uVar14 = (ulonglong)(uVar11 + 1);
              *(float *)((longlong)_Dst + lVar10 * 4) =
                   *(float *)(local_f8.RawPCMData.AllocatorInstance.Data +
                             (longlong)(int)(uVar11 + local_f8.NumChannels * (int)uVar13) * 4) +
                   *(float *)((longlong)_Dst + lVar10 * 4);
            } while ((int)(uVar11 + 1) < local_f8.NumChannels);
          }
          uVar8 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar8;
          uVar15 = (ulonglong)((int)uVar15 + 2);
        } while ((int)uVar8 < local_f8.NumFrames);
      }
      local_f8.NumSamples = local_f8.NumFrames * 2;
      local_f8.NumChannels = 2;
      if (local_f8.NumSamples < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_f8.NumSamples);
      }
      iVar7 = local_f8.RawPCMData.ArrayMax;
      local_f8.RawPCMData._8_8_ = local_f8.RawPCMData._8_8_ & 0xffffffff00000000;
      if (iVar7 < local_f8.NumSamples) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_f8.NumSamples,(ForAnyElementType *)&local_f8,0,
                   &local_f8.RawPCMData.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f8.NumSamples,(ForAnyElementType *)&local_f8,
                 &local_f8.RawPCMData.ArrayNum,&local_f8.RawPCMData.ArrayMax);
      memcpy(local_f8.RawPCMData.AllocatorInstance.Data,_Dst,(longlong)local_f8.NumSamples << 2);
      operator_delete__(_Dst);
    }
    QueryPerformanceCounter(&local_res8);
    fVar23 = __real_3f000000;
    dVar4 = __real_416312d000000000;
    auVar17._8_8_ = extraout_XMM0_Qb;
    auVar17._0_8_ = extraout_XMM0_Qa;
    auVar21._0_8_ =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle *
         __real_416312d000000000 + __real_42e312d000000010;
    auVar21._8_8_ = 0;
    auVar18 = roundpd(auVar17,auVar21,1);
    dVar20 = this->AudioClock;
    dVar3 = (double)((longlong)auVar18._0_8_ - (this->StartTime).Ticks) * __real_3e7ad7f29abcaf48;
    if (dVar20 < dVar3) {
      if (2 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      }
      fVar16 = local_f8.SampleDuration * fVar23;
      auVar18 = ZEXT416((uint)fVar16);
      dVar20 = (double)fVar16 + dVar3;
      this->AudioClock = dVar20;
    }
    fVar5 = __real_bf800000;
    fVar16 = __real_3f800000;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_7c = 0;
    auVar22._0_8_ = dVar20 * dVar4 + __real_3fe0000000000000;
    auVar22._8_8_ = 0;
    auVar18 = roundpd(auVar18,auVar22,1);
    local_98 = (longlong)auVar18._0_8_;
    auVar19._0_8_ = (double)(local_f8.SampleDuration * __real_4b189680 + fVar23);
    auVar19._8_8_ = 0;
    auVar18 = roundpd(auVar19,auVar19,1);
    local_90 = (longlong)auVar18._0_8_;
    uVar13 = uVar12;
    if (0 < local_f8.RawPCMData.ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar11 < local_f8.RawPCMData.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        iVar7 = local_f8.RawPCMData.ArrayNum;
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_f8.RawPCMData.ArrayNum;
        }
        fVar23 = *(float *)(local_f8.RawPCMData.AllocatorInstance.Data + uVar13);
        if (fVar16 <= *(float *)(local_f8.RawPCMData.AllocatorInstance.Data + uVar13)) {
          fVar23 = fVar16;
        }
        uVar8 = 0;
        if ((int)uVar11 < iVar7) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (fVar23 <= fVar5) {
          fVar23 = fVar5;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        *(float *)(local_f8.RawPCMData.AllocatorInstance.Data + uVar13) = fVar23;
        uVar13 = uVar13 + 4;
        _Src.Data = local_d0.Data;
      } while ((int)(uVar11 + 1) < local_f8.RawPCMData.ArrayNum);
    }
    local_74 = local_f8.NumFrames;
    local_70 = local_f8.NumChannels;
    local_6c = local_f8.SampleRate;
    local_78 = local_f8.NumSamples;
    if (local_f8.NumSamples < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_f8.NumSamples);
    }
    local_80 = 0;
    if (local_7c < local_f8.NumSamples) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f8.NumSamples,&local_88,0,&local_7c);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_78,&local_88,&local_80,&local_7c);
    memcpy(local_88.Data,local_f8.RawPCMData.AllocatorInstance.Data,(longlong)(int)local_78 << 2);
    pFVar1 = (this->AudioEncoder).Ptr;
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,&local_98);
    this->AudioClock = (double)local_f8.SampleDuration + this->AudioClock;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    if (local_f8.RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.RawPCMData.AllocatorInstance.Data);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
  }
  return;
}

// ProcessVideoFrame @ 148d23810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::ProcessVideoFrame
          (FGameplayMediaEncoder *this,TRefCountPtr<FRHITexture> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FVideoEncoder *pFVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  longlong lVar5;
  TRefCountPtr<FRHITexture> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 extraout_XMM0_Qa;
  double dVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> local_e8;
  TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> local_d8;
  LARGE_INTEGER local_c8 [2];
  FVideoEncoderInputFrame *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FLayerConfig local_a8;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  undefined1 auVar10 [16];
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((this->VideoEncoder).Ptr == (FVideoEncoder *)0x0) {
    return;
  }
  lpCriticalSection = &this->VideoProcessingCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(local_c8);
  auVar10._8_8_ = extraout_XMM0_Qb;
  auVar10._0_8_ = extraout_XMM0_Qa;
  auVar11._8_8_ = 0;
  auVar11._0_8_ =
       ((double)local_c8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
  auVar11 = roundpd(auVar10,auVar11,1);
  lVar8 = (longlong)auVar11._0_8_ - (this->StartTime).Ticks;
  if (this->bDoFrameSkipping != false) {
    lVar5 = 0;
    dVar9 = (double)(this->VideoConfig).Framerate * (double)lVar8 * __real_3e7ad7f29abcaf48;
    if ((__real_43e0000000000000 <= dVar9) &&
       (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
      lVar5 = -0x8000000000000000;
    }
    if (6 < (byte)GameplayMediaEncoder._0_1_) {
      local_f8 = (longlong)dVar9 + lVar5;
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    if ((ulonglong)((longlong)dVar9 + lVar5) < this->NumCapturedFrames + 1) {
      if (5 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      }
      goto LAB_148d23b45;
    }
  }
  if ((this->bChangeBitrate != (FThreadSafeBool)0x0) ||
     (this->bChangeFramerate != (FThreadSafeBool)0x0)) {
    AVEncoder::FVideoEncoder::GetLayerConfig((this->VideoEncoder).Ptr,&local_a8,0);
    if (this->bChangeBitrate != (FThreadSafeBool)0x0) {
      local_a8.TargetBitrate = *(int *)&this->NewVideoBitrate;
      local_a8.MaxBitrate = 20000000;
    }
    if (this->bChangeFramerate != (FThreadSafeBool)0x0) {
      local_a8.MaxFramerate = *(uint *)&this->NewVideoFramerate;
      this->NumCapturedFrames = 0;
    }
    AVEncoder::FVideoEncoder::UpdateLayerConfig((this->VideoEncoder).Ptr,0,&local_a8);
    LOCK();
    this->bChangeFramerate = (FThreadSafeBool)0x0;
    UNLOCK();
    LOCK();
    this->bChangeBitrate = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  ObtainInputFrame(this,&local_e8);
  if (local_e8.Object == (FVideoEncoderInputFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_e8.Object == (FVideoEncoderInputFrame *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
  (local_e8.Object)->TimestampUs = lVar8;
  local_d8.Object = local_e8.Object;
  local_d8.SharedReferenceCount.ReferenceController =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
           ::FindChecked((TMapBase<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
                          *)&this->BackBuffers,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  CopyTexture(this,param_1,pTVar6);
  pFVar1 = (this->VideoEncoder).Ptr;
  local_78[0] = 0;
  local_68 = 0;
  local_40 = (longlong *)0x0;
  local_b8 = local_e8.Object;
  pTStack_b0 = local_e8.SharedReferenceCount.ReferenceController;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pFVar1,&local_b8,local_78);
  this->NumCapturedFrames = this->NumCapturedFrames + 1;
  (this->LastVideoInputTimestamp).Ticks = lVar8;
  if (local_68 != 0) {
    plVar7 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar7 = local_40;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
LAB_148d23b45:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RegisterListener @ 148d23b90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGameplayMediaEncoder::RegisterListener
          (FGameplayMediaEncoder *this,IGameplayMediaEncoderListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IGameplayMediaEncoderListener *local_res10;
  
  local_res10 = param_1;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayMediaEncoder\\Private\\GameplayMediaEncoder.cpp"
                         ,0x65,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lpCriticalSection = &this->ListenersCS;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Listeners).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (iVar1 == 0) {
    if (4 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    bVar3 = Start(this);
    if (!bVar3) {
      return bVar3;
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<IGameplayMediaEncoderListener_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<IGameplayMediaEncoderListener_*_const_&>(&this->Listeners,&local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetVideoBitrate @ 148d23f10

void __thiscall FGameplayMediaEncoder::SetVideoBitrate(FGameplayMediaEncoder *this,uint param_1)

{
  LOCK();
  this->NewVideoBitrate = (TAtomic<unsigned_int>)param_1;
  UNLOCK();
  LOCK();
  this->bChangeBitrate = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// SetVideoFramerate @ 148d23f30

void __thiscall FGameplayMediaEncoder::SetVideoFramerate(FGameplayMediaEncoder *this,uint param_1)

{
  TAtomic<unsigned_int> TVar1;
  TAtomic<unsigned_int> TVar2;
  
  TVar2 = (TAtomic<unsigned_int>)0x3c;
  if (param_1 < 0x3c) {
    TVar2 = (TAtomic<unsigned_int>)param_1;
  }
  TVar1 = (TAtomic<unsigned_int>)0xa;
  if (10 < (uint)TVar2) {
    TVar1 = TVar2;
  }
  LOCK();
  this->NewVideoFramerate = TVar1;
  UNLOCK();
  LOCK();
  this->bChangeFramerate = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// Shutdown @ 148d23f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGameplayMediaEncoder::Shutdown(FGameplayMediaEncoder *this)

{
  FWindowsRecursiveMutex *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  FAudioEncoder *pFVar4;
  FVideoEncoder *pFVar5;
  bool bVar6;
  TMap<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>_>
  *this_00;
  
  if ((this->StartTime).Ticks != 0) {
    if (4 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    }
    Stop(this);
  }
  pFVar1 = &this->AudioProcessingCS;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar4 = (this->AudioEncoder).Ptr;
    if (pFVar4 != (FAudioEncoder *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x20))();
      pFVar4 = (this->AudioEncoder).Ptr;
      if (pFVar4 != (FAudioEncoder *)0x0) {
        (this->AudioEncoder).Ptr = (FAudioEncoder *)0x0;
        (**(code **)pFVar4->_padding_)();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &this->VideoProcessingCS;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar5 = (this->VideoEncoder).Ptr;
      if (pFVar5 != (FVideoEncoder *)0x0) {
        (**(code **)(pFVar5->_padding_ + 0x10))();
        pFVar5 = (this->VideoEncoder).Ptr;
        if (pFVar5 != (FVideoEncoder *)0x0) {
          (this->VideoEncoder).Ptr = (FVideoEncoder *)0x0;
          (**(code **)pFVar5->_padding_)();
        }
        this_00 = &this->BackBuffers;
        bVar6 = 1 < *(int *)&(this->BackBuffers).field_0x48;
        if (!bVar6) {
          TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,0,*(int *)&(this->BackBuffers).field_0x8);
        puVar2 = &(this->BackBuffers).field_0xc;
        *(undefined4 *)&(this->BackBuffers).field_0x8 = 0;
        if (*(int *)puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
        }
        *(undefined4 *)&(this->BackBuffers).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->BackBuffers).field_0x34 = 0;
        iVar3 = *(int *)&(this->BackBuffers).field_0x2c;
        *(undefined4 *)&(this->BackBuffers).field_0x28 = 0;
        if ((iVar3 < 0) || (0x80 < iVar3)) {
          *(undefined4 *)&(this->BackBuffers).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BackBuffers).field_0x10,0);
        }
        if (bVar6) {
          *(undefined4 *)&(this->BackBuffers).field_0x48 = 1;
          TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                    *)this_00);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000148d240fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShutdownCmd @ 148d24110

void __cdecl FGameplayMediaEncoder::ShutdownCmd(void)

{
  FGameplayMediaEncoder *this;
  
  this = Get();
  Shutdown(this);
  return;
}

// Start @ 148d24130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FGameplayMediaEncoder::Start(FGameplayMediaEncoder *this)

{
  code *pcVar1;
  double dVar2;
  FAudioDevice *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  TSharedRef<ISubmixBufferListener,1> *pTVar7;
  FSlateApplication *pFVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  TSharedRef<ISubmixBufferListener,1> local_48;
  FAudioDeviceHandle local_38;
  undefined1 auVar9 [16];
  
  if ((this->StartTime).Ticks == 0) {
    if ((this->VideoEncoder).Ptr == (FVideoEncoder *)0x0) {
      if (4 < (byte)GameplayMediaEncoder._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      }
      bVar4 = Initialize(this);
      if (!bVar4) {
        return false;
      }
    }
    QueryPerformanceCounter(&local_res8);
    auVar9._8_8_ = extraout_XMM0_Qb;
    auVar9._0_8_ = extraout_XMM0_Qa;
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->AudioClock = 0.0;
    this->NumCapturedFrames = 0;
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (dVar2 + __real_4170000000000000) * __real_416312d000000000 + __real_3fe0000000000000;
    auVar10 = roundpd(auVar9,auVar10,1);
    (this->StartTime).Ticks = (longlong)auVar10._0_8_;
    UEngine::GetMainAudioDevice(GEngine,&local_38);
    bVar4 = FAudioDeviceHandle::IsValid(&local_38);
    if (bVar4) {
      this->bAudioFormatChecked = false;
      bVar4 = FAudioDeviceHandle::IsValid(&local_38);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      pFVar3 = local_38.Device;
      pcVar1 = *(code **)((local_38.Device)->_padding_ + 0x90);
      bVar4 = FAudioDeviceHandle::IsValid(&local_38);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      uVar6 = (**(code **)((local_38.Device)->_padding_ + 0x88))();
      pTVar7 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                         ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_48);
      (*pcVar1)(pFVar3,pTVar7,uVar6);
    }
    pFVar8 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
    ::AddRaw<FGameplayMediaEncoder>
              ((TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                *)(*(longlong *)&pFVar8->field_0x60 + 0x98),(FGameplayMediaEncoder *)&local_res10.s,
               (pmf_c4ca0e32 *)this);
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_38);
  }
  else if (4 < (byte)GameplayMediaEncoder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
    return true;
  }
  return true;
}

// StartCmd @ 148d24360

void __cdecl FGameplayMediaEncoder::StartCmd(void)

{
  FGameplayMediaEncoder *this;
  
  this = Get();
  Start(this);
  return;
}

// Stop @ 148d24380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGameplayMediaEncoder::Stop(FGameplayMediaEncoder *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  UEngine *this_00;
  bool bVar4;
  UClass *pUVar5;
  FAudioDevice *pFVar6;
  undefined8 uVar7;
  TSharedRef<ISubmixBufferListener,1> *pTVar8;
  FSlateApplication *pFVar9;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayMediaEncoder\\Private\\GameplayMediaEncoder.cpp"
                       ,0x175,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = GEngine;
  if ((this->StartTime).Ticks == 0) {
    if (4 < (byte)GameplayMediaEncoder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
      return;
    }
  }
  else {
    if (GEngine != (UEngine *)0x0) {
      pUVar5 = Z_Construct_UClass_UGameEngine_NoRegister();
      lVar2 = this_00->_padding_;
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pFVar6 = UEngine::GetMainAudioDeviceRaw(this_00);
        if ((pFVar6 != (FAudioDevice *)0x0) && (this->bIsInDestructor == false)) {
          lVar2 = pFVar6->_padding_;
          uVar7 = (**(code **)(lVar2 + 0x88))(pFVar6);
          pTVar8 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                             ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_18
                             );
          (**(code **)(lVar2 + 0xa0))(pFVar6,pTVar8,uVar7);
        }
        if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
          pFVar9 = FSlateApplication::Get();
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                     (*(longlong *)&pFVar9->field_0x60 + 0x98),this);
        }
      }
    }
    (this->StartTime).Ticks = 0;
    this->AudioClock = 0.0;
  }
  return;
}

// StopCmd @ 148d244c0

void __cdecl FGameplayMediaEncoder::StopCmd(void)

{
  FGameplayMediaEncoder *this;
  
  this = Get();
  Stop(this);
  return;
}

// UnregisterListener @ 148d24780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayMediaEncoder::UnregisterListener
          (FGameplayMediaEncoder *this,IGameplayMediaEncoderListener *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  IGameplayMediaEncoderListener *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  IGameplayMediaEncoderListener *local_res10;
  
  local_res10 = param_1;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayMediaEncoder\\Private\\GameplayMediaEncoder.cpp"
                         ,0x7b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ListenersCS);
  pFVar2 = (this->Listeners).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Listeners).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Listeners).ArrayNum;
  if (iVar1 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ListenersCS);
  }
  else {
    pFVar2 = (this->Listeners).AllocatorInstance.Data;
    iVar9 = 0;
    bVar4 = *(IGameplayMediaEncoderListener **)pFVar2 != local_res10;
    lVar6 = 0;
    pIVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(IGameplayMediaEncoderListener **)(pFVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Listeners).ArrayNum = iVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ListenersCS);
    if (0 < iVar9) {
      return;
    }
  }
  if (4 < (byte)GameplayMediaEncoder._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GameplayMediaEncoder);
  }
  Stop(this);
  return;
}

// UpdateVideoConfig @ 148d24970

void __thiscall FGameplayMediaEncoder::UpdateVideoConfig(FGameplayMediaEncoder *this)

{
  FLayerConfig local_38;
  
  if ((this->bChangeBitrate != (FThreadSafeBool)0x0) ||
     (this->bChangeFramerate != (FThreadSafeBool)0x0)) {
    AVEncoder::FVideoEncoder::GetLayerConfig((this->VideoEncoder).Ptr,&local_38,0);
    if (this->bChangeBitrate != (FThreadSafeBool)0x0) {
      local_38.TargetBitrate = *(int *)&this->NewVideoBitrate;
      local_38.MaxBitrate = 20000000;
    }
    if (this->bChangeFramerate != (FThreadSafeBool)0x0) {
      local_38.MaxFramerate = *(uint *)&this->NewVideoFramerate;
      this->NumCapturedFrames = 0;
    }
    AVEncoder::FVideoEncoder::UpdateLayerConfig((this->VideoEncoder).Ptr,0,&local_38);
    LOCK();
    this->bChangeFramerate = (FThreadSafeBool)0x0;
    UNLOCK();
    LOCK();
    this->bChangeBitrate = (FThreadSafeBool)0x0;
    UNLOCK();
  }
  return;
}

