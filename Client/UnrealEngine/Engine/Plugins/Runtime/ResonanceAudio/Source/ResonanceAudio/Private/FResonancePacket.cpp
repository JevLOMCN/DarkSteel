// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// Duplicate @ 14f047ca0

TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_> __thiscall
ResonanceAudio::FResonancePacket::Duplicate(FResonancePacket *this)

{
  ResonanceAudioApi *pRVar1;
  ISoundfieldAudioPacket IVar2;
  ISoundfieldAudioPacket *in_RDX;
  
  IVar2 = (ISoundfieldAudioPacket)::operator_new(0x10);
  if (IVar2 != (ISoundfieldAudioPacket)0x0) {
    pRVar1 = this->ResonanceSystem;
    *(undefined ***)IVar2 = &___7FResonancePacket_ResonanceAudio__6B_;
    *(ResonanceAudioApi **)((longlong)IVar2 + 8) = pRVar1;
    *in_RDX = IVar2;
    return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
  }
  *in_RDX = (ISoundfieldAudioPacket)0x0;
  return (TUniquePtr<ISoundfieldAudioPacket,TDefaultDelete<ISoundfieldAudioPacket>_>)in_RDX;
}

// Reset @ 14f04c6e0

void __thiscall ResonanceAudio::FResonancePacket::Reset(FResonancePacket *this)

{
  this->ResonanceSystem = (ResonanceAudioApi *)0x0;
  return;
}

// Serialize @ 14f04c720

void __thiscall
ResonanceAudio::FResonancePacket::Serialize(FResonancePacket *this,FArchive *param_1)

{
  return;
}

