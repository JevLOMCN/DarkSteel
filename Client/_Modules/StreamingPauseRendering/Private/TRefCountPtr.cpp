// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 1

// TRefCountPtr<FRHITexture> @ 146c82600

TRefCountPtr<FRHITexture> * __thiscall
TRefCountPtr<FRHITexture>::TRefCountPtr<FRHITexture>
          (TRefCountPtr<FRHITexture> *this,TRefCountPtr<FRHITexture> *param_1)

{
  FRHITexture *this_00;
  
  this->Reference = (FRHITexture *)0x0;
  this_00 = param_1->Reference;
  this->Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  return this;
}

