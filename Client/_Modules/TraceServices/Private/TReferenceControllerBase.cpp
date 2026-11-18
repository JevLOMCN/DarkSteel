// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ReleaseSharedReference @ 14d400770

void __thiscall
SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReference
          (TReferenceControllerBase<1> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  LOCK();
  paVar1 = &this->SharedReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)this->_padding_)();
    LOCK();
    paVar1 = &this->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(this->_padding_ + 8))(this,1);
    }
  }
  return;
}

