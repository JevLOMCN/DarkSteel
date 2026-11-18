// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// FPatchMixerSplitter @ 14ecd7730

FPatchMixerSplitter * __thiscall
Audio::FPatchMixerSplitter::FPatchMixerSplitter(FPatchMixerSplitter *this)

{
  (this->Mixer).PendingNewInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mixer).PendingNewInputs.ArrayNum = 0;
  (this->Mixer).PendingNewInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Mixer).PendingNewInputsCriticalSection,4000);
  (this->Mixer).DisconnectedInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mixer).DisconnectedInputs.ArrayNum = 0;
  (this->Mixer).DisconnectedInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Mixer).InputDeletionCriticalSection,4000);
  (this->Mixer).CurrentInputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mixer).CurrentInputs.ArrayNum = 0;
  (this->Mixer).CurrentInputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Mixer).CurrentPatchesCriticalSection,4000);
  (this->Splitter).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Splitter).PendingOutputs.ArrayNum = 0;
  (this->Splitter).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Splitter).PendingOutputsCriticalSection,4000);
  (this->Splitter).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Splitter).ConnectedOutputs.ArrayNum = 0;
  (this->Splitter).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Splitter).ConnectedOutputsCriticalSection,4000);
  (this->IntermediateBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntermediateBuffer).ArrayNum = 0;
  (this->IntermediateBuffer).ArrayMax = 0;
  return this;
}

// ~FPatchMixerSplitter @ 14ecdad30

void __thiscall Audio::FPatchMixerSplitter::~FPatchMixerSplitter(FPatchMixerSplitter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IntermediateBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Splitter).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->Splitter).ConnectedOutputs.AllocatorInstance.Data,
             (this->Splitter).ConnectedOutputs.ArrayNum);
  pFVar1 = (this->Splitter).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Splitter).PendingOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->Splitter).PendingOutputs.AllocatorInstance.Data,
             (this->Splitter).PendingOutputs.ArrayNum);
  pFVar1 = (this->Splitter).PendingOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPatchMixer::~FPatchMixer(&this->Mixer);
  return;
}

