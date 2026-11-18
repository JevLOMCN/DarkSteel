// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 35

// StaticResource'' @ 141057670

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIBlendState> this;
  TRefCountPtr<FRHIBlendState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource.StateRHI.Reference = (FRHIBlendState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>
            ::CreateRHI();
    this = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIBlendState *)
        &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIBlendState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 141057730

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410577f0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIRasterizerState> this;
  TRefCountPtr<FRHIRasterizerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource.StateRHI.Reference = (FRHIRasterizerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticRasterizerState<2,0,0,1>::CreateRHI();
    this = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIRasterizerState *)
        &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHIRasterizerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource__);
  return;
}

// StaticResource'' @ 1410578b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHISamplerState> this;
  TRefCountPtr<FRHISamplerState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource.StateRHI.Reference = (FRHISamplerState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticSamplerState<0,1,1,1,0,1,0,0>::CreateRHI();
    this = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHISamplerState *)
        &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI) {
                    /* WARNING: Load size is inaccurate */
      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference = *TVar1.Reference;
      *(undefined8 *)TVar1.Reference = 0;
      if (this.Reference != (FRHISamplerState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource__);
  return;
}

// DefaultConstructItems<TRefCountPtr<FVulkanTexture>,int> @ 145bc76d0

void __cdecl DefaultConstructItems<TRefCountPtr<FVulkanTexture>,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<TRefCountPtr<FVulkanTexture>,int> @ 145bc7710

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
DestructItems<TRefCountPtr<FVulkanTexture>,int>(TRefCountPtr<FVulkanTexture> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FVulkanTexture *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FVulkanViewport::FVulkanViewport'::__l2::TSTR_CreateSwapchain129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bc7750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FVulkanViewport::FVulkanViewport_::__l2::TSTR_CreateSwapchain129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FVulkanViewport::FVulkanViewport'::__l2::TSTR_CreateSwapchain129>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145bc78a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145bc7a95;
  }
LAB_145bc78a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145bc797f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc797f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145bc7a95:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FVulkanViewport::OnSystemResolutionChanged'::__l5::TSTR_RecreateSwapchain844>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bc7ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FVulkanViewport::OnSystemResolutionChanged_::__l5::TSTR_RecreateSwapchain844>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FVulkanViewport::OnSystemResolutionChanged'::__l5::TSTR_RecreateSwapchain844>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145bc7c21;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145bc7e15;
  }
LAB_145bc7c21:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145bc7cff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc7cff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145bc7e15:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::TSTR_ResizeViewport887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bc7e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FVulkanDynamicRHI::RHIResizeViewport_::__l15::TSTR_ResizeViewport887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::TSTR_ResizeViewport887>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145bc7fa1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145bc8195;
  }
LAB_145bc7fa1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145bc807f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc807f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145bc8195:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::TSTR_ResizeViewport905>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bc81d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FVulkanDynamicRHI::RHIResizeViewport_::__l12::TSTR_ResizeViewport905>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::TSTR_ResizeViewport905>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145bc8321;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145bc8515;
  }
LAB_145bc8321:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145bc83ff:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc83ff;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145bc8515:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FVulkanViewport::Tick'::__l12::TSTR_UpdateVsync335>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bc8550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FVulkanViewport::Tick_::__l12::TSTR_UpdateVsync335>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FVulkanViewport::Tick'::__l12::TSTR_UpdateVsync335>::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_145bc86a1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_145bc8895;
  }
LAB_145bc86a1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_145bc877f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bc877f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_145bc8895:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetShaderParametersLegacy<TRHICommandList_RecursiveHazardous<FVulkanCommandListContext>,FScreenPS,FRHIPixelShader,FRHISamplerState_*,FVulkanTexture_*> @ 145bc8d60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderParametersLegacy<TRHICommandList_RecursiveHazardous<FVulkanCommandListContext>,FScreenPS,FRHIPixelShader,FRHISamplerState_*,FVulkanTexture_*>
          (TRHICommandList_RecursiveHazardous<FVulkanCommandListContext> *param_1,
          TShaderRefBase<FScreenPS,FShaderMapPointerTable> *param_2,FRHIPixelShader *param_3,
          FRHISamplerState **param_4,FVulkanTexture **param_5)

