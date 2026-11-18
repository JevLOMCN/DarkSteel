// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 3

// DestroyObject @ 14a6d8a70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FEnhancedInputActionHandlerDynamicSignature,1>
::DestroyObject(TIntrusiveReferenceController<FEnhancedInputActionHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14a6d8a80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FEnhancedInputWorldProcessor,1>::DestroyObject
          (TIntrusiveReferenceController<FEnhancedInputWorldProcessor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7IInputProcessor__6B_;
  return;
}

// DestroyObject @ 14a6d8aa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FInputDebugKeyHandlerDynamicSignature,1>::
DestroyObject(TIntrusiveReferenceController<FInputDebugKeyHandlerDynamicSignature,1> *this)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ObjectStorage);
  return;
}

