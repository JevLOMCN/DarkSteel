// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRenderPageBatchDesc @ 1458cbc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRenderPageBatchDesc * __thiscall
RuntimeVirtualTexture::FRenderPageBatchDesc::FRenderPageBatchDesc(FRenderPageBatchDesc *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->UVToWorld).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->UVToWorld).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->UVToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->UVToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->UVToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->UVToWorld).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->UVToWorld).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->UVToWorld).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->UVToWorld).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->UVToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->UVToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->UVToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->WorldBounds).IsValid = '\0';
  *(undefined8 *)&(this->CustomMaterialData).field0_0x0 = 0;
  (this->CustomMaterialData).field0_0x0._s_0.Z = 0.0;
  (this->CustomMaterialData).field0_0x0._s_0.W = 1.0;
  this->Targets[0].PooledRenderTarget = (IPooledRenderTarget *)0x0;
  this->Targets[0].Texture = (FRHITexture *)0x0;
  this->Targets[0].TextureAccessBefore = SRVMask;
  this->Targets[0].TextureAccessAfter = SRVMask;
  this->Targets[1].PooledRenderTarget = (IPooledRenderTarget *)0x0;
  this->Targets[1].Texture = (FRHITexture *)0x0;
  this->Targets[1].TextureAccessBefore = SRVMask;
  this->Targets[1].TextureAccessAfter = SRVMask;
  this->Targets[2].PooledRenderTarget = (IPooledRenderTarget *)0x0;
  this->Targets[2].Texture = (FRHITexture *)0x0;
  this->Targets[2].TextureAccessBefore = SRVMask;
  this->Targets[2].TextureAccessAfter = SRVMask;
  _vector_constructor_iterator_
            (this->PageDescs[0].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[1].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[2].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[3].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[4].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[5].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[6].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  _vector_constructor_iterator_
            (this->PageDescs[7].DestRect,0x10,3,UE::Math::TIntRect<int>::TIntRect<int>);
  return this;
}

// operator= @ 1458d1bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRenderPageBatchDesc * __thiscall
RuntimeVirtualTexture::FRenderPageBatchDesc::operator=
          (FRenderPageBatchDesc *this,FRenderPageBatchDesc *param_1)

