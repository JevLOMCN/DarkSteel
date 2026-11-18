// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 1

// Alloc @ 14f11bbd0

FWebMMediaAudioSample * __cdecl TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>::Alloc(void)

{
  FWebMMediaAudioSample *pFVar1;
  
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FWebMMediaAudioSample *)0x0) {
    pFVar1->_padding_ = (longlong)&FWebMMediaAudioSample::_vftable__for__IMediaAudioSample__;
    pFVar1->_padding_ = (longlong)&FWebMMediaAudioSample::_vftable__for__IMediaPoolable__;
    (pFVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Buffer).ArrayNum = 0;
    (pFVar1->Buffer).ArrayMax = 0;
    (pFVar1->Duration).Ticks = 0;
    pFVar1->Channels = 0;
    pFVar1->SampleRate = 0;
    (pFVar1->Time).Ticks = 0;
    return pFVar1;
  }
  return (FWebMMediaAudioSample *)0x0;
}

