// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// RendersPrimitivesAsCameraFacingSprites @ 1493b4e20

bool __thiscall
FNiagaraSpriteVertexFactory::RendersPrimitivesAsCameraFacingSprites
          (FNiagaraSpriteVertexFactory *this)

{
  return true;
}

// SetSpriteUniformBuffer @ 1493b6d00

void __thiscall
FNiagaraSpriteVertexFactory::SetSpriteUniformBuffer
          (FNiagaraSpriteVertexFactory *this,
          TUniformBufferRef<FNiagaraSpriteUniformParameters> *param_1)

{
  TUniformBufferRef<FNiagaraSpriteUniformParameters> this_00;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> this_01;
  
  this_00 = *param_1;
  this_01 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)
            (this->SpriteUniformBuffer).Reference;
  if (this_01 != this_00) {
    (this->SpriteUniformBuffer).Reference = (FRHIUniformBuffer *)this_00;
    if (this_00 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  return;
}

