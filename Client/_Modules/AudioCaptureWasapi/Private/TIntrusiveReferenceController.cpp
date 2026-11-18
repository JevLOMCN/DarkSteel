// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 1

// DestroyObject @ 14d0beb90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FWasapiInputStream,1>::DestroyObject
          (TIntrusiveReferenceController<Audio::FWasapiInputStream,1> *this)

{
  Audio::FWasapiInputStream::~FWasapiInputStream((FWasapiInputStream *)&this->ObjectStorage);
  return;
}

