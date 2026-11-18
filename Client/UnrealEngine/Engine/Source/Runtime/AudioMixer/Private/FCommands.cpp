// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FCommands @ 1464d7800

FCommands * __thiscall Audio::FMixerSourceManager::FCommands::FCommands(FCommands *this)

{
  (this->NumTimesOvergrown).Counter = 0;
  (this->SourceCommandQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceCommandQueue).ArrayNum = 0;
  (this->SourceCommandQueue).ArrayMax = 0;
  return this;
}

// ~FCommands @ 1464dbec0

void __thiscall Audio::FMixerSourceManager::FCommands::~FCommands(FCommands *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FMixerSourceManager::FAudioMixerThreadCommand,int>
            ((FAudioMixerThreadCommand *)(this->SourceCommandQueue).AllocatorInstance.Data,
             (this->SourceCommandQueue).ArrayNum);
  pFVar1 = (this->SourceCommandQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

