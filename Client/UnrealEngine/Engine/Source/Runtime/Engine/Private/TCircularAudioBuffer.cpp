// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetNum @ 14875b330

void __thiscall
Audio::TCircularAudioBuffer<float,16>::SetNum
          (TCircularAudioBuffer<float,16> *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Capacity <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < Capacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x45b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2) {
    LOCK();
    (this->WriteCounter).Counter = ((this->ReadCounter).Counter + param_1) % this->Capacity;
    UNLOCK();
    return;
  }
  iVar3 = (this->WriteCounter).Counter - param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + this->Capacity;
  }
  LOCK();
  (this->ReadCounter).Counter = iVar3;
  UNLOCK();
  return;
}

