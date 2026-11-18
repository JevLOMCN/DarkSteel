// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// ~IMediaAudioSample @ 14d78ce40

void __thiscall IMediaAudioSample::~IMediaAudioSample(IMediaAudioSample *this)

{
  *this = (IMediaAudioSample)&___7IMediaAudioSample__6B_;
  return;
}

// GetTimecode @ 14d7ae740

TOptional<FTimecode> * __thiscall
IMediaAudioSample::GetTimecode(IMediaAudioSample *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

