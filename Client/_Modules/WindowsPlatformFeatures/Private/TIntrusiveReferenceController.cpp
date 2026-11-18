// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 1

// DestroyObject @ 148d26630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWindowsVideoRecordingSystem,1>::DestroyObject
          (TIntrusiveReferenceController<FWindowsVideoRecordingSystem,1> *this)

{
  FWindowsVideoRecordingSystem::~FWindowsVideoRecordingSystem
            ((FWindowsVideoRecordingSystem *)&this->ObjectStorage);
  return;
}