{
  FRenderPageDesc *pFVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  FRHITexture *pFVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  ERHIAccess EVar13;
  FRenderPageDesc *pFVar14;
  longlong lVar15;
  longlong lVar16;
  
  this->SceneRenderer = param_1->SceneRenderer;
  lVar16 = 8;
  this->Scene = param_1->Scene;
  this->RuntimeVirtualTextureId = param_1->RuntimeVirtualTextureId;
  this->RuntimeVirtualTextureMask = param_1->RuntimeVirtualTextureMask;
  dVar3 = (param_1->UVToWorld).Rotation.XY.m128d_f64[1];
  (this->UVToWorld).Rotation.XY.m128d_f64[0] = (param_1->UVToWorld).Rotation.XY.m128d_f64[0];
  (this->UVToWorld).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->UVToWorld).Rotation.ZW.m128d_f64[1];
  (this->UVToWorld).Rotation.ZW.m128d_f64[0] = (param_1->UVToWorld).Rotation.ZW.m128d_f64[0];
  (this->UVToWorld).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->UVToWorld).Translation.XY.m128d_f64[1];
  (this->UVToWorld).Translation.XY.m128d_f64[0] = (param_1->UVToWorld).Translation.XY.m128d_f64[0];
  (this->UVToWorld).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->UVToWorld).Translation.ZW.m128d_f64[1];
  (this->UVToWorld).Translation.ZW.m128d_f64[0] = (param_1->UVToWorld).Translation.ZW.m128d_f64[0];
  (this->UVToWorld).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->UVToWorld).Scale3D.XY.m128d_f64[1];
  (this->UVToWorld).Scale3D.XY.m128d_f64[0] = (param_1->UVToWorld).Scale3D.XY.m128d_f64[0];
  (this->UVToWorld).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->UVToWorld).Scale3D.ZW.m128d_f64[1];
  (this->UVToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->UVToWorld).Scale3D.ZW.m128d_f64[0];
  (this->UVToWorld).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar6 = (param_1->WorldBounds).Pad[0];
  uVar7 = (param_1->WorldBounds).Pad[1];
  uVar8 = (param_1->WorldBounds).Pad[2];
  uVar9 = (param_1->WorldBounds).Pad[3];
  uVar10 = (param_1->WorldBounds).Pad[4];
  uVar11 = (param_1->WorldBounds).Pad[5];
  uVar12 = (param_1->WorldBounds).Pad[6];
  (this->WorldBounds).IsValid = (param_1->WorldBounds).IsValid;
  (this->WorldBounds).Pad[0] = uVar6;
  (this->WorldBounds).Pad[1] = uVar7;
  (this->WorldBounds).Pad[2] = uVar8;
  (this->WorldBounds).Pad[3] = uVar9;
  (this->WorldBounds).Pad[4] = uVar10;
  (this->WorldBounds).Pad[5] = uVar11;
  (this->WorldBounds).Pad[6] = uVar12;
  this->MaterialType = param_1->MaterialType;
  this->MaxLevel = param_1->MaxLevel;
  this->bClearTextures = param_1->bClearTextures;
  this->bIsThumbnails = param_1->bIsThumbnails;
  uVar4 = *(undefined8 *)((longlong)&(param_1->FixedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->FixedColor).field0_0x0 = *(undefined8 *)&(param_1->FixedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->FixedColor).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->CustomMaterialData).field0_0x0 + 8);
  *(undefined8 *)&(this->CustomMaterialData).field0_0x0 =
       *(undefined8 *)&(param_1->CustomMaterialData).field0_0x0;
  *(undefined8 *)((longlong)&(this->CustomMaterialData).field0_0x0 + 8) = uVar4;
  pFVar5 = param_1->Targets[0].Texture;
  this->Targets[0].PooledRenderTarget = param_1->Targets[0].PooledRenderTarget;
  this->Targets[0].Texture = pFVar5;
  EVar13 = param_1->Targets[0].TextureAccessAfter;
  this->Targets[0].TextureAccessBefore = param_1->Targets[0].TextureAccessBefore;
  this->Targets[0].TextureAccessAfter = EVar13;
  pFVar5 = param_1->Targets[1].Texture;
  this->Targets[1].PooledRenderTarget = param_1->Targets[1].PooledRenderTarget;
  this->Targets[1].Texture = pFVar5;
  EVar13 = param_1->Targets[1].TextureAccessAfter;
  this->Targets[1].TextureAccessBefore = param_1->Targets[1].TextureAccessBefore;
  this->Targets[1].TextureAccessAfter = EVar13;
  pFVar5 = param_1->Targets[2].Texture;
  this->Targets[2].PooledRenderTarget = param_1->Targets[2].PooledRenderTarget;
  this->Targets[2].Texture = pFVar5;
  EVar13 = param_1->Targets[2].TextureAccessAfter;
  this->Targets[2].TextureAccessBefore = param_1->Targets[2].TextureAccessBefore;
  this->Targets[2].TextureAccessAfter = EVar13;
  lVar15 = (longlong)param_1 - (longlong)this;
  this->NumPageDescs = param_1->NumPageDescs;
  pFVar14 = this->PageDescs;
  do {
    pFVar14->vLevel = *(uchar *)(lVar15 + (longlong)pFVar14);
    pdVar2 = (double *)(lVar15 + 8 + (longlong)pFVar14);
    dVar3 = pdVar2[1];
    pFVar1 = pFVar14 + 1;
    (pFVar14->UVRange).Min.field0_0x0._s_0.X = *pdVar2;
    (pFVar14->UVRange).Min.field0_0x0._s_0.Y = dVar3;
    pdVar2 = (double *)(lVar15 + -0xc0 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    (pFVar14->UVRange).Max.field0_0x0._s_0.X = *pdVar2;
    (pFVar14->UVRange).Max.field0_0x0._s_0.Y = dVar3;
    *(undefined8 *)&(pFVar14->UVRange).bIsValid = *(undefined8 *)(lVar15 + -0xb0 + (longlong)pFVar1)
    ;
    pFVar14->DestRect[0].field0_0x0._s_0.Min.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0xa8 + (longlong)pFVar1);
    pFVar14->DestRect[0].field0_0x0._s_0.Max.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0xa0 + (longlong)pFVar1);
    pFVar14->DestRect[1].field0_0x0._s_0.Min.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0x98 + (longlong)pFVar1);
    pFVar14->DestRect[1].field0_0x0._s_0.Max.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0x90 + (longlong)pFVar1);
    pFVar14->DestRect[2].field0_0x0._s_0.Min.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0x88 + (longlong)pFVar1);
    pFVar14->DestRect[2].field0_0x0._s_0.Max.field0_0x0 =
         *(TIntPoint<int>_u_0 *)(lVar15 + -0x80 + (longlong)pFVar1);
    pdVar2 = (double *)(lVar15 + -0x78 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[0].Min.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[0].Min.field0_0x0._s_0.Y = dVar3;
    pdVar2 = (double *)(lVar15 + -0x68 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[0].Max.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[0].Max.field0_0x0._s_0.Y = dVar3;
    *(undefined8 *)&pFVar14->DestBox[0].bIsValid =
         *(undefined8 *)(lVar15 + -0x58 + (longlong)pFVar1);
    pdVar2 = (double *)(lVar15 + -0x50 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[1].Min.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[1].Min.field0_0x0._s_0.Y = dVar3;
    pdVar2 = (double *)(lVar15 + -0x40 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[1].Max.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[1].Max.field0_0x0._s_0.Y = dVar3;
    *(undefined8 *)&pFVar14->DestBox[1].bIsValid =
         *(undefined8 *)(lVar15 + -0x30 + (longlong)pFVar1);
    pdVar2 = (double *)(lVar15 + -0x28 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[2].Min.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[2].Min.field0_0x0._s_0.Y = dVar3;
    pdVar2 = (double *)(lVar15 + -0x18 + (longlong)pFVar1);
    dVar3 = pdVar2[1];
    pFVar14->DestBox[2].Max.field0_0x0._s_0.X = *pdVar2;
    pFVar14->DestBox[2].Max.field0_0x0._s_0.Y = dVar3;
    *(undefined8 *)&pFVar14->DestBox[2].bIsValid = *(undefined8 *)(lVar15 + -8 + (longlong)pFVar1);
    lVar16 = lVar16 + -1;
    pFVar14 = pFVar1;
  } while (lVar16 != 0);
  return this;
}

