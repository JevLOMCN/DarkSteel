// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 2

// ~FMediaComponentClockSink @ 14ea89870

void __thiscall FMediaComponentClockSink::~FMediaComponentClockSink(FMediaComponentClockSink *this)

{
  this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
  return;
}

// TickOutput @ 14ea90360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
FMediaComponentClockSink::TickOutput
          (FMediaComponentClockSink *this,FTimespan param_1,FTimespan param_2)

{
  char cVar1;
  UObject *pUVar2;
  UMediaPlateComponent *this_00;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    this_00 = (UMediaPlateComponent *)FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    cVar1 = (**(code **)(this_00->_padding_ + 0x48))
                      (&this_00->_padding_,(this_00->MediaPlayer).field0_0x0.DebugPtr);
    if (cVar1 != '\0') {
      UMediaPlateComponent::StopClockSink(this_00);
      return;
    }
  }
  return;
}

