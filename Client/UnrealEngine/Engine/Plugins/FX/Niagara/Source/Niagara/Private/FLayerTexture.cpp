// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FLayerTexture @ 148f7f120

FLayerTexture * __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FLayerTexture::FLayerTexture
          (FLayerTexture *this,FLayerTexture *param_1)

{
  undefined8 uVar1;
  
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->Texture).Reference = (param_1->Texture).Reference;
  (param_1->Texture).Reference = (FRHITexture *)0x0;
  (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TextureSRV).Reference = (param_1->TextureSRV).Reference;
  (param_1->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PageTable).Reference = (FRHITexture *)0x0;
  (this->PageTable).Reference = (param_1->PageTable).Reference;
  (param_1->PageTable).Reference = (FRHITexture *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TextureUniforms).field0_0x0 + 8);
  *(undefined8 *)&(this->TextureUniforms).field0_0x0 =
       *(undefined8 *)&(param_1->TextureUniforms).field0_0x0;
  *(undefined8 *)((longlong)&(this->TextureUniforms).field0_0x0 + 8) = uVar1;
  return this;
}

// FLayerTexture @ 148f7f170

FLayerTexture * __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FLayerTexture::FLayerTexture
          (FLayerTexture *this)

{
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->PageTable).Reference = (FRHITexture *)0x0;
  *(undefined8 *)&(this->TextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->TextureUniforms).field0_0x0 + 8) = 0;
  return this;
}

// ~FLayerTexture @ 148f81ca0

void __thiscall
NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FLayerTexture::~FLayerTexture
          (FLayerTexture *this)

{
  FRHITexture *pFVar1;
  FRHIShaderResourceView *this_00;
  
  pFVar1 = (this->PageTable).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  this_00 = (this->TextureSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->Texture).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

