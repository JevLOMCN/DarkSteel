// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FRHIGPUBufferReadback @ 1454059e0

void __thiscall FRHIGPUBufferReadback::~FRHIGPUBufferReadback(FRHIGPUBufferReadback *this)

{
  FRHIStagingBuffer *this_00;
  longlong lVar1;
  FRHIGPUBufferReadback *pFVar2;
  
  pFVar2 = this + 1;
  lVar1 = 8;
  do {
    this_00 = pFVar2[-1].DestinationStagingBuffers[7].Reference;
    pFVar2 = (FRHIGPUBufferReadback *)(pFVar2[-1].DestinationStagingBuffers + 7);
    lVar1 = lVar1 + -1;
    if (this_00 != (FRHIStagingBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  } while (lVar1 != 0);
  this->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  return;
}

