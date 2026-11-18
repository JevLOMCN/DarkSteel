// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// `scalar_deleting_destructor' @ 1445212d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FWaveTableOsc,SharedPointerInternals::DefaultDeleter<Audio::FWaveTableOsc>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FWaveTableOsc,SharedPointerInternals::DefaultDeleter<Audio::FWaveTableOsc>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144521310

void * __thiscall FWavEncoder::_scalar_deleting_destructor_(FWavEncoder *this,uint param_1)

{
  Audio::IAudioEncoder::~IAudioEncoder((IAudioEncoder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144521350

void * __thiscall
Audio::FWaveTableOsc::_scalar_deleting_destructor_(FWaveTableOsc *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FWaveTableOsc_Audio__6B_;
  pFVar1 = (this->WaveTableBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