{
  longlong *plVar1;
  FScreenPS *pFVar2;
  FRHIBatchedShaderParameters *pFVar3;
  FRHISamplerState *pFVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  uint uStack_2c;
  
  puVar8 = (undefined8 *)0x0;
  puVar6 = *(undefined8 **)&param_1->field_0xc0;
  if (*(undefined8 **)&param_1->field_0xc0 == (undefined8 *)0x0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = *(undefined8 *)&param_1->field_0xc8;
        puVar7[1] = param_1;
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 2),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 7),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 0xc),Small);
        FMemStackBase::FMemStackBase((FMemStackBase *)(puVar7 + 0x11),Small);
        puVar7[0x16] = 0;
        *(undefined8 **)&param_1->field_0xc8 = puVar7;
        puVar8 = puVar7;
      }
      *puVar6 = puVar8;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 8) = 0;
      puVar8 = puVar6;
    }
    *(undefined8 **)&param_1->field_0xc0 = puVar8;
    puVar6 = puVar8;
  }
  if ((0 < *(int *)(puVar6 + 8) + *(int *)(puVar6 + 6) + *(int *)(puVar6 + 4)) &&
     (bVar5 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                        (local_res8), !bVar5)) {
    plVar1 = *(longlong **)&param_1->field_0xc0;
    *(undefined8 *)(*plVar1 + 0xb0) = 0;
    plVar1[1] = 0;
    plVar1[2] = (ulonglong)uStack_2c << 0x20;
    plVar1[3] = 0;
    plVar1[4] = (ulonglong)uStack_2c << 0x20;
    plVar1[5] = 0;
    plVar1[6] = (ulonglong)uStack_2c << 0x20;
    plVar1[7] = 0;
    plVar1[8] = (ulonglong)uStack_2c << 0x20;
  }
  pFVar2 = param_2->ShaderContent;
  pFVar3 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
  pFVar4 = *param_4;
  SetTextureParameter(pFVar3,&pFVar2->InTexture,(FRHITexture *)*param_5);
  SetSamplerParameter(pFVar3,&pFVar2->InTextureSampler,pFVar4);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)param_3,pFVar3);
  return;
}

