// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FEmptyUAV @ 149279c10

void __thiscall FNiagaraEmptyUAVPool::FEmptyUAV::~FEmptyUAV(FEmptyUAV *this)

{
  FRHIBuffer *pFVar1;
  FRHITexture *pFVar2;
  FRHIUnorderedAccessView *pFVar3;
  
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->Texture).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    (this->Texture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->UAV).Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    (this->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->UAV).Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->Texture).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

