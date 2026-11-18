// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 1

// ~FPatchMixer @ 1445308c0

void __thiscall Audio::FPatchMixer::~FPatchMixer(FPatchMixer *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CurrentPatchesCriticalSection);
  DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>
            ((TSharedPtr<Audio::FPatchOutput,1> *)(this->CurrentInputs).AllocatorInstance.Data,
             (this->CurrentInputs).ArrayNum);
  pFVar1 = (this->CurrentInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InputDeletionCriticalSection);
  pFVar1 = (this->DisconnectedInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingNewInputsCriticalSection);
  DestructItems<TSharedPtr<Audio::FPatchOutput,1>,int>
            ((TSharedPtr<Audio::FPatchOutput,1> *)(this->PendingNewInputs).AllocatorInstance.Data,
             (this->PendingNewInputs).ArrayNum);
  pFVar1 = (this->PendingNewInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

