// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TSampleBuffer<short> @ 14ddc9c20

void __thiscall Audio::TSampleBuffer<short>::~TSampleBuffer<short>(TSampleBuffer<short> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RawPCMData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

