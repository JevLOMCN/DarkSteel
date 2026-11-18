// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 1

// ~FCaptureDeviceInfo @ 14d0c3950

void __thiscall Audio::FCaptureDeviceInfo::~FCaptureDeviceInfo(FCaptureDeviceInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeviceId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

