// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMetronomeDelegateGameThreadData @ 14733f7b0

FMetronomeDelegateGameThreadData * __thiscall
FQuartzTickableObject::FMetronomeDelegateGameThreadData::FMetronomeDelegateGameThreadData
          (FMetronomeDelegateGameThreadData *this)

{
  *(undefined8 *)&this->MulticastDelegate = 0;
  *(undefined8 *)&(this->MulticastDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MulticastDelegate).field_0x10 = 0;
  return this;
}

// ~FMetronomeDelegateGameThreadData @ 147341c10

void __thiscall
FQuartzTickableObject::FMetronomeDelegateGameThreadData::~FMetronomeDelegateGameThreadData
          (FMetronomeDelegateGameThreadData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->MulticastDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

