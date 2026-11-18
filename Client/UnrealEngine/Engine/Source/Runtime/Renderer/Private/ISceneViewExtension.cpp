// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 23

// BeginRenderViewFamily @ 144ef9c20

void __thiscall
ISceneViewExtension::BeginRenderViewFamily(ISceneViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// GetFlags @ 144f125b0

ESceneViewExtensionFlags __thiscall ISceneViewExtension::GetFlags(ISceneViewExtension *this)

{
  return None;
}

// GetPriority @ 144f133b0

int __thiscall ISceneViewExtension::GetPriority(ISceneViewExtension *this)

{
  return 0;
}

// IsActiveThisFrame_Internal @ 144f1c980

bool __thiscall
ISceneViewExtension::IsActiveThisFrame_Internal
          (ISceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  return true;
}

// PostRenderBasePassDeferred_RenderThread @ 144f1dea0

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

void __thiscall
ISceneViewExtension::PostRenderBasePassDeferred_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FRenderTargetBindingSlots *param_3,
          TRDGUniformBuffer<FSceneTextureUniformParameters> *param_4)

{
  return;
}

// PostRenderBasePassMobile_RenderThread @ 144f1deb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PostRenderBasePassMobile_RenderThread
          (ISceneViewExtension *this,FRHICommandList *param_1,FSceneView *param_2)

{
  return;
}

// PostRenderViewFamily_RenderThread @ 144f1dec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PostRenderViewFamily_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PostRenderView_RenderThread @ 144f1ded0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PostRenderView_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// PostTLASBuild_RenderThread @ 144f1dee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PostTLASBuild_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// PreInitViews_RenderThread @ 144f1def0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PreInitViews_RenderThread(ISceneViewExtension *this,FRDGBuilder *param_1)

{
  return;
}

// PrePostProcessPassMobile_RenderThread @ 144f1df00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PrePostProcessPassMobile_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FMobilePostProcessingInputs *param_3)

{
  return;
}

// PrePostProcessPass_RenderThread @ 144f1df10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PrePostProcessPass_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FPostProcessingInputs *param_3)

{
  return;
}

// PreRenderBasePass_RenderThread @ 144f1df20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PreRenderBasePass_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,bool param_2)

{
  return;
}

// PreRenderViewFamily_RenderThread @ 144f1df30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PreRenderViewFamily_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PreRenderView_RenderThread @ 144f1df40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
ISceneViewExtension::PreRenderView_RenderThread
          (ISceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// SetupView @ 144f2af80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ISceneViewExtension::SetupView
          (ISceneViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 144f2af90

void __thiscall
ISceneViewExtension::SetupViewFamily(ISceneViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// SetupViewPoint @ 144f2afa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ISceneViewExtension::SetupViewPoint
          (ISceneViewExtension *this,APlayerController *param_1,FMinimalViewInfo *param_2)

{
  return;
}

// SetupViewProjectionMatrix @ 144f2afb0

void __thiscall
ISceneViewExtension::SetupViewProjectionMatrix
          (ISceneViewExtension *this,FSceneViewProjectionData *param_1)

{
  return;
}

// SubscribeToPostProcessingPass @ 144f301f0

void __thiscall
ISceneViewExtension::SubscribeToPostProcessingPass
          (ISceneViewExtension *this,EPostProcessingPass param_1,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2,bool param_3)

{
  return;
}

// SubscribeToPostProcessingPass @ 144f30200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ISceneViewExtension::SubscribeToPostProcessingPass
          (ISceneViewExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  return;
}

// IsActiveThisFrame @ 1454fce80

bool __thiscall
ISceneViewExtension::IsActiveThisFrame
          (ISceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001454fce83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0xb0))();
  return (bool)uVar1;
}

// PostCreateSceneRenderer @ 1454ffbf0

void __thiscall
ISceneViewExtension::PostCreateSceneRenderer
          (ISceneViewExtension *this,FSceneViewFamily *param_1,ISceneRenderer *param_2)

{
  return;
}

