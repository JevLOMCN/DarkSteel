// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSkinCacheRWBuffer @ 147c2cdf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FSkinCacheRWBuffer * __thiscall
FGPUSkinCache::FSkinCacheRWBuffer::FSkinCacheRWBuffer(FSkinCacheRWBuffer *this)

{
  (this->Buffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->Buffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Buffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Buffer).NumBytes = 0;
  (this->Buffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Buffer).ClassName.Number = 0;
  (this->Buffer).OwnerName.Number = 0;
  this->AccessState = None;
  this->LastTransitionFence = 0;
  return this;
}

// ~FSkinCacheRWBuffer @ 147c31460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FGPUSkinCache::FSkinCacheRWBuffer::~FSkinCacheRWBuffer(FSkinCacheRWBuffer *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  (this->Buffer).NumBytes = 0;
  pFVar1 = (this->Buffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->Buffer).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->Buffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->Buffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->Buffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->Buffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->Buffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->Buffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->Buffer).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return;
}

