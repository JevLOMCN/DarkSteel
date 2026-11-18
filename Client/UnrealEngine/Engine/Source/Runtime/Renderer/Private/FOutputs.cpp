// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FOutputs @ 145195120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOutputs * __thiscall FDefaultTemporalUpscaler::FOutputs::FOutputs(FOutputs *this)

{
  (this->FullRes).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HalfRes).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->QuarterRes).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->EighthRes).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.Texture = (FRDGTexture *)0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.Texture = (FRDGTexture *)0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  return this;
}

// operator= @ 145196290

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOutputs * __thiscall
FDefaultTemporalUpscaler::FOutputs::operator=(FOutputs *this,FOutputs *param_1)

{
  (this->FullRes).TextureSRV = (param_1->FullRes).TextureSRV;
  (this->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->HalfRes).TextureSRV = (param_1->HalfRes).TextureSRV;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->HalfRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->HalfRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->QuarterRes).TextureSRV = (param_1->QuarterRes).TextureSRV;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->QuarterRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->QuarterRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->EighthRes).TextureSRV = (param_1->EighthRes).TextureSRV;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->EighthRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->EighthRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.Texture =
       (param_1->VelocityFlattenTextures).VelocityFlatten.Texture;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.Texture =
       (param_1->VelocityFlattenTextures).VelocityTileArray.Texture;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator= @ 145196340

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOutputs * __thiscall
FDefaultTemporalUpscaler::FOutputs::operator=(FOutputs *this,FOutputs *param_1)

{
  (this->FullRes).TextureSRV = (param_1->FullRes).TextureSRV;
  (this->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->HalfRes).TextureSRV = (param_1->HalfRes).TextureSRV;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->HalfRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->HalfRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->HalfRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->QuarterRes).TextureSRV = (param_1->QuarterRes).TextureSRV;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->QuarterRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->QuarterRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->QuarterRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->EighthRes).TextureSRV = (param_1->EighthRes).TextureSRV;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->EighthRes).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->EighthRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->EighthRes).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.Texture =
       (param_1->VelocityFlattenTextures).VelocityFlatten.Texture;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityFlatten.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.Texture =
       (param_1->VelocityFlattenTextures).VelocityTileArray.Texture;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityFlattenTextures).VelocityTileArray.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  return this;
}

