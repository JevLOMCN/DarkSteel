// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// DestroyObject @ 1444f9f70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FPatchOutput,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FPatchOutput,1> *this)

{
  uchar *puVar1;
  void *pvVar2;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FPatchOutput_Audio__6B_;
  LOCK();
  puVar1 = (this->ObjectStorage).Pad + 0x48;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  UNLOCK();
  if (*(FEvent **)puVar1 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)puVar1);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// DestroyObject @ 1444f9fd0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FSpectrumAnalyzer,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FSpectrumAnalyzer,1> *this)

{
  Audio::FSpectrumAnalyzer::~FSpectrumAnalyzer((FSpectrumAnalyzer *)&this->ObjectStorage);
  return;
}

