// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 146541b80

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> * __thiscall
TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>::operator=
          (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *this,
          TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> *param_1)

{
  ISoundfieldAudioPacket *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (ISoundfieldAudioPacket *)0x0;
    if (pIVar1 != (ISoundfieldAudioPacket *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  return this;
}

