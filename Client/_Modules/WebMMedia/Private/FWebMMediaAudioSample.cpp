// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 8

// ~FWebMMediaAudioSample @ 14f11a2e0

void __thiscall FWebMMediaAudioSample::~FWebMMediaAudioSample(FWebMMediaAudioSample *this)

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

// GetBuffer @ 14f11eb30

void * __thiscall FWebMMediaAudioSample::GetBuffer(FWebMMediaAudioSample *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetChannels @ 14f11eb60

uint __thiscall FWebMMediaAudioSample::GetChannels(FWebMMediaAudioSample *this)

{
  return this->Channels;
}

// GetDuration @ 14f11ed30

FTimespan __thiscall FWebMMediaAudioSample::GetDuration(FWebMMediaAudioSample *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetFormat @ 14f11ede0

EMediaAudioSampleFormat __thiscall FWebMMediaAudioSample::GetFormat(FWebMMediaAudioSample *this)

{
  return Int16;
}

// GetFrames @ 14f11ee00

uint __thiscall FWebMMediaAudioSample::GetFrames(FWebMMediaAudioSample *this)

{
  return (uint)((ulonglong)(longlong)(this->Buffer).ArrayNum / ((ulonglong)this->Channels * 2));
}

// GetSampleRate @ 14f11efe0

uint __thiscall FWebMMediaAudioSample::GetSampleRate(FWebMMediaAudioSample *this)

{
  return this->SampleRate;
}

// GetTime @ 14f11f170

FMediaTimeStamp * __thiscall
FWebMMediaAudioSample::GetTime(FWebMMediaAudioSample *this,FMediaTimeStamp *__return_storage_ptr__)

{
  (__return_storage_ptr__->Time).Ticks = (this->Time).Ticks;
  __return_storage_ptr__->SequenceIndex = 0;
  __return_storage_ptr__->LoopIndex = 0;
  return __return_storage_ptr__;
}

