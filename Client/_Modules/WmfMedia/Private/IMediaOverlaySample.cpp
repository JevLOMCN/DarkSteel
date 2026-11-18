// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 3

// ~IMediaOverlaySample @ 14ea97fb0

void __thiscall IMediaOverlaySample::~IMediaOverlaySample(IMediaOverlaySample *this)

{
  *this = (IMediaOverlaySample)&___7IMediaOverlaySample__6B_;
  return;
}

// GetGUID @ 14eaad710

FGuid * __thiscall
IMediaOverlaySample::GetGUID(IMediaOverlaySample *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14eab07d0

TOptional<FTimecode> * __thiscall
IMediaOverlaySample::GetTimecode
          (IMediaOverlaySample *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

