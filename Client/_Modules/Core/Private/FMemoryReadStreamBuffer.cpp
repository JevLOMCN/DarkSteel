// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FMemoryReadStreamBuffer @ 1418beec0

void __thiscall FMemoryReadStreamBuffer::~FMemoryReadStreamBuffer(FMemoryReadStreamBuffer *this)

{
  this->_padding_ = (longlong)&___7FMemoryReadStreamBuffer__6B_;
  if (this->OwnsPointer != false) {
    FMemory::Free(this->Memory);
    this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
  return;
}

// GetSize @ 1418e17b0

long64 __thiscall FMemoryReadStreamBuffer::GetSize(FMemoryReadStreamBuffer *this)

{
  return this->Size;
}

// Read @ 1418f0fd0

void * __thiscall
FMemoryReadStreamBuffer::Read
          (FMemoryReadStreamBuffer *this,long64 *param_1,long64 param_2,long64 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = this->Size;
  lVar3 = lVar1;
  if (param_2 < lVar1) {
    lVar3 = param_2;
  }
  lVar2 = lVar1 - lVar3;
  if (param_3 < lVar1 - lVar3) {
    lVar2 = param_3;
  }
  *param_1 = lVar2;
  return (void *)((longlong)this->Memory + lVar3);
}

