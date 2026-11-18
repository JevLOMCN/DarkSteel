// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// ~FSoundfieldData @ 1465410e0

void __thiscall
Audio::FMixerSourceSubmixOutputBuffer::FSoundfieldData::~FSoundfieldData(FSoundfieldData *this)

{
  ISoundfieldAudioPacket *pIVar1;
  ISoundfieldEncodingSettingsProxy *pIVar2;
  ISoundfieldTranscodeStream *pIVar3;
  ISoundfieldEncoderStream *pIVar4;
  
  pIVar1 = (this->EncodedPacket).Ptr;
  if (pIVar1 != (ISoundfieldAudioPacket *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->EncoderSettings).Ptr;
  if (pIVar2 != (ISoundfieldEncodingSettingsProxy *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->SoundfieldTranscoder).Ptr;
  if (pIVar3 != (ISoundfieldTranscodeStream *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->SoundfieldEncoder).Ptr;
  if (pIVar4 != (ISoundfieldEncoderStream *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146541137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar4)(pIVar4,1);
    return;
  }
  return;
}

