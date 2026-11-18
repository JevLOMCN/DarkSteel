// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// operator= @ 14dd6c5c0

TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> * __thiscall
TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::operator=
          (TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_> *this,
          void *param_1)

{
  FRHIGPUTextureReadback *pFVar1;
  FRHITexture *this_00;
  longlong lVar2;
  FRHIGPUTextureReadback *pFVar3;
  
  pFVar1 = this->Ptr;
  this->Ptr = (FRHIGPUTextureReadback *)0x0;
  if (pFVar1 != (FRHIGPUTextureReadback *)0x0) {
    lVar2 = 8;
    pFVar3 = pFVar1 + 1;
    do {
      this_00 = pFVar3[-1].DestinationStagingTextures[7].Reference;
      pFVar3 = (FRHIGPUTextureReadback *)(pFVar3[-1].DestinationStagingTextures + 7);
      lVar2 = lVar2 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar2 != 0);
    pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x58);
  }
  return this;
}

