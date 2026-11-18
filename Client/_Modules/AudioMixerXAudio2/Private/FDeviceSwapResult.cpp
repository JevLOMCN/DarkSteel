// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 2

// ~FDeviceSwapResult @ 148d3ba40

void __thiscall Audio::FDeviceSwapResult::~FDeviceSwapResult(FDeviceSwapResult *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SwapReason).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// IsNewDeviceReady @ 148d3f070

bool __thiscall Audio::FDeviceSwapResult::IsNewDeviceReady(FDeviceSwapResult *this)

{
  return false;
}

