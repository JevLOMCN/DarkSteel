// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// operator= @ 14d7f96f0

TSlidingBuffer<float> * __thiscall
Audio::TSlidingBuffer<float>::operator=(TSlidingBuffer<float> *this,TSlidingBuffer<float> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->StorageBuffer;
  pTVar2 = &this->StorageBuffer;
  this->NumWindowSamples = param_1->NumWindowSamples;
  this->NumHopSamples = param_1->NumHopSamples;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StorageBuffer).ArrayNum = (param_1->StorageBuffer).ArrayNum;
    (this->StorageBuffer).ArrayMax = (param_1->StorageBuffer).ArrayMax;
    (param_1->StorageBuffer).ArrayNum = 0;
    (param_1->StorageBuffer).ArrayMax = 0;
  }
  this->NumUnderflowSamples = param_1->NumUnderflowSamples;
  return this;
}

