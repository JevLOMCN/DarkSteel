// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FDirtyProxiesBucket @ 14388ad60

FDirtyProxiesBucket * __thiscall
Chaos::FDirtyProxiesBucket::FDirtyProxiesBucket(FDirtyProxiesBucket *this)

{
  (this->ProxiesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxiesData).ArrayNum = 0;
  (this->ProxiesData).ArrayMax = 0;
  return this;
}

// ~FDirtyProxiesBucket @ 14388ccb0

void __thiscall Chaos::FDirtyProxiesBucket::~FDirtyProxiesBucket(FDirtyProxiesBucket *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Chaos::FDirtyProxy,int>
            ((FDirtyProxy *)(this->ProxiesData).AllocatorInstance.Data,(this->ProxiesData).ArrayNum)
  ;
  pFVar1 = (this->ProxiesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

