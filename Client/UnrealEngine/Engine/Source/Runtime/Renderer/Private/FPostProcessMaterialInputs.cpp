// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FPostProcessMaterialInputs @ 145195200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPostProcessMaterialInputs * __thiscall
FPostProcessMaterialInputs::FPostProcessMaterialInputs
          (FPostProcessMaterialInputs *this,FPostProcessMaterialInputs *param_1)

{
  undefined8 uVar1;
  
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput).LoadAction = (param_1->OverrideOutput).LoadAction;
  (this->Textures).Elements[0].TextureSRV = (param_1->Textures).Elements[0].TextureSRV;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[1].TextureSRV = (param_1->Textures).Elements[1].TextureSRV;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[2].TextureSRV = (param_1->Textures).Elements[2].TextureSRV;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[3].TextureSRV = (param_1->Textures).Elements[3].TextureSRV;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[4].TextureSRV = (param_1->Textures).Elements[4].TextureSRV;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[0].TextureSRV =
       (param_1->UserSceneTextures).Elements[0].TextureSRV;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[1].TextureSRV =
       (param_1->UserSceneTextures).Elements[1].TextureSRV;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[2].TextureSRV =
       (param_1->UserSceneTextures).Elements[2].TextureSRV;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[3].TextureSRV =
       (param_1->UserSceneTextures).Elements[3].TextureSRV;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[4].TextureSRV =
       (param_1->UserSceneTextures).Elements[4].TextureSRV;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  *(undefined4 *)(this->bUserSceneTexturesSet).Elements =
       *(undefined4 *)(param_1->bUserSceneTexturesSet).Elements;
  (this->bUserSceneTexturesSet).Elements[4] = (param_1->bUserSceneTexturesSet).Elements[4];
  (this->PathTracingTextures).Elements[0].Texture =
       (param_1->PathTracingTextures).Elements[0].Texture;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[1].Texture =
       (param_1->PathTracingTextures).Elements[1].Texture;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[2].Texture =
       (param_1->PathTracingTextures).Elements[2].Texture;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[3].Texture =
       (param_1->PathTracingTextures).Elements[3].Texture;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[4].Texture =
       (param_1->PathTracingTextures).Elements[4].Texture;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  this->OutputFormat = param_1->OutputFormat;
  this->bManualStencilTest = param_1->bManualStencilTest;
  this->CustomDepthTexture = param_1->CustomDepthTexture;
  uVar1 = *(undefined8 *)&(param_1->SceneTextures).SceneTextures.field_0x8;
  *(undefined8 *)&(this->SceneTextures).SceneTextures =
       *(undefined8 *)&(param_1->SceneTextures).SceneTextures;
  *(undefined8 *)&(this->SceneTextures).SceneTextures.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->SceneTextures).MobileSceneTextures.field_0x8;
  *(undefined8 *)&(this->SceneTextures).MobileSceneTextures =
       *(undefined8 *)&(param_1->SceneTextures).MobileSceneTextures;
  *(undefined8 *)&(this->SceneTextures).MobileSceneTextures.field_0x8 = uVar1;
  this->SceneWithoutWaterTextures = param_1->SceneWithoutWaterTextures;
  this->bAllowSceneColorInputAsOutput = param_1->bAllowSceneColorInputAsOutput;
  this->bMetalMSAAHDRDecode = param_1->bMetalMSAAHDRDecode;
  this->bUserSceneTextureOutput = param_1->bUserSceneTextureOutput;
  this->bUserSceneTextureFirstRender = param_1->bUserSceneTextureFirstRender;
  this->UserSceneTextureSceneColorInput = param_1->UserSceneTextureSceneColorInput;
  return this;
}

// FPostProcessMaterialInputs @ 145195500

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPostProcessMaterialInputs * __thiscall
FPostProcessMaterialInputs::FPostProcessMaterialInputs(FPostProcessMaterialInputs *this)

