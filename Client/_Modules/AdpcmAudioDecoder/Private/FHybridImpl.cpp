// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 3

// ~FHybridImpl @ 146bcbe80

void __thiscall FPcmAudioInfoHybrid::FHybridImpl::~FHybridImpl(FHybridImpl *this)

{
  return;
}

// PrepareToLoop @ 146bcd9a0

void __thiscall FPcmAudioInfoHybrid::FHybridImpl::PrepareToLoop(FHybridImpl *this)

{
  return;
}

// SeekToTime @ 146bcec20

void __thiscall FPcmAudioInfoHybrid::FHybridImpl::SeekToTime(FHybridImpl *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = this->TotalSamplesPerChannel - 1;
  fVar3 = (float)this->SampleRate * param_1;
  uVar2 = (uint)(longlong)fVar3;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146bcec48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))(fVar3,uVar2);
  return;
}

