// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// ~FEndpointData @ 146540510

void __thiscall Audio::FMixerSubmix::FEndpointData::~FEndpointData(FEndpointData *this)

{
  ISoundfieldAudioPacket *pIVar1;
  FScriptContainerElement *pFVar2;
  ISoundfieldEndpoint *pIVar3;
  IAudioEndpoint *pIVar4;
  
  pIVar1 = (this->AudioPacket).Ptr;
  if (pIVar1 != (ISoundfieldAudioPacket *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  FResampler::~FResampler(&this->Resampler);
  pFVar2 = (this->DownmixChannelMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DownmixedResampledAudioBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResampledAudioBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->SoundfieldEndpoint).Ptr;
  if (pIVar3 != (ISoundfieldEndpoint *)0x0) {
    (**(code **)pIVar3->_padding_)(pIVar3,1);
  }
  pIVar4 = (this->NonSoundfieldEndpoint).Ptr;
  if (pIVar4 != (IAudioEndpoint *)0x0) {
    (**(code **)pIVar4->_padding_)(pIVar4,1);
  }
  FPatchInput::~FPatchInput(&this->Input);
  return;
}

// Reset @ 14656f1e0

void __thiscall Audio::FMixerSubmix::FEndpointData::Reset(FEndpointData *this)

{
  IAudioEndpoint *pIVar1;
  ISoundfieldEndpoint *pIVar2;
  
  (this->AudioBuffer).ArrayNum = 0;
  if ((this->AudioBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->AudioBuffer).AllocatorInstance,0,&(this->AudioBuffer).ArrayMax);
  }
  (this->ResampledAudioBuffer).ArrayNum = 0;
  if ((this->ResampledAudioBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->ResampledAudioBuffer).AllocatorInstance,0,
               &(this->ResampledAudioBuffer).ArrayMax);
  }
  (this->DownmixedResampledAudioBuffer).ArrayNum = 0;
  if ((this->DownmixedResampledAudioBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->DownmixedResampledAudioBuffer).AllocatorInstance,0,
               &(this->DownmixedResampledAudioBuffer).ArrayMax);
  }
  (this->DownmixChannelMap).ArrayNum = 0;
  if ((this->DownmixChannelMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->DownmixChannelMap).AllocatorInstance,0,
               &(this->DownmixChannelMap).ArrayMax);
  }
  pIVar1 = (this->NonSoundfieldEndpoint).Ptr;
  if (pIVar1 != (IAudioEndpoint *)0x0) {
    (this->NonSoundfieldEndpoint).Ptr = (IAudioEndpoint *)0x0;
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pIVar2 = (this->SoundfieldEndpoint).Ptr;
  if (pIVar2 != (ISoundfieldEndpoint *)0x0) {
    (this->SoundfieldEndpoint).Ptr = (ISoundfieldEndpoint *)0x0;
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  return;
}

