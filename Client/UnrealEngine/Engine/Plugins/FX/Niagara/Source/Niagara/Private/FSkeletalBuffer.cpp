// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FSkeletalBuffer @ 149212a20

FSkeletalBuffer * __thiscall
FSkeletalMeshGpuDynamicBufferProxy::FSkeletalBuffer::FSkeletalBuffer(FSkeletalBuffer *this)

{
  (this->SectionBuffer).Reference = (FRHIBuffer *)0x0;
  (this->SectionSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->SamplingBuffer).Reference = (FRHIBuffer *)0x0;
  (this->SamplingSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FSkeletalBuffer @ 149215870

void __thiscall
FSkeletalMeshGpuDynamicBufferProxy::FSkeletalBuffer::~FSkeletalBuffer(FSkeletalBuffer *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  pFVar1 = (this->SamplingSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SamplingBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SectionSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SectionBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
    return;
  }
  return;
}

