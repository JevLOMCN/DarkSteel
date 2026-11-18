// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FSkinWeightReadbackData @ 1475aa210

void __thiscall FSkinWeightReadbackData::~FSkinWeightReadbackData(FSkinWeightReadbackData *this)

{
  FScriptContainerElement *pFVar1;
  FRHIGPUBufferReadback *pFVar2;
  FRHIStagingBuffer *this_00;
  longlong lVar3;
  FRHIGPUBufferReadback *pFVar4;
  
  pFVar1 = (this->ReadbackData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->BufferReadback).Ptr;
  if (pFVar2 != (FRHIGPUBufferReadback *)0x0) {
    lVar3 = 8;
    pFVar4 = pFVar2 + 1;
    do {
      this_00 = pFVar4[-1].DestinationStagingBuffers[7].Reference;
      pFVar4 = (FRHIGPUBufferReadback *)(pFVar4[-1].DestinationStagingBuffers + 7);
      lVar3 = lVar3 + -1;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar3 != 0);
    pFVar2->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar2->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2->_padding_);
    }
    ::operator_delete(pFVar2,0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001475aa2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

