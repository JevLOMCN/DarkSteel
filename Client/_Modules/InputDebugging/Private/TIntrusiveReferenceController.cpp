// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDebugging
// Functions: 2

// DestroyObject @ 14f0343a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTouchInputVisualizer,1>::DestroyObject
          (TIntrusiveReferenceController<FTouchInputVisualizer,1> *this)

{
  FTouchInputVisualizer::~FTouchInputVisualizer((FTouchInputVisualizer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0343f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputDeviceDebugTools,1>::DestroyObject
          (TIntrusiveReferenceController<FInputDeviceDebugTools,1> *this)

{
  FInputDeviceDebugTools::~FInputDeviceDebugTools((FInputDeviceDebugTools *)&this->ObjectStorage);
  return;
}

