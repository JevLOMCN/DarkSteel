// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FTypedElementHandle @ 147b3d2c0

void __thiscall FTypedElementHandle::~FTypedElementHandle(FTypedElementHandle *this)

{
  if (this->DataPtr != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(this->DataPtr,this->ReferenceId);
  }
  this->ReferenceId = -1;
  this->DataPtr = (FTypedElementInternalData *)0x0;
  return;
}

