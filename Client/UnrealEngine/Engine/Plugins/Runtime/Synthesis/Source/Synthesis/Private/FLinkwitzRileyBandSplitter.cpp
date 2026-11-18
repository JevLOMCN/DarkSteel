// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// ~FLinkwitzRileyBandSplitter @ 14f0bee90

void __thiscall
Audio::FLinkwitzRileyBandSplitter::~FLinkwitzRileyBandSplitter(FLinkwitzRileyBandSplitter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossovers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FLinkwitzRileyBandFilter,int>
            ((FLinkwitzRileyBandFilter *)(this->BandFilters).AllocatorInstance.Data,
             (this->BandFilters).ArrayNum);
  pFVar1 = (this->BandFilters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BandAlignedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SharedAlignedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BandWorkBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SharedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

