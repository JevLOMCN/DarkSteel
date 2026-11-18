// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// operator= @ 145feb880

TRefCountPtr<FRHIViewport> * __thiscall
TRefCountPtr<FRHIViewport>::operator=
          (TRefCountPtr<FRHIViewport> *this,TRefCountPtr<FRHIViewport> *param_1)

{
  FRHIResource *this_00;
  
  if (this != param_1) {
    this_00 = (FRHIResource *)this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRHIViewport *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return this;
}

