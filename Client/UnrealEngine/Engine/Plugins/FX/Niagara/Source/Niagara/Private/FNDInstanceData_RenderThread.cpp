// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNDInstanceData_RenderThread @ 148ea3620

FNDInstanceData_RenderThread * __thiscall
NDISceneCapture2DLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
          (FNDInstanceData_RenderThread *this,FNDInstanceData_RenderThread *param_1)

{
  undefined8 uVar1;
  FRHITextureReference *pFVar2;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x58;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&this->field_0x58 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x68;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  *(undefined8 *)&this->field_0x68 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x78;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined8 *)&this->field_0x78 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x88;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x80;
  *(undefined8 *)&this->field_0x88 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x98;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_1->field_0x90;
  *(undefined8 *)&this->field_0x98 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xa8;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  *(undefined8 *)&this->field_0xa8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xb8;
  *(undefined8 *)&this->field_0xb0 = *(undefined8 *)&param_1->field_0xb0;
  *(undefined8 *)&this->field_0xb8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xc8;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&this->field_0xc8 = uVar1;
  pFVar2 = (param_1->TextureReferenceRHI).Reference;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  (this->TextureReferenceRHI).Reference = pFVar2;
  (this->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
  (this->TextureReferenceRHI).Reference = (param_1->TextureReferenceRHI).Reference;
  (param_1->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
  (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->SamplerStateRHI).Reference = (param_1->SamplerStateRHI).Reference;
  (param_1->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  return this;
}

// FNDInstanceData_RenderThread @ 148f803b0

FNDInstanceData_RenderThread * __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
          (FNDInstanceData_RenderThread *this,FNDInstanceData_RenderThread *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  this->LayerTexture[0].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[0].Texture.Reference = param_1->LayerTexture[0].Texture.Reference;
  param_1->LayerTexture[0].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[0].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[0].TextureSRV.Reference = param_1->LayerTexture[0].TextureSRV.Reference;
  param_1->LayerTexture[0].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[0].PageTable.Reference = (FRHITexture *)0x0;
  this->LayerTexture[0].PageTable.Reference = param_1->LayerTexture[0].PageTable.Reference;
  param_1->LayerTexture[0].PageTable.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerTexture[0].TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&this->LayerTexture[0].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[0].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[0].TextureUniforms.field0_0x0 + 8) = uVar1;
  this->LayerTexture[1].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[1].Texture.Reference = param_1->LayerTexture[1].Texture.Reference;
  param_1->LayerTexture[1].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[1].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[1].TextureSRV.Reference = param_1->LayerTexture[1].TextureSRV.Reference;
  param_1->LayerTexture[1].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[1].PageTable.Reference = (FRHITexture *)0x0;
  this->LayerTexture[1].PageTable.Reference = param_1->LayerTexture[1].PageTable.Reference;
  param_1->LayerTexture[1].PageTable.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerTexture[1].TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&this->LayerTexture[1].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[1].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[1].TextureUniforms.field0_0x0 + 8) = uVar1;
  this->LayerTexture[2].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[2].Texture.Reference = param_1->LayerTexture[2].Texture.Reference;
  param_1->LayerTexture[2].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[2].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[2].TextureSRV.Reference = param_1->LayerTexture[2].TextureSRV.Reference;
  param_1->LayerTexture[2].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[2].PageTable.Reference = (FRHITexture *)0x0;
  this->LayerTexture[2].PageTable.Reference = param_1->LayerTexture[2].PageTable.Reference;
  param_1->LayerTexture[2].PageTable.Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerTexture[2].TextureUniforms.field0_0x0 + 8);
  *(undefined8 *)&this->LayerTexture[2].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[2].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[2].TextureUniforms.field0_0x0 + 8) = uVar1;
  this->MaterialType = param_1->MaterialType;
  uVar1 = *(undefined8 *)((longlong)&param_1->PageTableUniforms[0].field0_0x0 + 8);
  *(undefined8 *)&this->PageTableUniforms[0].field0_0x0 =
       *(undefined8 *)&param_1->PageTableUniforms[0].field0_0x0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[0].field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->PageTableUniforms[1].field0_0x0 + 8);
  *(undefined8 *)&this->PageTableUniforms[1].field0_0x0 =
       *(undefined8 *)&param_1->PageTableUniforms[1].field0_0x0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[1].field0_0x0 + 8) = uVar1;
  dVar2 = param_1->UVUniforms[0].field0_0x0._s_0.Y;
  this->UVUniforms[0].field0_0x0._s_0.X = param_1->UVUniforms[0].field0_0x0._s_0.X;
  this->UVUniforms[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = param_1->UVUniforms[0].field0_0x0._s_0.W;
  this->UVUniforms[0].field0_0x0._s_0.Z = param_1->UVUniforms[0].field0_0x0._s_0.Z;
  this->UVUniforms[0].field0_0x0._s_0.W = dVar2;
  dVar2 = param_1->UVUniforms[1].field0_0x0._s_0.Y;
  this->UVUniforms[1].field0_0x0._s_0.X = param_1->UVUniforms[1].field0_0x0._s_0.X;
  this->UVUniforms[1].field0_0x0._s_0.Y = dVar2;
  dVar2 = param_1->UVUniforms[1].field0_0x0._s_0.W;
  this->UVUniforms[1].field0_0x0._s_0.Z = param_1->UVUniforms[1].field0_0x0._s_0.Z;
  this->UVUniforms[1].field0_0x0._s_0.W = dVar2;
  dVar2 = param_1->UVUniforms[2].field0_0x0._s_0.Y;
  this->UVUniforms[2].field0_0x0._s_0.X = param_1->UVUniforms[2].field0_0x0._s_0.X;
  this->UVUniforms[2].field0_0x0._s_0.Y = dVar2;
  dVar2 = param_1->UVUniforms[2].field0_0x0._s_0.W;
  this->UVUniforms[2].field0_0x0._s_0.Z = param_1->UVUniforms[2].field0_0x0._s_0.Z;
  this->UVUniforms[2].field0_0x0._s_0.W = dVar2;
  (this->WorldHeightUnpack).field0_0x0 = (param_1->WorldHeightUnpack).field0_0x0;
  (this->SharedSampler).Reference = (FRHISamplerState *)0x0;
  (this->SharedSampler).Reference = (param_1->SharedSampler).Reference;
  (param_1->SharedSampler).Reference = (FRHISamplerState *)0x0;
  return this;
}

