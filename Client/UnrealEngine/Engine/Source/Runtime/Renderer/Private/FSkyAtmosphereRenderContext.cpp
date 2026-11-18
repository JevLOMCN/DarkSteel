// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSkyAtmosphereRenderContext @ 1456661f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSkyAtmosphereRenderContext * __thiscall
FSkyAtmosphereRenderContext::FSkyAtmosphereRenderContext(FSkyAtmosphereRenderContext *this)

{
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  FRenderTargetBindingSlots::FRenderTargetBindingSlots(&this->RenderTargets);
  (this->Viewport).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Viewport).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->LightShadowShaderParams0UniformBuffer =
       (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> *)0x0;
  this->LightShadowShaderParams1UniformBuffer =
       (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> *)0x0;
  this->VirtualShadowMapId0 = -1;
  this->VirtualShadowMapId1 = -1;
  this->bAPOnCloudMode = false;
  this->VolumetricCloudDepthTexture = (FRDGTexture *)0x0;
  this->InputCloudLuminanceTransmittanceTexture = (FRDGTexture *)0x0;
  this->MSAASampleCount = '\x01';
  this->MSAADepthTexture = (FRDGTexture *)0x0;
  return this;
}

