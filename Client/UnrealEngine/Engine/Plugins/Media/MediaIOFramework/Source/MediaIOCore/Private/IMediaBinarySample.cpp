// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// ~IMediaBinarySample @ 14d78ce60

void __thiscall IMediaBinarySample::~IMediaBinarySample(IMediaBinarySample *this)

{
  *this = (IMediaBinarySample)&___7IMediaBinarySample__6B_;
  return;
}

// GetGUID @ 14d7aad00

FGuid * __thiscall
IMediaBinarySample::GetGUID(IMediaBinarySample *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14d7ae750

TOptional<FTimecode> * __thiscall
IMediaBinarySample::GetTimecode
          (IMediaBinarySample *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

