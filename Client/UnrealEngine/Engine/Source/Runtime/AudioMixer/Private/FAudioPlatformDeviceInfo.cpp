// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FAudioPlatformDeviceInfo @ 1464d7730

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo(FAudioPlatformDeviceInfo *this)

{
  int *piVar1;
  
  piVar1 = &(this->OutputChannelArray).ArrayMax;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->DeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceId).Data.ArrayNum = 0;
  (this->DeviceId).Data.ArrayMax = 0;
  (this->OutputChannelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputChannelArray).ArrayNum = 0;
  *piVar1 = 0;
  ::FString::operator=(&this->Name,L"Unknown");
  ::FString::operator=(&this->DeviceId,L"Unknown");
  this->NumChannels = 0;
  this->NumDirectOutChannels = 0;
  this->SampleRate = 0;
  this->Format = Unknown;
  (this->OutputChannelArray).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->OutputChannelArray).AllocatorInstance,0,piVar1);
  }
  this->bIsSystemDefault = '\0';
  return this;
}

// operator= @ 1464dd7a0

FAudioPlatformDeviceInfo * __thiscall
Audio::FAudioPlatformDeviceInfo::operator=
          (FAudioPlatformDeviceInfo *this,FAudioPlatformDeviceInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    pFVar5 = (this->Name).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
    (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
    (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
    (param_1->Name).Data.ArrayNum = 0;
    (param_1->Name).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->DeviceId;
  pFVar2 = &this->DeviceId;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeviceId).Data.ArrayNum = (param_1->DeviceId).Data.ArrayNum;
    (this->DeviceId).Data.ArrayMax = (param_1->DeviceId).Data.ArrayMax;
    (param_1->DeviceId).Data.ArrayNum = 0;
    (param_1->DeviceId).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->OutputChannelArray;
  this->NumChannels = param_1->NumChannels;
  pTVar4 = &this->OutputChannelArray;
  this->NumDirectOutChannels = param_1->NumDirectOutChannels;
  this->SampleRate = param_1->SampleRate;
  this->Format = param_1->Format;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputChannelArray).ArrayNum = (param_1->OutputChannelArray).ArrayNum;
    (this->OutputChannelArray).ArrayMax = (param_1->OutputChannelArray).ArrayMax;
    (param_1->OutputChannelArray).ArrayNum = 0;
    (param_1->OutputChannelArray).ArrayMax = 0;
  }
  this->field_0x40 = this->field_0x40 ^ (this->bIsSystemDefault ^ param_1->bIsSystemDefault) & 1;
  return this;
}

