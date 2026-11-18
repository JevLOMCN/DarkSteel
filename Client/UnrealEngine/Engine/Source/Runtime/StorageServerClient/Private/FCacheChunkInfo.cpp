// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// operator= @ 148cb6df0

FCacheChunkInfo * __thiscall
StorageServer::FCacheChunkInfo::operator=(FCacheChunkInfo *this,FCacheChunkInfo *param_1)

{
  if (param_1 != this) {
    if ((param_1->ModTag).bIsSet == false) {
      if ((this->ModTag).bIsSet != false) {
        (this->ModTag).bIsSet = false;
      }
    }
    else {
      (this->ModTag).TypedValue = (param_1->ModTag).TypedValue;
      (this->ModTag).bIsSet = true;
    }
  }
  if (&param_1->RawSize != &this->RawSize) {
    if ((param_1->RawSize).bIsSet == false) {
      if ((this->RawSize).bIsSet != false) {
        (this->RawSize).bIsSet = false;
      }
    }
    else {
      (this->RawSize).TypedValue = (param_1->RawSize).TypedValue;
      (this->RawSize).bIsSet = true;
    }
  }
  if (&param_1->RawBlockSize != &this->RawBlockSize) {
    if ((param_1->RawBlockSize).bIsSet == false) {
      if ((this->RawBlockSize).bIsSet != false) {
        (this->RawBlockSize).bIsSet = false;
        return this;
      }
    }
    else {
      (this->RawBlockSize).TypedValue = (param_1->RawBlockSize).TypedValue;
      (this->RawBlockSize).bIsSet = true;
    }
  }
  return this;
}

