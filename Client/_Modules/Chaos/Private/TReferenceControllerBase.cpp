// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~TReferenceControllerBase<0> @ 14406a950

void __thiscall
SharedPointerInternals::TReferenceControllerBase<0>::~TReferenceControllerBase<0>
          (TReferenceControllerBase<0> *this)

{
  this->_padding_ = (longlong)&___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  return;
}

// ReleaseSharedReferenceNoInline @ 1440a06a0

void __cdecl
SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
          (TReferenceControllerBase<0> *param_1)

{
  int *piVar1;
  
  if (param_1 != (TReferenceControllerBase<0> *)0x0) {
    piVar1 = &param_1->SharedReferenceCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)param_1->_padding_)();
      piVar1 = &param_1->WeakReferenceCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(param_1->_padding_ + 8))(param_1,1);
      }
    }
  }
  return;
}

