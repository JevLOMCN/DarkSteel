// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~IResimCacheBase @ 143d03c30

void __thiscall Chaos::IResimCacheBase::~IResimCacheBase(IResimCacheBase *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DesyncedParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(void **)&this->DesyncedView != (void *)0x0) {
    FMemory::Free(*(void **)&this->DesyncedView);
    return;
  }
  return;
}

