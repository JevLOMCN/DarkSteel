// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator= @ 145df2430

FSceneRenderTargetItem * __thiscall
FSceneRenderTargetItem::operator=(FSceneRenderTargetItem *this,FSceneRenderTargetItem *param_1)

{
  FRHITexture *pFVar1;
  FRHITexture *pFVar2;
  FRHIUnorderedAccessView *this_00;
  FRHIUnorderedAccessView *this_01;
  
  pFVar1 = (param_1->TargetableTexture).Reference;
  pFVar2 = (this->TargetableTexture).Reference;
  if (pFVar2 != pFVar1) {
    (this->TargetableTexture).Reference = pFVar1;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pFVar1 = (param_1->ShaderResourceTexture).Reference;
  pFVar2 = (this->ShaderResourceTexture).Reference;
  if (pFVar2 != pFVar1) {
    (this->ShaderResourceTexture).Reference = pFVar1;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  this_00 = (param_1->UAV).Reference;
  this_01 = (this->UAV).Reference;
  if (this_01 != this_00) {
    (this->UAV).Reference = this_00;
    if (this_00 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  return this;
}

