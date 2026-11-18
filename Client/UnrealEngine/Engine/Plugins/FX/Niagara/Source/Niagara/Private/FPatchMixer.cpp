// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FPatchMixer @ 1490b1cf0

FPatchMixer * __thiscall Audio::FPatchMixer::FPatchMixer(FPatchMixer *this)

{
  (this->PendingNewInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingNewInputs).ArrayNum = 0;
  (this->PendingNewInputs).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PendingNewInputsCriticalSection,4000);
  (this->DisconnectedInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisconnectedInputs).ArrayNum = 0;
  (this->DisconnectedInputs).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->InputDeletionCriticalSection,4000);
  (this->CurrentInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputs).ArrayNum = 0;
  (this->CurrentInputs).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CurrentPatchesCriticalSection,4000);
  return this;
}

