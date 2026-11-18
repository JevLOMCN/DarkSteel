// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// FLocalVoiceData @ 14ecd74d0

FLocalVoiceData * __thiscall FLocalVoiceData::FLocalVoiceData(FLocalVoiceData *this)

{
  this->VoiceRemainderSize = 0;
  (this->VoiceRemainder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoiceRemainder).ArrayNum = 0;
  (this->VoiceRemainder).ArrayMax = 0;
  (this->LocalVoiceOutput).PendingOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalVoiceOutput).PendingOutputs.ArrayNum = 0;
  (this->LocalVoiceOutput).PendingOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->LocalVoiceOutput).PendingOutputsCriticalSection,4000);
  (this->LocalVoiceOutput).ConnectedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalVoiceOutput).ConnectedOutputs.ArrayNum = 0;
  (this->LocalVoiceOutput).ConnectedOutputs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->LocalVoiceOutput).ConnectedOutputsCriticalSection,4000);
  return this;
}

// ~FLocalVoiceData @ 14ecdaa80

void __thiscall FLocalVoiceData::~FLocalVoiceData(FLocalVoiceData *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)&(this->LocalVoiceOutput).ConnectedOutputsCriticalSection);
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->LocalVoiceOutput).ConnectedOutputs.AllocatorInstance.Data,
             (this->LocalVoiceOutput).ConnectedOutputs.ArrayNum);
  pFVar1 = (this->LocalVoiceOutput).ConnectedOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->LocalVoiceOutput).PendingOutputsCriticalSection)
  ;
  DestructItems<Audio::FPatchInput,int>
            ((FPatchInput *)(this->LocalVoiceOutput).PendingOutputs.AllocatorInstance.Data,
             (this->LocalVoiceOutput).PendingOutputs.ArrayNum);
  pFVar1 = (this->LocalVoiceOutput).PendingOutputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VoiceRemainder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

