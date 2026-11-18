// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// ~FMediaSoundComponentClockSink @ 146c1e420

void __thiscall
FMediaSoundComponentClockSink::~FMediaSoundComponentClockSink(FMediaSoundComponentClockSink *this)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// TickInput @ 146c38360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaSoundComponentClockSink::TickInput
          (FMediaSoundComponentClockSink *this,FTimespan param_1,FTimespan param_2)

{
  UMediaSoundComponent *this_00;
  
  this_00 = (UMediaSoundComponent *)FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (this_00 != (UMediaSoundComponent *)0x0) {
    UMediaSoundComponent::UpdatePlayer(this_00);
    return;
  }
  return;
}

