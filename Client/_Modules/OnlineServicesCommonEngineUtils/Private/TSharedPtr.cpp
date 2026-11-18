// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// operator= @ 14f0050b0

TSharedPtr<UE::Online::FSessionLAN,1> * __thiscall
TSharedPtr<UE::Online::FSessionLAN,1>::operator=
          (TSharedPtr<UE::Online::FSessionLAN,1> *this,
          TSharedPtr<UE::Online::FSessionLAN,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FSessionLAN *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