// ~TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>,1,0> @ 145bc94b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FVulkanViewport::FVulkanViewport_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::__l5::<lambda_1>,1,0> @ 145bc94d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FVulkanViewport::OnSystemResolutionChanged_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::<lambda_1>,1,1> @ 145bc94f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHIResizeViewport_::__l12::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`12'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanViewport::Tick'::__l12::<lambda_1>,1,0> @ 145bc9510

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FVulkanViewport::Tick'::__l12::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FVulkanViewport::Tick_::__l12::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::Tick'::`12'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::<lambda_1>,1,1> @ 145bc9530

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FVulkanDynamicRHI::RHIResizeViewport_::__l15::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`15'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{320}' @ 145bc9fac

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanBackBuffer::`vector deleting
   destructor'`adjustor{320}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanBackBuffer::_vector_deleting_destructor__adjustor_320__(FVulkanBackBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanBackBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145bc9fc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FVulkanBackBuffer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FVulkanBackBuffer::_vector_deleting_destructor__adjustor_40__(FVulkanBackBuffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FVulkanBackBuffer *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145bc9fd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVulkanViewport,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVulkanViewport,void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l12::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`12'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca0c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FVulkanViewport::Tick'::__l12::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanViewport::Tick'::`12'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::__l15::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FVulkanDynamicRHI::RHIResizeViewport'::`15'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca140

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall
FVulkanBackBuffer::_scalar_deleting_destructor_(FVulkanBackBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  if ((char)this->_padding_ == '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImageOwner() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ != 0) {
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  this->_padding_ = 0;
  FVulkanTexture::~FVulkanTexture((FVulkanTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bca210

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall FVulkanViewport::_scalar_deleting_destructor_(FVulkanViewport *this,uint param_1)

{
  ~FVulkanViewport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// CopyImageToBackBuffer @ 145bca800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
CopyImageToBackBuffer
          (FVulkanCommandListContext *param_1,FVulkanTexture *param_2,FVulkanTexture *param_3,
          int param_4,int param_5,int param_6,int param_7,VkSurfaceTransformFlagBitsKHR param_8)

{
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  VkImageLayout VVar5;
  FVulkanCommandBuffer *pFVar6;
  VkImageSubresourceRange *pVVar7;
  longlong lVar8;
  FGlobalShaderMap *this;
  FShaderType *pFVar9;
  FName FVar10;
  FRHIVertexShader *pFVar11;
  FShaderParametersMetadata *pFVar12;
  FRHIPixelShader *pFVar13;
  undefined8 *puVar14;
  IRHICommandContext *pIVar15;
  VkImageLayout VVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStackY_22f8 [32];
  FRHISamplerState *local_2298 [2];
  float local_2288;
  float local_2284;
  float local_2280;
  float local_227c;
  FVulkanTexture *local_2278 [2];
  TShaderRefBase<FImagePreTransformVS,FShaderMapPointerTable> local_2268;
  TShaderRefBase<FScreenPS,FShaderMapPointerTable> local_2258;
  VkMemoryBarrier local_2248;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2218;
  undefined1 local_2208 [8];
  undefined1 local_2200 [8];
  FString local_21f8;
  FString local_21e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_21d8;
  VkImageSubresourceRange local_21c8;
  VkImageSubresourceRange local_21b0;
  VkImageSubresourceRange local_2198;
  VkImageSubresourceRange local_2180;
  FGraphicsPipelineStateInitializer local_2168;
  VkImageBlit local_2088;
  FRHIRenderPassInfo local_2038;
  VkImageCopy local_1f38;
  VkImageSubresourceRange local_1ee8;
  VkImageSubresourceRange local_1ed0;
  VkImageSubresourceRange local_1eb8;
  VkImageSubresourceRange local_1ea0;
  float local_1e88;
  float fStack_1e84;
  float fStack_1e80;
  undefined4 uStack_1e7c;
  FVulkanPipelineBarrier local_1e78;
  FVulkanPipelineBarrier local_1d58;
  undefined1 local_1c38 [56];
  longlong *local_1c00;
  int local_1bd8;
  byte local_1bce;
  undefined2 local_19a0;
  byte local_199d;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_22f8;
  pFVar6 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  if ((pFVar6->State != IsInsideBegin) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("CmdBuffer->IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                         ,0x235,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1e78.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_1e78.MemoryBarriers.ArrayNum = 0;
  local_1e78.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_1e78.ImageBarriers.ArrayNum = 0;
  local_1e78.ImageBarriers.ArrayMax = 2;
  VVar16 = (param_8 == VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) +
           VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
  local_1e78.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e78.BufferBarriers.ArrayNum = 0;
  local_1e78.BufferBarriers.ArrayMax = 0;
  VVar5 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
  if (param_8 != VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
    VVar5 = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
  }
  local_1e78.MemoryBarriers.ArrayMax = 1;
  pVVar7 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_21c8,1,0,1,0,0xffffffff);
  local_1ee8.aspectMask = pVVar7->aspectMask;
  local_1ee8.baseMipLevel = pVVar7->baseMipLevel;
  local_1ee8.levelCount = pVVar7->levelCount;
  local_1ee8.baseArrayLayer = pVVar7->baseArrayLayer;
  local_1ee8.layerCount = pVVar7->layerCount;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_1e78,param_2->Image,VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,VVar16,&local_1ee8);
  pVVar7 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_21b0,1,0,1,0,0xffffffff);
  local_1ed0.aspectMask = pVVar7->aspectMask;
  local_1ed0.baseMipLevel = pVVar7->baseMipLevel;
  local_1ed0.levelCount = pVVar7->levelCount;
  local_1ed0.baseArrayLayer = pVVar7->baseArrayLayer;
  local_1ed0.layerCount = pVVar7->layerCount;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_1e78,param_3->Image,VK_IMAGE_LAYOUT_UNDEFINED,VVar5,&local_1ed0);
  FVulkanPipelineBarrier::Execute(&local_1e78,pFVar6);
  if (local_1e78.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e78.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_1e78.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_1e78.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_1e78.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_1e78.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  pTVar3 = CVarVulkanDebugBarrier.Ref;
  pVVar1 = pFVar6->CommandBufferHandle;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 4;
  }
  if ((*(byte *)((longlong)pTVar3->ShadowedValue + lVar8) & 0x20) != 0) {
    local_2248.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_2248._4_8_ = 0;
    local_2248.pNext._4_4_ = 0;
    local_2248.srcAccessMask = 0x1e07fff;
    local_2248.dstAccessMask = 0x1e07fff;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x10000,0x10000,0,1,&local_2248,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  if (param_8 == VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
    if ((param_4 == param_6) && (param_5 == param_7)) {
      local_1f38.extent.height = param_5;
      local_1f38.srcSubresource.mipLevel = 0;
      local_1f38.srcSubresource.baseArrayLayer = 0;
      local_1f38.srcOffset.x = 0;
      local_1f38.srcOffset.y = 0;
      local_1f38.srcOffset.z = 0;
      local_1f38.dstSubresource.mipLevel = 0;
      local_1f38.dstSubresource.baseArrayLayer = 0;
      local_1f38.dstOffset.x = 0;
      local_1f38.dstOffset.y = 0;
      local_1f38.dstOffset.z = 0;
      local_1f38.extent.depth = 1;
      local_1f38.srcSubresource.aspectMask = 1;
      local_1f38.srcSubresource.layerCount = 1;
      local_1f38.dstSubresource.aspectMask = 1;
      local_1f38.dstSubresource.layerCount = 1;
      local_1f38.extent.width = param_4;
      (*VulkanDynamicAPI::vkCmdCopyImage)
                (pFVar6->CommandBufferHandle,param_2->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                 param_3->Image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,1,&local_1f38);
    }
    else {
      local_2088.srcOffsets[1].y = param_5;
      local_2088.dstOffsets[1].x = param_6;
      local_2088.dstOffsets[1].y = param_7;
      local_2088.srcSubresource.mipLevel = 0;
      local_2088.srcSubresource.baseArrayLayer = 0;
      local_2088.dstSubresource.aspectMask = 1;
      local_2088.dstSubresource.mipLevel = 0;
      local_2088.srcOffsets[0].x = 0;
      local_2088.srcOffsets[0].y = 0;
      local_2088.srcOffsets[0].z = 0;
      local_2088.srcOffsets[1].z = 1;
      local_2088.srcSubresource.aspectMask = 1;
      local_2088.srcSubresource.layerCount = 1;
      local_2088.dstOffsets[0].x = 0;
      local_2088.dstOffsets[0].y = 0;
      local_2088.dstOffsets[0].z = 0;
      local_2088.dstOffsets[1].z = 1;
      local_2088.dstSubresource.baseArrayLayer = 0;
      local_2088.dstSubresource.layerCount = 1;
      local_2088.srcOffsets[1].x = param_4;
      (*VulkanDynamicAPI::vkCmdBlitImage)
                (pFVar6->CommandBufferHandle,param_2->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                 param_3->Image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,1,&local_2088,VK_FILTER_LINEAR)
      ;
    }
  }
  else {
    local_2168.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_2168.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    pIVar15 = (IRHICommandContext *)&param_1->_padding_;
    if (param_1 == (FVulkanCommandListContext *)0x0) {
      pIVar15 = (IRHICommandContext *)0x0;
    }
    local_2168.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_2168.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_2168.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_2168.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_2168.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_2168.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_2168.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_2168.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_2168.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_2168.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_2168.RenderTargetsEnabled = 0;
    local_2168.RenderTargetFormats.Elements[0] = '\0';
    local_2168.RenderTargetFormats.Elements[1] = '\0';
    local_2168.RenderTargetFormats.Elements[2] = '\0';
    local_2168.RenderTargetFormats.Elements[3] = '\0';
    local_2168.RenderTargetFormats.Elements[4] = '\0';
    local_2168.RenderTargetFormats.Elements[5] = '\0';
    local_2168.RenderTargetFormats.Elements[6] = '\0';
    local_2168.RenderTargetFormats.Elements[7] = '\0';
    local_2168.RenderTargetFlags.Elements[0] = None;
    local_2168.RenderTargetFlags.Elements[1] = None;
    local_2168.RenderTargetFlags.Elements[2] = None;
    local_2168.RenderTargetFlags.Elements[3] = None;
    local_2168.RenderTargetFlags.Elements[4] = None;
    local_2168.RenderTargetFlags.Elements[5] = None;
    local_2168.RenderTargetFlags.Elements[6] = None;
    local_2168.RenderTargetFlags.Elements[7] = None;
    local_2168.DepthStencilTargetFormat = PF_Unknown;
    local_2168.DepthStencilTargetFlag = None;
    local_2168.DepthTargetLoadAction = ENoAction;
    local_2168.DepthTargetStoreAction = ENoAction;
    local_2168.StencilTargetLoadAction = ENoAction;
    local_2168.StencilTargetStoreAction = ENoAction;
    local_2168.DepthStencilAccess.Value = DepthNop;
    local_2168.NumSamples = 0;
    local_2168.SubpassHint = None;
    local_2168.SubpassIndex = '\0';
    local_2168.ConservativeRasterization = Disabled;
    local_2168.bDepthBounds = false;
    local_2168.MultiViewCount = '\0';
    local_2168.bHasFragmentDensityAttachment = false;
    local_2168.bAllowVariableRateShading = true;
    local_2168.ShadingRate = VRSSR_1x1;
    local_2168.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_2168.StatePrecachePSOHash = 0;
    FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
              ((FRHICommandList_RecursiveHazardous *)local_1c38,pIVar15);
    local_2038.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
    local_2038.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
    local_2038.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[1].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[1].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[2].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[2].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[3].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[3].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[4].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[4].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[5].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[5].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[6].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[6].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
    local_2038.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[7].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[7].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
    local_2038.DepthStencilRenderTarget.Action = DontLoad_DontStore;
    local_2038.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
    local_2038.ResolveRect.X1 = -1;
    local_2038.ResolveRect.Y1 = -1;
    local_2038.ResolveRect.X2 = -1;
    local_2038.ResolveRect.Y2 = -1;
    local_2038.ShadingRateTexture.Reference = (FRHITexture *)0x0;
    local_2038.ShadingRateTextureCombiner = VRSRB_Passthrough;
    local_2038.NopAccess = None;
    local_2038.NumOcclusionQueries = 0;
    local_2038.bOcclusionQueries = false;
    local_2038.MultiViewCount = '\0';
    local_2038.SubpassHint = None;
    local_2038.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
    local_2038.ColorRenderTargets.Elements[0].ArraySlice = -1;
    local_2038.ColorRenderTargets.Elements[0].MipIndex = '\0';
    local_2038.ColorRenderTargets.Elements[0].Action = DontLoad_Store;
    local_2038.ColorRenderTargets.Elements[0].RenderTarget = (FRHITexture *)param_3;
    FRHICommandList::BeginRenderPass((FRHICommandList *)local_1c38,&local_2038,L"SurfaceTransform");
    if (local_2038.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2038.ShadingRateTexture.Reference);
    }
    this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
    pFVar9 = (FShaderType *)FImagePreTransformVS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_2228,pFVar9,0);
    if (local_2228.ShaderContent == (FShader *)0x0) {
      FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2208);
      FName::ToString((FName *)FVar10,&local_21f8);
      FImagePreTransformVS::GetStaticType();
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_21f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21f8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FImagePreTransformVS::GetStaticType();
    local_2268.ShaderContent = (FImagePreTransformVS *)local_2228.ShaderContent;
    local_2268.ShaderMap = local_2228.ShaderMap;
    pFVar9 = (FShaderType *)FScreenPS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_2218,pFVar9,0);
    if ((FScreenPS *)local_2218.ShaderContent == (FScreenPS *)0x0) {
      FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2200);
      FName::ToString((FName *)FVar10,&local_21e8);
      FScreenPS::GetStaticType();
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_21e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21e8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FScreenPS::GetStaticType();
    local_2258.ShaderContent = (FScreenPS *)local_2218.ShaderContent;
    local_2258.ShaderMap = local_2218.ShaderMap;
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)local_1c38,&local_2168);
    local_2168.BoundShaderState.VertexShaderRHI =
         TShaderRefBase<FImagePreTransformVS,FShaderMapPointerTable>::GetVertexShader
                   (&local_2268,true);
    local_2168.BoundShaderState.PixelShaderRHI =
         TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_2258,true);
    local_2168.BoundShaderState.VertexDeclarationRHI =
         (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_2168.PrimitiveType = PT_TriangleStrip;
    SetGraphicsPipelineState((FRHICommandList *)local_1c38,&local_2168,0,CheckApply,true);
    logf((float)(int)param_8);
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    uVar20 = 0;
    __vdecl_sincosf4();
    local_2288 = fVar18 * fVar17;
    local_2284 = fVar17 * extraout_XMM0_Db;
    local_2280 = fVar18 * extraout_XMM0_Dc * extraout_XMM0_Da - fVar19 * extraout_XMM0_Db;
    local_227c = fVar19 * fVar18 + extraout_XMM0_Db * extraout_XMM0_Dc * extraout_XMM0_Da;
    local_1e88 = fVar17;
    fStack_1e84 = fVar18;
    fStack_1e80 = fVar19;
    uStack_1e7c = uVar20;
    pFVar11 = TShaderRefBase<FImagePreTransformVS,FShaderMapPointerTable>::GetVertexShader
                        (&local_2268,true);
    pFVar12 = FImagePreTransformVS::FParameters::FTypeInfo::GetStructMetadata();
    local_21d8.ShaderContent = local_2228.ShaderContent;
    local_21d8.ShaderMap = local_2228.ShaderMap;
    ValidateShaderParameters(&local_21d8,pFVar12,&local_2288);
    SetShaderParameters((FRHICommandList *)local_1c38,(FRHIGraphicsShader *)pFVar11,
                        &(local_2228.ShaderContent)->Bindings,pFVar12,&local_2288);
    local_2298[0] =
         TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    local_2278[0] = param_2;
    pFVar13 = TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_2258,true);
    SetShaderParametersLegacy<TRHICommandList_RecursiveHazardous<FVulkanCommandListContext>,FScreenPS,FRHIPixelShader,FRHISamplerState_*,FVulkanTexture_*>
              ((TRHICommandList_RecursiveHazardous<FVulkanCommandListContext> *)local_1c38,
               &local_2258,pFVar13,local_2298,local_2278);
    if ((GRHICommandList.bLatchedBypass == false) || ((local_199d & 0x20) == 0)) {
      puVar14 = FMemStackBase::Alloc((FMemStackBase *)local_1c38,0x20,8);
      local_1bd8 = local_1bd8 + 1;
      *(undefined8 **)local_1c38._48_8_ = puVar14;
      local_1c38._48_8_ = puVar14 + 1;
      *(undefined8 *)local_1c38._48_8_ = 0;
      *puVar14 = &___7FRHICommandDrawPrimitive__6B_;
      *(undefined4 *)(puVar14 + 2) = 0;
      *(undefined4 *)((longlong)puVar14 + 0x14) = 2;
      *(undefined4 *)(puVar14 + 3) = 1;
    }
    else {
      if (((local_1bce == 0) || ((local_1bce & local_1bce - 1) != 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(ActivePipelines)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b0,
                             L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_1c00 == (longlong *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("GraphicsContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b1,
                             L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_1c00 + 0x1e0))(local_1c00,0,2,1);
    }
    if (((local_199d & 2) == 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsInsideRenderPass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c5,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((local_199d & 4) != 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!IsInsideComputePass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c6,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_199d & 8) != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,local_1c38);
      local_199d = local_199d & 0xf7;
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((local_199d & 0x20) == 0)) {
      puVar14 = FMemStackBase::Alloc((FMemStackBase *)local_1c38,0x10,8);
      local_1bd8 = local_1bd8 + 1;
      *(undefined8 **)local_1c38._48_8_ = puVar14;
      local_1c38._48_8_ = puVar14 + 1;
      *(undefined8 *)local_1c38._48_8_ = 0;
      *puVar14 = &___7FRHICommandEndRenderPass__6B_;
    }
    else {
      if (((local_1bce == 0) || ((local_1bce & local_1bce - 1) != 0)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsSingleRHIPipeline(ActivePipelines)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b0,
                             L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_1c00 == (longlong *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("GraphicsContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x2b1,
                             L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_1c00 + 0x250))();
    }
    local_199d = local_199d & 0xfd;
    local_19a0 = 0;
    FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous
              ((FRHICommandList_RecursiveHazardous *)local_1c38);
  }
  local_1d58.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_1d58.MemoryBarriers.ArrayNum = 0;
  local_1d58.MemoryBarriers.ArrayMax = 1;
  local_1d58.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_1d58.ImageBarriers.ArrayNum = 0;
  local_1d58.ImageBarriers.ArrayMax = 2;
  local_1d58.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d58.BufferBarriers.ArrayNum = 0;
  local_1d58.BufferBarriers.ArrayMax = 0;
  pVVar7 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_2198,1,0,1,0,0xffffffff);
  local_1eb8.aspectMask = pVVar7->aspectMask;
  local_1eb8.baseMipLevel = pVVar7->baseMipLevel;
  local_1eb8.levelCount = pVVar7->levelCount;
  local_1eb8.baseArrayLayer = pVVar7->baseArrayLayer;
  local_1eb8.layerCount = pVVar7->layerCount;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_1d58,param_2->Image,VVar16,VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,&local_1eb8);
  pVVar7 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_2180,1,0,1,0,0xffffffff);
  local_1ea0.aspectMask = pVVar7->aspectMask;
  local_1ea0.baseMipLevel = pVVar7->baseMipLevel;
  local_1ea0.levelCount = pVVar7->levelCount;
  local_1ea0.baseArrayLayer = pVVar7->baseArrayLayer;
  local_1ea0.layerCount = pVVar7->layerCount;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_1d58,param_3->Image,VVar5,VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,&local_1ea0);
  FVulkanPipelineBarrier::Execute(&local_1d58,pFVar6);
  if (local_1d58.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d58.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_1d58.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_1d58.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_1d58.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_1d58.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetVkDescriptorTypeForViewDesc @ 145bce220

/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

VkDescriptorType __cdecl GetVkDescriptorTypeForViewDesc(FRHIViewDesc *param_1)

{
  EViewType EVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  VkDescriptorType VVar5;
  int iVar6;
  
  EVar1 = (param_1->field0_0x0).Common.ViewType;
  if (EVar1 == BufferSRV) {
    cVar2 = *(char *)((longlong)&param_1->field0_0x0 + 2);
    if (cVar2 == '\x01') {
      return VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER;
    }
    if (cVar2 != '\x02') {
      if (cVar2 == '\x03') {
        return VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR;
      }
      if (cVar2 != '\x04') {
        iVar6 = 0x2d;
        goto LAB_145bce2a1;
      }
    }
  }
  else {
    if (EVar1 != BufferUAV) {
      if ((EVar1 == TextureSRV) && ((param_1->field0_0x0).Common.Format != PF_R64_UINT)) {
        return VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
      }
      return VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    }
    cVar2 = *(char *)((longlong)&param_1->field0_0x0 + 2);
    if (cVar2 == '\x01') {
      return VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER;
    }
    if (cVar2 != '\x02') {
      if (cVar2 == '\x03') {
        return VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR;
      }
      if (cVar2 != '\x04') {
        iVar6 = 0x40;
LAB_145bce2a1:
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                           ,iVar6,L"");
        if (!bVar4) {
          return VK_DESCRIPTOR_TYPE_MAX_ENUM;
        }
        pcVar3 = (code *)swi(3);
        VVar5 = (*pcVar3)();
        return VVar5;
      }
    }
  }
  return VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
}

// StaticResource'' @ 1503ca8b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticBlendState__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0P__0A__00_0A__0A__00_0A__0A___V__TRefCountPtr_VFRHIBlendState____PEAVFRHIBlendState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
      ::StaticResource.StateRHI.Reference != (FRHIBlendState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ca930

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503ca9b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticRasterizerState__01_0A__0A__00__V__TRefCountPtr_VFRHIRasterizerState____PEAVFRHIRasterizerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
      ::StaticResource.StateRHI.Reference != (FRHIRasterizerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
              ::StaticResource);
  return;
}

// StaticResource'' @ 1503caa30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticSamplerState__0A__00_00_00_0A__00_0A__0A___V__TRefCountPtr_VFRHISamplerState____PEAVFRHISamplerState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource);
  return;
}

// `dynamic_atexit_destructor_for_'CS'' @ 1503caab0

void __cdecl
`FVulkanViewport::WaitForFrameEventCompletion'::__l5::_dynamic_atexit_destructor_for__CS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503caab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CS);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1503caad0

void __cdecl
`FImagePreTransformVS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FImagePreTransformVS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