// FNDInstanceData_RenderThread @ 148f80500

FNDInstanceData_RenderThread * __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
          (FNDInstanceData_RenderThread *this)

{
  TRefCountPtr<FRHISamplerState> this_00;
  
  *(undefined8 *)&this->LayerTexture[0].TextureUniforms.field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerTexture[0].TextureUniforms.field0_0x0 + 8) = 0;
  this->LayerTexture[0].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[0].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[0].PageTable.Reference = (FRHITexture *)0x0;
  this->LayerTexture[1].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[1].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[1].PageTable.Reference = (FRHITexture *)0x0;
  *(undefined8 *)&this->LayerTexture[1].TextureUniforms.field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerTexture[1].TextureUniforms.field0_0x0 + 8) = 0;
  this->LayerTexture[2].Texture.Reference = (FRHITexture *)0x0;
  this->LayerTexture[2].TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  this->LayerTexture[2].PageTable.Reference = (FRHITexture *)0x0;
  *(undefined8 *)&this->LayerTexture[2].TextureUniforms.field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->LayerTexture[2].TextureUniforms.field0_0x0 + 8) = 0;
  *(undefined8 *)&this->PageTableUniforms[0].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[0].field0_0x0 + 8) = 0;
  *(undefined8 *)&this->PageTableUniforms[1].field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[1].field0_0x0 + 8) = 0;
  this->MaterialType = Count;
  this->UVUniforms[0].field0_0x0._s_0.X = 0.0;
  this->UVUniforms[0].field0_0x0._s_0.Y = 0.0;
  this->UVUniforms[0].field0_0x0._s_0.Z = 0.0;
  this->UVUniforms[0].field0_0x0._s_0.W = 0.0;
  this->UVUniforms[1].field0_0x0._s_0.X = 0.0;
  this->UVUniforms[1].field0_0x0._s_0.Y = 0.0;
  this->UVUniforms[1].field0_0x0._s_0.Z = 0.0;
  this->UVUniforms[1].field0_0x0._s_0.W = 0.0;
  this->UVUniforms[2].field0_0x0._s_0.X = 0.0;
  this->UVUniforms[2].field0_0x0._s_0.Y = 0.0;
  this->UVUniforms[2].field0_0x0._s_0.Z = 0.0;
  this->UVUniforms[2].field0_0x0._s_0.W = 0.0;
  (this->WorldHeightUnpack).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->SharedSampler).Reference = (FRHISamplerState *)0x0;
  this_00 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI;
  if (TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
      ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
    (this->SharedSampler).Reference =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    FRHIResource::AddRef((FRHIResource *)this_00.Reference);
  }
  return this;
}

