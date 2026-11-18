// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 8

// ~FWmfMediaAudioSample @ 14ea97530

void __thiscall FWmfMediaAudioSample::~FWmfMediaAudioSample(FWmfMediaAudioSample *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaAudioSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaPoolable__6B_;
  this->_padding_ = (longlong)&___7IMediaAudioSample__6B_;
  return;
}

// GetBuffer @ 14eaac980

void * __thiscall FWmfMediaAudioSample::GetBuffer(FWmfMediaAudioSample *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetChannels @ 14eaacd60

uint __thiscall FWmfMediaAudioSample::GetChannels(FWmfMediaAudioSample *this)

{
  return this->Channels;
}

// GetDuration @ 14eaacfe0

FTimespan __thiscall FWmfMediaAudioSample::GetDuration(FWmfMediaAudioSample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetFormat @ 14eaad6d0

EMediaAudioSampleFormat __thiscall FWmfMediaAudioSample::GetFormat(FWmfMediaAudioSample *this)

{
  return Int16;
}

// GetFrames @ 14eaad6f0

uint __thiscall FWmfMediaAudioSample::GetFrames(FWmfMediaAudioSample *this)

{
  return (uint)((ulonglong)(longlong)(this->Buffer).ArrayNum / ((ulonglong)this->Channels * 2));
}

// GetSampleRate @ 14eaaed60

uint __thiscall FWmfMediaAudioSample::GetSampleRate(FWmfMediaAudioSample *this)

{
  return this->SampleRate;
}

// GetTime @ 14eab0680

FMediaTimeStamp * __thiscall
FWmfMediaAudioSample::GetTime(FWmfMediaAudioSample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->Time).SequenceIndex;
  iVar2 = (this->Time).LoopIndex;
  (__return_storage_ptr__->Time).Ticks = (this->Time).Time.Ticks;
  __return_storage_ptr__->SequenceIndex = iVar1;
  __return_storage_ptr__->LoopIndex = iVar2;
  return __return_storage_ptr__;
}

