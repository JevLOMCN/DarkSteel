// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~FBufferOwner @ 141816a10

void __thiscall FBufferOwner::~FBufferOwner(FBufferOwner *this)

{
  this->_padding_ = (longlong)&___7FBufferOwner__6B_;
  return;
}

// MaterializeBuffer @ 14182c930

void __thiscall FBufferOwner::MaterializeBuffer(FBufferOwner *this)

{
  LOCK();
  this->ReferenceCountsAndFlags =
       (atomic<unsigned___int64>)((ulonglong)this->ReferenceCountsAndFlags | 0x4000000000000000);
  UNLOCK();
  return;
}

// GetData @ 141c93fe0

void * __thiscall FBufferOwner::GetData(FBufferOwner *this)

{
  if (((ulonglong)this->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
    (**(code **)(this->_padding_ + 8))();
    return this->Data;
  }
  return this->Data;
}

// GetSize @ 141c94020

ulong64 __thiscall FBufferOwner::GetSize(FBufferOwner *this)

{
  if (((ulonglong)this->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
    (**(code **)(this->_padding_ + 8))();
    return this->Size;
  }
  return this->Size;
}

