// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// ~FSoundfieldStreams @ 146541150

void __thiscall
Audio::FMixerSubmix::FSoundfieldStreams::~FSoundfieldStreams(FSoundfieldStreams *this)

{
  FScriptContainerElement *pFVar1;
  ISoundfieldEncodingSettingsProxy *pIVar2;
  ISoundfieldAudioPacket *pIVar3;
  ISoundfieldMixerStream *pIVar4;
  ISoundfieldDecoderStream *pIVar5;
  ISoundfieldEncoderStream *pIVar6;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StreamsLock);
  DestructItems<Audio::FMixerSubmix::FSoundfieldEffectProcessorData,int>
            ((FSoundfieldEffectProcessorData *)(this->EffectProcessors).AllocatorInstance.Data,
             (this->EffectProcessors).ArrayNum);
  pFVar1 = (this->EffectProcessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Settings).Ptr;
  if (pIVar2 != (ISoundfieldEncodingSettingsProxy *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->MixedDownAudio).Ptr;
  if (pIVar3 != (ISoundfieldAudioPacket *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->Mixer).Ptr;
  if (pIVar4 != (ISoundfieldMixerStream *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->ParentDecoder).Ptr;
  if (pIVar5 != (ISoundfieldDecoderStream *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pIVar6 = (this->DownmixedChildrenEncoder).Ptr;
  if (pIVar6 != (ISoundfieldEncoderStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001465411df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar6)(pIVar6,1);
    return;
  }
  return;
}

// Reset @ 14656fbc0

void __thiscall Audio::FMixerSubmix::FSoundfieldStreams::Reset(FSoundfieldStreams *this)

{
  ISoundfieldDecoderStream *pIVar1;
  ISoundfieldMixerStream *pIVar2;
  ISoundfieldEncodingSettingsProxy *pIVar3;
  
  this->Factory = (ISoundfieldFactory *)0x0;
  pIVar1 = (this->ParentDecoder).Ptr;
  if (pIVar1 != (ISoundfieldDecoderStream *)0x0) {
    (this->ParentDecoder).Ptr = (ISoundfieldDecoderStream *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->Mixer).Ptr;
  if (pIVar2 != (ISoundfieldMixerStream *)0x0) {
    (this->Mixer).Ptr = (ISoundfieldMixerStream *)0x0;
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->Settings).Ptr;
  if (pIVar3 != (ISoundfieldEncodingSettingsProxy *)0x0) {
    (this->Settings).Ptr = (ISoundfieldEncodingSettingsProxy *)0x0;
    (**(code **)*pIVar3)(pIVar3,1);
  }
  return;
}

