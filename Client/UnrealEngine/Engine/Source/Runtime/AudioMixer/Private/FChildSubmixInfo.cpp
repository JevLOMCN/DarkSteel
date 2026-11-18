// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// ~FChildSubmixInfo @ 146540490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FChildSubmixInfo::~FChildSubmixInfo(FChildSubmixInfo *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ISoundfieldAudioPacket *pIVar3;
  ISoundfieldTranscodeStream *pIVar4;
  ISoundfieldEncoderStream *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pIVar3 = (this->IncomingPacketToTranscode).Ptr;
  if (pIVar3 != (ISoundfieldAudioPacket *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar4 = (this->Transcoder).Ptr;
  if (pIVar4 != (ISoundfieldTranscodeStream *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pIVar5 = (this->Encoder).Ptr;
  if (pIVar5 != (ISoundfieldEncoderStream *)0x0) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  pTVar6 = (this->SubmixPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001465404f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      return;
    }
  }
  return;
}