// ~FNDInstanceData_RenderThread @ 148f81e00

void __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::~FNDInstanceData_RenderThread
          (FNDInstanceData_RenderThread *this)

{
  FRHIResource *this_00;
  FRHITexture *pFVar1;
  FRHIShaderResourceView *this_01;
  FLayerTexture *pFVar2;
  longlong lVar3;
  
  this_00 = (FRHIResource *)(this->SharedSampler).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  lVar3 = 3;
  pFVar2 = (FLayerTexture *)&this->MaterialType;
  do {
    pFVar1 = pFVar2[-1].PageTable.Reference;
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    this_01 = pFVar2[-1].TextureSRV.Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    pFVar1 = pFVar2[-1].Texture.Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = pFVar2 + -1;
  } while (lVar3 != 0);
  return;
}

// operator= @ 148f82410

FNDInstanceData_RenderThread * __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::operator=
          (FNDInstanceData_RenderThread *this,FNDInstanceData_RenderThread *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  TRefCountPtr<FRHITexture> *pTVar3;
  TRefCountPtr<FRHITexture> *pTVar4;
  FLayerTexture *pFVar5;
  FLayerTexture *pFVar6;
  TRefCountPtr<FRHISamplerState> *pTVar7;
  FRHITexture *pFVar8;
  FRHIShaderResourceView *pFVar9;
  FRHIResource *this_00;
  undefined8 uVar10;
  double dVar11;
  TRefCountPtr<FRHISamplerState> *pTVar12;
  
  if (this != param_1) {
    pFVar8 = this->LayerTexture[0].Texture.Reference;
    this->LayerTexture[0].Texture.Reference = param_1->LayerTexture[0].Texture.Reference;
    param_1->LayerTexture[0].Texture.Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pTVar1 = &param_1->LayerTexture[0].TextureSRV;
  pTVar2 = &this->LayerTexture[0].TextureSRV;
  if (pTVar2 != pTVar1) {
    pFVar9 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9);
    }
  }
  pTVar3 = &param_1->LayerTexture[0].PageTable;
  pTVar4 = &this->LayerTexture[0].PageTable;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  uVar10 = *(undefined8 *)((longlong)&param_1->LayerTexture[0].TextureUniforms.field0_0x0 + 8);
  pFVar5 = param_1->LayerTexture + 1;
  pFVar6 = this->LayerTexture + 1;
  *(undefined8 *)&this->LayerTexture[0].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[0].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[0].TextureUniforms.field0_0x0 + 8) = uVar10;
  if (pFVar6 != pFVar5) {
    pFVar8 = (pFVar6->Texture).Reference;
    (pFVar6->Texture).Reference = (pFVar5->Texture).Reference;
    (pFVar5->Texture).Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pTVar1 = &param_1->LayerTexture[1].TextureSRV;
  pTVar2 = &this->LayerTexture[1].TextureSRV;
  if (pTVar2 != pTVar1) {
    pFVar9 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9);
    }
  }
  pTVar3 = &param_1->LayerTexture[1].PageTable;
  pTVar4 = &this->LayerTexture[1].PageTable;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  uVar10 = *(undefined8 *)((longlong)&param_1->LayerTexture[1].TextureUniforms.field0_0x0 + 8);
  pFVar5 = param_1->LayerTexture + 2;
  *(undefined8 *)&this->LayerTexture[1].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[1].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[1].TextureUniforms.field0_0x0 + 8) = uVar10;
  pFVar6 = this->LayerTexture + 2;
  if (pFVar6 != pFVar5) {
    pFVar8 = (pFVar6->Texture).Reference;
    (pFVar6->Texture).Reference = (pFVar5->Texture).Reference;
    (pFVar5->Texture).Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  pTVar1 = &param_1->LayerTexture[2].TextureSRV;
  pTVar2 = &this->LayerTexture[2].TextureSRV;
  if (pTVar2 != pTVar1) {
    pFVar9 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar9);
    }
  }
  pTVar3 = &param_1->LayerTexture[2].PageTable;
  pTVar4 = &this->LayerTexture[2].PageTable;
  if (pTVar4 != pTVar3) {
    pFVar8 = pTVar4->Reference;
    pTVar4->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRHITexture *)0x0;
    if (pFVar8 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  uVar10 = *(undefined8 *)((longlong)&param_1->LayerTexture[2].TextureUniforms.field0_0x0 + 8);
  pTVar7 = &this->SharedSampler;
  *(undefined8 *)&this->LayerTexture[2].TextureUniforms.field0_0x0 =
       *(undefined8 *)&param_1->LayerTexture[2].TextureUniforms.field0_0x0;
  *(undefined8 *)((longlong)&this->LayerTexture[2].TextureUniforms.field0_0x0 + 8) = uVar10;
  this->MaterialType = param_1->MaterialType;
  uVar10 = *(undefined8 *)((longlong)&param_1->PageTableUniforms[0].field0_0x0 + 8);
  *(undefined8 *)&this->PageTableUniforms[0].field0_0x0 =
       *(undefined8 *)&param_1->PageTableUniforms[0].field0_0x0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[0].field0_0x0 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&param_1->PageTableUniforms[1].field0_0x0 + 8);
  *(undefined8 *)&this->PageTableUniforms[1].field0_0x0 =
       *(undefined8 *)&param_1->PageTableUniforms[1].field0_0x0;
  *(undefined8 *)((longlong)&this->PageTableUniforms[1].field0_0x0 + 8) = uVar10;
  dVar11 = param_1->UVUniforms[0].field0_0x0._s_0.Y;
  this->UVUniforms[0].field0_0x0._s_0.X = param_1->UVUniforms[0].field0_0x0._s_0.X;
  this->UVUniforms[0].field0_0x0._s_0.Y = dVar11;
  dVar11 = param_1->UVUniforms[0].field0_0x0._s_0.W;
  this->UVUniforms[0].field0_0x0._s_0.Z = param_1->UVUniforms[0].field0_0x0._s_0.Z;
  this->UVUniforms[0].field0_0x0._s_0.W = dVar11;
  dVar11 = param_1->UVUniforms[1].field0_0x0._s_0.Y;
  this->UVUniforms[1].field0_0x0._s_0.X = param_1->UVUniforms[1].field0_0x0._s_0.X;
  this->UVUniforms[1].field0_0x0._s_0.Y = dVar11;
  dVar11 = param_1->UVUniforms[1].field0_0x0._s_0.W;
  this->UVUniforms[1].field0_0x0._s_0.Z = param_1->UVUniforms[1].field0_0x0._s_0.Z;
  this->UVUniforms[1].field0_0x0._s_0.W = dVar11;
  dVar11 = param_1->UVUniforms[2].field0_0x0._s_0.Y;
  this->UVUniforms[2].field0_0x0._s_0.X = param_1->UVUniforms[2].field0_0x0._s_0.X;
  this->UVUniforms[2].field0_0x0._s_0.Y = dVar11;
  dVar11 = param_1->UVUniforms[2].field0_0x0._s_0.W;
  this->UVUniforms[2].field0_0x0._s_0.Z = param_1->UVUniforms[2].field0_0x0._s_0.Z;
  this->UVUniforms[2].field0_0x0._s_0.W = dVar11;
  pTVar12 = &param_1->SharedSampler;
  (this->WorldHeightUnpack).field0_0x0 = (param_1->WorldHeightUnpack).field0_0x0;
  if (pTVar7 != pTVar12) {
    this_00 = (FRHIResource *)pTVar7->Reference;
    pTVar7->Reference = pTVar12->Reference;
    pTVar12->Reference = (FRHISamplerState *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return this;
}

