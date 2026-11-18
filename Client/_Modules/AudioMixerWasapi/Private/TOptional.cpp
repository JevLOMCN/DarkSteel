// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 1

// Reset @ 148d4a5f0

void __thiscall
TOptional<Audio::FAudioPlatformDeviceInfo>::Reset(TOptional<Audio::FAudioPlatformDeviceInfo> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    pFVar1 = (this->TypedValue).OutputChannelArray.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).DeviceId.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).Name.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    this->bIsSet = false;
  }
  return;
}

