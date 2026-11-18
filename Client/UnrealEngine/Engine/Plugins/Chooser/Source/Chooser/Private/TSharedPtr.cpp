// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// operator= @ 14a87eda0

TSharedPtr<UE::Chooser::FCompiledBinding,1> * __thiscall
TSharedPtr<UE::Chooser::FCompiledBinding,1>::operator=
          (TSharedPtr<UE::Chooser::FCompiledBinding,1> *this,
          TSharedPtr<UE::Chooser::FCompiledBinding,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FCompiledBinding *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

