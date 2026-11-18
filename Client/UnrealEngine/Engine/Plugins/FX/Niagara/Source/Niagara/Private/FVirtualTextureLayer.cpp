// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Reset @ 14918b340

void __thiscall
FNDILandscapeData_RenderThread::FVirtualTextureLayer::Reset(FVirtualTextureLayer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->TextureSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  *(undefined8 *)&(this->TextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->TextureUniforms).field0_0x0 + 8) = 0;
  return;
}

// Update @ 14918fca0

void __thiscall
FNDILandscapeData_RenderThread::FVirtualTextureLayer::Update
          (FVirtualTextureLayer *this,URuntimeVirtualTexture *param_1,uint param_2,bool param_3)

{
  FRHIShaderResourceView *this_00;
  IAllocatedVirtualTexture *pIVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar2 = (this->TextureSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->TextureSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  *(undefined8 *)&(this->TextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->TextureUniforms).field0_0x0 + 8) = 0;
  if ((param_1 != (URuntimeVirtualTexture *)0x0) &&
     ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    pIVar1 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(param_1);
    if (pIVar1 != (IAllocatedVirtualTexture *)0x0) {
      pFVar2 = (FRHIShaderResourceView *)
               (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,param_2,param_3);
      if (pFVar2 != (FRHIShaderResourceView *)0x0) {
        this_00 = (this->TextureSRV).Reference;
        if (this_00 != pFVar2) {
          (this->TextureSRV).Reference = pFVar2;
          FRHIResource::AddRef((FRHIResource *)pFVar2);
          if (this_00 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)this_00);
          }
        }
        (**(code **)(pIVar1->_padding_ + 0x40))(pIVar1,&this->TextureUniforms,param_2);
      }
    }
  }
  return;
}

