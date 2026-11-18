// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerXAudio2
// Functions: 2

// FAudioPlatformDeviceInfo @ 148d3b570

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
          (FAudioPlatformDeviceInfo *this,FAudioPlatformDeviceInfo *param_1)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString(&this->Name,&param_1->Name);
  ::FString::FString(&this->DeviceId,&param_1->DeviceId);
  pTVar1 = &this->OutputChannelArray;
  this->NumChannels = param_1->NumChannels;
  this->NumDirectOutChannels = param_1->NumDirectOutChannels;
  this->SampleRate = param_1->SampleRate;
  this->Format = param_1->Format;
  piVar2 = &(this->OutputChannelArray).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->OutputChannelArray).ArrayNum;
  _Src = (param_1->OutputChannelArray).AllocatorInstance.Data;
  (this->OutputChannelArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  this->field_0x40 = this->field_0x40 ^ (this->bIsSystemDefault ^ param_1->bIsSystemDefault) & 1;
  return this;
}

// operator= @ 148d3bb50

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioPlatformDeviceInfo::operator=
          (FAudioPlatformDeviceInfo *this,FAudioPlatformDeviceInfo *param_1)

{
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  ::FString::operator=(&this->Name,&param_1->Name);
  ::FString::operator=(&this->DeviceId,&param_1->DeviceId);
  this->NumChannels = param_1->NumChannels;
  pTVar1 = &this->OutputChannelArray;
  this->NumDirectOutChannels = param_1->NumDirectOutChannels;
  this->SampleRate = param_1->SampleRate;
  this->Format = param_1->Format;
  if (pTVar1 != &param_1->OutputChannelArray) {
    iVar3 = (this->OutputChannelArray).ArrayMax;
    piVar2 = &(this->OutputChannelArray).ArrayMax;
    iVar4 = (param_1->OutputChannelArray).ArrayNum;
    _Src = (param_1->OutputChannelArray).AllocatorInstance.Data;
    (this->OutputChannelArray).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  this->field_0x40 = this->field_0x40 ^ (this->bIsSystemDefault ^ param_1->bIsSystemDefault) & 1;
  return this;
}

