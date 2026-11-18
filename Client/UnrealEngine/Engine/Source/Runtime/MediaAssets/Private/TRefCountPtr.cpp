// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// operator= @ 146c1eee0

TRefCountPtr<FRHITexture> * __thiscall
TRefCountPtr<FRHITexture>::operator=
          (TRefCountPtr<FRHITexture> *this,TRefCountPtr<FRHITexture> *param_1)

{
  FRHITexture *this_00;
  
  if (this != param_1) {
    this_00 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRHITexture *)0x0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}

