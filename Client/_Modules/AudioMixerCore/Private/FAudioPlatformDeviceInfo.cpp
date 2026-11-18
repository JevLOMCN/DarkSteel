// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 1

// Reset @ 1445290f0

void __thiscall Audio::FAudioPlatformDeviceInfo::Reset(FAudioPlatformDeviceInfo *this)

{
  int *piVar1;
  
  ::FString::operator=(&this->Name,L"Unknown");
  ::FString::operator=(&this->DeviceId,L"Unknown");
  this->NumChannels = 0;
  this->NumDirectOutChannels = 0;
  piVar1 = &(this->OutputChannelArray).ArrayMax;
  this->SampleRate = 0;
  this->Format = Unknown;
  (this->OutputChannelArray).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->OutputChannelArray).AllocatorInstance,0,piVar1);
  }
  this->bIsSystemDefault = '\0';
  return;
}

