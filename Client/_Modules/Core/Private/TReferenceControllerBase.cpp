// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~TReferenceControllerBase<1> @ 141480590

void __thiscall
SharedPointerInternals::TReferenceControllerBase<1>::~TReferenceControllerBase<1>
          (TReferenceControllerBase<1> *this)

{
  this->_padding_ = (longlong)vftable;
  return;
}

// ReleaseSharedReferenceNoInline @ 1414ad410

void __cdecl
SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
          (TReferenceControllerBase<1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  if (param_1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &param_1->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)param_1->_padding_)();
      LOCK();
      paVar1 = &param_1->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(param_1->_padding_ + 8))(param_1,1);
      }
    }
  }
  return;
}

