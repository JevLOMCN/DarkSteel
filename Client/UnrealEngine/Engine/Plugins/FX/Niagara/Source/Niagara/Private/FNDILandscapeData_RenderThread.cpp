// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FNDILandscapeData_RenderThread @ 1491690d0

FNDILandscapeData_RenderThread * __thiscall
FNDILandscapeData_RenderThread::FNDILandscapeData_RenderThread
          (FNDILandscapeData_RenderThread *this,FNDILandscapeData_RenderThread *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->BaseColorVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->BaseColorVirtualPage).PageTableRef.Reference =
       (param_1->BaseColorVirtualPage).PageTableRef.Reference;
  (param_1->BaseColorVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
  *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 =
       *(undefined8 *)&(param_1->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 + 8) =
       uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
  *(undefined8 *)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 =
       *(undefined8 *)&(param_1->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 + 8) =
       uVar1;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
  (this->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
  (this->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W;
  (this->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
  (this->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
  (this->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
  (this->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W;
  (this->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
  (this->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
  (this->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
  (this->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W;
  (this->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
  (this->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y;
  (this->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X;
  (this->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W;
  (this->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z =
       (param_1->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z;
  (this->BaseColorVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W = dVar2;
  (this->BaseColorVirtualPage).AllocatedTexture = (param_1->BaseColorVirtualPage).AllocatedTexture;
  (this->BaseColorVirtualPage).SizeInPages.field0_0x0 =
       (param_1->BaseColorVirtualPage).SizeInPages.field0_0x0;
  (this->BaseColorVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BaseColorVirtualLayer).TextureSRV.Reference =
       (param_1->BaseColorVirtualLayer).TextureSRV.Reference;
  (param_1->BaseColorVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->BaseColorVirtualLayer).TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0 =
       *(undefined8 *)&(param_1->BaseColorVirtualLayer).TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&(this->BaseColorVirtualLayer).TextureUniforms.field0_0x0 + 8) = uVar1;
  (this->HeightVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->HeightVirtualPage).PageTableRef.Reference =
       (param_1->HeightVirtualPage).PageTableRef.Reference;
  (param_1->HeightVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->HeightVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
  *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0 =
       *(undefined8 *)&(param_1->HeightVirtualPage).PageTableUniforms[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->HeightVirtualPage).PageTableUniforms[0].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->HeightVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
  *(undefined8 *)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0 =
       *(undefined8 *)&(param_1->HeightVirtualPage).PageTableUniforms[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->HeightVirtualPage).PageTableUniforms[1].field0_0x0 + 8) = uVar1;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
  (this->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X =
       (param_1->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
  (this->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W;
  (this->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z =
       (param_1->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
  (this->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
  (this->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X =
       (param_1->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
  (this->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W;
  (this->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z =
       (param_1->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
  (this->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
  (this->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X =
       (param_1->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
  (this->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W;
  (this->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z =
       (param_1->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
  (this->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y;
  (this->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X =
       (param_1->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X;
  (this->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W;
  (this->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z =
       (param_1->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z;
  (this->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W = dVar2;
  (this->HeightVirtualPage).AllocatedTexture = (param_1->HeightVirtualPage).AllocatedTexture;
  (this->HeightVirtualPage).SizeInPages.field0_0x0 =
       (param_1->HeightVirtualPage).SizeInPages.field0_0x0;
  (this->HeightVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->HeightVirtualLayer).TextureSRV.Reference =
       (param_1->HeightVirtualLayer).TextureSRV.Reference;
  (param_1->HeightVirtualLayer).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HeightVirtualLayer).TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0 =
       *(undefined8 *)&(param_1->HeightVirtualLayer).TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&(this->HeightVirtualLayer).TextureUniforms.field0_0x0 + 8) = uVar1;
  (this->NormalVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  (this->NormalVirtualPage).PageTableRef.Reference =
       (param_1->NormalVirtualPage).PageTableRef.Reference;
  (param_1->NormalVirtualPage).PageTableRef.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->NormalVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
  *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0 =
       *(undefined8 *)&(param_1->NormalVirtualPage).PageTableUniforms[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalVirtualPage).PageTableUniforms[0].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->NormalVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
  *(undefined8 *)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0 =
       *(undefined8 *)&(param_1->NormalVirtualPage).PageTableUniforms[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalVirtualPage).PageTableUniforms[1].field0_0x0 + 8) = uVar1;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
  (this->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X =
       (param_1->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
  (this->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W;
  (this->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z =
       (param_1->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
  (this->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
  (this->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X =
       (param_1->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
  (this->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W;
  (this->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z =
       (param_1->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
  (this->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
  (this->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X =
       (param_1->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
  (this->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W;
  (this->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z =
       (param_1->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
  (this->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y;
  (this->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X =
       (param_1->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X;
  (this->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W;
  (this->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z =
       (param_1->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z;
  (this->NormalVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.W = dVar2;
  (this->NormalVirtualPage).AllocatedTexture = (param_1->NormalVirtualPage).AllocatedTexture;
  (this->NormalVirtualPage).SizeInPages.field0_0x0 =
       (param_1->NormalVirtualPage).SizeInPages.field0_0x0;
  (this->NormalVirtualLayer0).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NormalVirtualLayer0).TextureSRV.Reference =
       (param_1->NormalVirtualLayer0).TextureSRV.Reference;
  (param_1->NormalVirtualLayer0).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->NormalVirtualLayer0).TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0 =
       *(undefined8 *)&(param_1->NormalVirtualLayer0).TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalVirtualLayer0).TextureUniforms.field0_0x0 + 8) = uVar1;
  (this->NormalVirtualLayer1).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NormalVirtualLayer1).TextureSRV.Reference =
       (param_1->NormalVirtualLayer1).TextureSRV.Reference;
  (param_1->NormalVirtualLayer1).TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->NormalVirtualLayer1).TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0 =
       *(undefined8 *)&(param_1->NormalVirtualLayer1).TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&(this->NormalVirtualLayer1).TextureUniforms.field0_0x0 + 8) = uVar1;
  this->NormalUnpackMode = param_1->NormalUnpackMode;
  (this->LandscapeData).TextureResources = (param_1->LandscapeData).TextureResources;
  *(undefined8 *)&(this->LandscapeData).CachedHeightTextureLWCTile.field0_0x0 =
       *(undefined8 *)&(param_1->LandscapeData).CachedHeightTextureLWCTile.field0_0x0;
  (this->LandscapeData).CachedHeightTextureLWCTile.field0_0x0._s_0.Z =
       (param_1->LandscapeData).CachedHeightTextureLWCTile.field0_0x0._s_0.Z;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][1];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][0] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][0];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][3];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][2] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][2];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][1];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][0] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][0];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][3];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][2] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][2];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][1];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][0] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][0];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][3];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][2] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][2];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][1];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][0] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][0];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][3];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][2] =
       (param_1->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][2];
  (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][1];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][0] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][0];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][3];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][2] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][2];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][1];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][0] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][0];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][3];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][2] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][2];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][1];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][0] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][0];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][3];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][2] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][2];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][1];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][0] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][0];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][1] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][3];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][2] =
       (param_1->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][2];
  (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][3] = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Y;
  (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.X =
       (param_1->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.X;
  (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.W;
  (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Z =
       (param_1->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Z;
  (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.W = dVar2;
  dVar2 = (param_1->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.Y;
  (this->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.X =
       (param_1->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.X;
  (this->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.Y = dVar2;
  (this->LandscapeData).RegionRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeData).RegionRequests.AllocatorInstance.Data =
       (param_1->LandscapeData).RegionRequests.AllocatorInstance.Data;
  (param_1->LandscapeData).RegionRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeData).RegionRequests.ArrayNum = (param_1->LandscapeData).RegionRequests.ArrayNum;
  (this->LandscapeData).RegionRequests.ArrayMax = (param_1->LandscapeData).RegionRequests.ArrayMax;
  (param_1->LandscapeData).RegionRequests.ArrayNum = 0;
  (param_1->LandscapeData).RegionRequests.ArrayMax = 0;
  (this->LandscapeData).BaseColorVirtualTextureUnpackType =
       (param_1->LandscapeData).BaseColorVirtualTextureUnpackType;
  return this;
}

// ~FNDILandscapeData_RenderThread @ 14916b050

void __thiscall
FNDILandscapeData_RenderThread::~FNDILandscapeData_RenderThread
          (FNDILandscapeData_RenderThread *this)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FRHITexture *pFVar3;
  
  pFVar1 = (this->LandscapeData).RegionRequests.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->NormalVirtualLayer1).TextureSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = (this->NormalVirtualLayer0).TextureSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->NormalVirtualPage).PageTableRef.Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->HeightVirtualLayer).TextureSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->HeightVirtualPage).PageTableRef.Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->BaseColorVirtualLayer).TextureSRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->BaseColorVirtualPage).PageTableRef.Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
    return;
  }
  return;
}

// SetCachedHeightTextureParameters @ 14918c450

bool __thiscall
FNDILandscapeData_RenderThread::SetCachedHeightTextureParameters
          (FNDILandscapeData_RenderThread *this,FShaderParameters *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FLandscapeTextureResource *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TIntPoint<int>_u_0 TVar17;
  FRHITexture *pFVar18;
  FRHITexture *pFVar19;
  bool bVar20;
  undefined8 local_28;
  
  pFVar4 = (this->LandscapeData).TextureResources;
  if (pFVar4 != (FLandscapeTextureResource *)0x0) {
    pFVar19 = (pFVar4->HeightTexture).Buffer.Reference;
    pFVar18 = (pFVar4->PhysMatTexture).Buffer.Reference;
    if ((pFVar19 != (FRHITexture *)0x0) || (pFVar18 != (FRHITexture *)0x0)) {
      TVar17 = (pFVar4->CellCount).field0_0x0;
      *(undefined8 *)&(param_1->CachedHeightTextureLWCTile).field0_0x0 =
           *(undefined8 *)&(this->LandscapeData).CachedHeightTextureLWCTile.field0_0x0;
      (param_1->CachedHeightTextureLWCTile).field0_0x0._s_0.Z =
           (this->LandscapeData).CachedHeightTextureLWCTile.field0_0x0._s_0.Z;
      dVar1 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][2];
      dVar2 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][3];
      dVar3 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][0];
      dVar5 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[1][1];
      dVar6 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][2];
      dVar7 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][3];
      dVar8 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][0];
      dVar9 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[2][1];
      dVar10 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][0];
      dVar11 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][1];
      dVar12 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][2];
      dVar13 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[3][3];
      dVar14 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][1];
      dVar15 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][2];
      dVar16 = (this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][3];
      (param_1->CachedHeightTextureWorldToUvTransform).M[0][0] =
           (float)(this->LandscapeData).CachedHeightTextureWorldToUvTransform.M[0][0];
      (param_1->CachedHeightTextureWorldToUvTransform).M[0][1] = (float)dVar14;
      (param_1->CachedHeightTextureWorldToUvTransform).M[0][2] = (float)dVar15;
      (param_1->CachedHeightTextureWorldToUvTransform).M[0][3] = (float)dVar16;
      (param_1->CachedHeightTextureWorldToUvTransform).M[1][0] = (float)dVar3;
      (param_1->CachedHeightTextureWorldToUvTransform).M[1][1] = (float)dVar5;
      (param_1->CachedHeightTextureWorldToUvTransform).M[1][2] = (float)dVar1;
      (param_1->CachedHeightTextureWorldToUvTransform).M[1][3] = (float)dVar2;
      (param_1->CachedHeightTextureWorldToUvTransform).M[2][0] = (float)dVar8;
      (param_1->CachedHeightTextureWorldToUvTransform).M[2][1] = (float)dVar9;
      (param_1->CachedHeightTextureWorldToUvTransform).M[2][2] = (float)dVar6;
      (param_1->CachedHeightTextureWorldToUvTransform).M[2][3] = (float)dVar7;
      (param_1->CachedHeightTextureWorldToUvTransform).M[3][0] = (float)dVar10;
      (param_1->CachedHeightTextureWorldToUvTransform).M[3][1] = (float)dVar11;
      (param_1->CachedHeightTextureWorldToUvTransform).M[3][2] = (float)dVar12;
      (param_1->CachedHeightTextureWorldToUvTransform).M[3][3] = (float)dVar13;
      dVar1 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][2];
      dVar2 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][3];
      dVar3 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][0];
      dVar5 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[1][1];
      dVar6 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][2];
      dVar7 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][3];
      dVar8 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][0];
      dVar9 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[2][1];
      dVar10 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][2];
      dVar11 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][3];
      dVar12 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][0];
      dVar13 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[3][1];
      dVar14 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][2];
      dVar15 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][3];
      dVar16 = (this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][1];
      (param_1->CachedHeightTextureUvToWorldTransform).M[0][0] =
           (float)(this->LandscapeData).CachedHeightTextureUvToWorldTransform.M[0][0];
      (param_1->CachedHeightTextureUvToWorldTransform).M[0][1] = (float)dVar16;
      (param_1->CachedHeightTextureUvToWorldTransform).M[0][2] = (float)dVar14;
      (param_1->CachedHeightTextureUvToWorldTransform).M[0][3] = (float)dVar15;
      (param_1->CachedHeightTextureUvToWorldTransform).M[1][0] = (float)dVar3;
      (param_1->CachedHeightTextureUvToWorldTransform).M[1][1] = (float)dVar5;
      (param_1->CachedHeightTextureUvToWorldTransform).M[1][2] = (float)dVar1;
      (param_1->CachedHeightTextureUvToWorldTransform).M[1][3] = (float)dVar2;
      (param_1->CachedHeightTextureUvToWorldTransform).M[2][0] = (float)dVar8;
      (param_1->CachedHeightTextureUvToWorldTransform).M[2][1] = (float)dVar9;
      (param_1->CachedHeightTextureUvToWorldTransform).M[2][2] = (float)dVar6;
      (param_1->CachedHeightTextureUvToWorldTransform).M[2][3] = (float)dVar7;
      (param_1->CachedHeightTextureUvToWorldTransform).M[3][0] = (float)dVar12;
      (param_1->CachedHeightTextureUvToWorldTransform).M[3][1] = (float)dVar13;
      (param_1->CachedHeightTextureUvToWorldTransform).M[3][2] = (float)dVar10;
      (param_1->CachedHeightTextureUvToWorldTransform).M[3][3] = (float)dVar11;
      dVar1 = (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Y;
      dVar2 = (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.Z;
      dVar3 = (this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.W;
      (param_1->CachedHeightTextureUvScaleBias).field0_0x0._s_0.X =
           (float)(this->LandscapeData).CachedHeightTextureUvScaleBias.field0_0x0._s_0.X;
      (param_1->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Y = (float)dVar1;
      (param_1->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Z = (float)dVar2;
      (param_1->CachedHeightTextureUvScaleBias).field0_0x0._s_0.W = (float)dVar3;
      local_28._4_4_ =
           (float)(this->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.Y;
      local_28._0_4_ =
           (float)(this->LandscapeData).CachedHeightTextureWorldGridSize.field0_0x0._s_0.X;
      (param_1->CachedHeightTextureWorldGridSize).field0_0x0 = local_28;
      bVar20 = pFVar19 == (FRHITexture *)0x0;
      if (bVar20) {
        pFVar19 = (GBlackTexture->TextureRHI).Reference;
        (param_1->CachedHeightTextureDimension).field0_0x0 = (TIntPoint<int>_u_0)0x0;
      }
      else {
        (param_1->CachedHeightTextureDimension).field0_0x0 = TVar17;
      }
      param_1->CachedHeightTexture = pFVar19;
      param_1->CachedHeightTextureEnabled = (uint)!bVar20;
      if (pFVar18 == (FRHITexture *)0x0) {
        pFVar18 = (GBlackUintTexture->TextureRHI).Reference;
        TVar17 = (TIntPoint<int>_u_0)0x0;
      }
      (param_1->CachedPhysMatTextureDimension).field0_0x0 = TVar17;
      param_1->CachedPhysMatTexture = pFVar18;
      return true;
    }
  }
  return false;
}