{
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput).LoadAction = ENoAction;
  (this->Textures).Elements[0].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[1].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[2].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[3].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[4].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[0].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[1].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[2].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[3].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[4].TextureSRV = (FRDGTextureSRV *)0x0;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[0].Texture = (FRDGTexture *)0x0;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[1].Texture = (FRDGTexture *)0x0;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[2].Texture = (FRDGTexture *)0x0;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[3].Texture = (FRDGTexture *)0x0;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[4].Texture = (FRDGTexture *)0x0;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  this->OutputFormat = PF_Unknown;
  this->bManualStencilTest = false;
  this->CustomDepthTexture = (FRDGTexture *)0x0;
  *(undefined8 *)&(this->SceneTextures).SceneTextures = 0;
  *(undefined8 *)&(this->SceneTextures).MobileSceneTextures = 0;
  this->SceneWithoutWaterTextures = (FSceneWithoutWaterTextures *)0x0;
  (this->SceneTextures).SceneTextures.field_0x8 = 1;
  (this->SceneTextures).MobileSceneTextures.field_0x8 = 1;
  this->bAllowSceneColorInputAsOutput = true;
  this->bMetalMSAAHDRDecode = false;
  this->bUserSceneTextureOutput = false;
  this->bUserSceneTextureFirstRender = false;
  this->UserSceneTextureSceneColorInput = 0xffffffff;
  (this->bUserSceneTexturesSet).Elements[0] = false;
  (this->bUserSceneTexturesSet).Elements[1] = false;
  (this->bUserSceneTexturesSet).Elements[2] = false;
  (this->bUserSceneTexturesSet).Elements[3] = false;
  (this->bUserSceneTexturesSet).Elements[4] = false;
  return this;
}

// operator= @ 1451963f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPostProcessMaterialInputs * __thiscall
FPostProcessMaterialInputs::operator=
          (FPostProcessMaterialInputs *this,FPostProcessMaterialInputs *param_1)

{
  undefined8 uVar1;
  
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput)._padding_ = (param_1->OverrideOutput)._padding_;
  (this->OverrideOutput).LoadAction = (param_1->OverrideOutput).LoadAction;
  (this->Textures).Elements[0].TextureSRV = (param_1->Textures).Elements[0].TextureSRV;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[1].TextureSRV = (param_1->Textures).Elements[1].TextureSRV;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[2].TextureSRV = (param_1->Textures).Elements[2].TextureSRV;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[3].TextureSRV = (param_1->Textures).Elements[3].TextureSRV;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Textures).Elements[4].TextureSRV = (param_1->Textures).Elements[4].TextureSRV;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Textures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Textures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Textures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[0].TextureSRV =
       (param_1->UserSceneTextures).Elements[0].TextureSRV;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[1].TextureSRV =
       (param_1->UserSceneTextures).Elements[1].TextureSRV;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[2].TextureSRV =
       (param_1->UserSceneTextures).Elements[2].TextureSRV;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[3].TextureSRV =
       (param_1->UserSceneTextures).Elements[3].TextureSRV;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->UserSceneTextures).Elements[4].TextureSRV =
       (param_1->UserSceneTextures).Elements[4].TextureSRV;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->UserSceneTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  *(undefined4 *)(this->bUserSceneTexturesSet).Elements =
       *(undefined4 *)(param_1->bUserSceneTexturesSet).Elements;
  (this->bUserSceneTexturesSet).Elements[4] = (param_1->bUserSceneTexturesSet).Elements[4];
  (this->PathTracingTextures).Elements[0].Texture =
       (param_1->PathTracingTextures).Elements[0].Texture;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[1].Texture =
       (param_1->PathTracingTextures).Elements[1].Texture;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[1].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[2].Texture =
       (param_1->PathTracingTextures).Elements[2].Texture;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[2].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[3].Texture =
       (param_1->PathTracingTextures).Elements[3].Texture;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[3].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->PathTracingTextures).Elements[4].Texture =
       (param_1->PathTracingTextures).Elements[4].Texture;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->PathTracingTextures).Elements[4].ViewRect.field0_0x0._s_0.Max.field0_0x0;
  this->OutputFormat = param_1->OutputFormat;
  this->bManualStencilTest = param_1->bManualStencilTest;
  this->CustomDepthTexture = param_1->CustomDepthTexture;
  uVar1 = *(undefined8 *)&(param_1->SceneTextures).SceneTextures.field_0x8;
  *(undefined8 *)&(this->SceneTextures).SceneTextures =
       *(undefined8 *)&(param_1->SceneTextures).SceneTextures;
  *(undefined8 *)&(this->SceneTextures).SceneTextures.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->SceneTextures).MobileSceneTextures.field_0x8;
  *(undefined8 *)&(this->SceneTextures).MobileSceneTextures =
       *(undefined8 *)&(param_1->SceneTextures).MobileSceneTextures;
  *(undefined8 *)&(this->SceneTextures).MobileSceneTextures.field_0x8 = uVar1;
  this->SceneWithoutWaterTextures = param_1->SceneWithoutWaterTextures;
  this->bAllowSceneColorInputAsOutput = param_1->bAllowSceneColorInputAsOutput;
  this->bMetalMSAAHDRDecode = param_1->bMetalMSAAHDRDecode;
  this->bUserSceneTextureOutput = param_1->bUserSceneTextureOutput;
  this->bUserSceneTextureFirstRender = param_1->bUserSceneTextureFirstRender;
  this->UserSceneTextureSceneColorInput = param_1->UserSceneTextureSceneColorInput;
  return this;
}

