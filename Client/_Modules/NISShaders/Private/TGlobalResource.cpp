// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISShaders
// Functions: 1

// ~TGlobalResource<FNISCoefficients,1> @ 14de4bd80

void __thiscall
TGlobalResource<FNISCoefficients,1>::~TGlobalResource<FNISCoefficients,1>
          (TGlobalResource<FNISCoefficients,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_UFNISCoefficients___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