// ReturnUntouchedSceneColorForPostProcessing @ 1451e31f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
FPostProcessMaterialInputs::ReturnUntouchedSceneColorForPostProcessing
          (FPostProcessMaterialInputs *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  bool bVar2;
  FScreenPassViewInfo local_58;
  FScreenPassTexture local_48;
  FScreenPassRenderTarget local_30;
  
  local_48.Texture = (FRDGTexture *)(this->OverrideOutput)._padding_;
  if ((local_48.Texture == (FRDGTexture *)0x0) ||
     ((((int)(this->OverrideOutput)._padding_ == (int)(this->OverrideOutput)._padding_ &&
       (*(int *)((longlong)&(this->OverrideOutput)._padding_ + 4) ==
        *(int *)((longlong)&(this->OverrideOutput)._padding_ + 4))) ||
      (pFVar1 = (FRDGTexture *)(this->Textures).Elements[0].TextureSRV,
      ((local_48.Texture)->Desc).field_0x33 == (((FRDGTexture *)pFVar1->_padding_)->Desc).field_0x33
      )))) {
    local_48.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(this->OverrideOutput)._padding_;
    local_48.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(this->OverrideOutput)._padding_;
    FScreenPassTexture::CopyFromSlice
              (__return_storage_ptr__,param_1,(this->Textures).Elements,&local_48);
  }
  else {
    local_30._padding_ = (this->OverrideOutput)._padding_;
    local_30._padding_ = (this->OverrideOutput)._padding_;
    local_30.LoadAction = (this->OverrideOutput).LoadAction;
    local_48.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_48.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(this->Textures).Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
    local_58.StereoViewIndex = -1;
    local_58.FeatureLevel = GMaxRHIFeatureLevel;
    local_58.InstanceCount = 1;
    local_30._padding_ = (longlong)local_48.Texture;
    local_48.Texture = pFVar1;
    bVar2 = IsHMDHiddenAreaMaskActive();
    local_58.bHMDHiddenAreaMaskActive = bVar2;
    AddDrawTexturePass(param_1,&local_58,(FScreenPassTextureSlice *)&local_48,&local_30);
    __return_storage_ptr__->Texture = (FRDGTexture *)(this->OverrideOutput)._padding_;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>_u_0)(this->OverrideOutput)._padding_;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)(this->OverrideOutput)._padding_;
  }
  return __return_storage_ptr__;
}

// Validate @ 1451e6f70

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FPostProcessMaterialInputs::Validate(FPostProcessMaterialInputs *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->Textures).Elements[0].TextureSRV == (FRDGTextureSRV *)0x0) ||
     ((*(int *)((longlong)&(this->Textures).Elements[0].ViewRect.field0_0x0 + 8) ==
       *(int *)&(this->Textures).Elements[0].ViewRect.field0_0x0 &&
      (*(int *)((longlong)&(this->Textures).Elements[0].ViewRect.field0_0x0 + 0xc) ==
       *(int *)((longlong)&(this->Textures).Elements[0].ViewRect.field0_0x0 + 4))))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Textures[(int32)Input].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                       ,0x73,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->OutputFormat != PF_Unknown) {
    if ((this->OverrideOutput)._padding_ == 0) goto LAB_1451e7020;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverrideOutput.Texture == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->OverrideOutput)._padding_ != 0) && (this->OutputFormat != PF_Unknown)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputFormat == PF_Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_1451e7020:
  if ((*(longlong *)&(this->SceneTextures).SceneTextures == 0) &&
     (*(longlong *)&(this->SceneTextures).MobileSceneTextures == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneTextures.SceneTextures || SceneTextures.MobileSceneTextures",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PostProcess\\PostProcessMaterialInputs.h"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

