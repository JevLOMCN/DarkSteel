// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 6

// ~TRefCountPtr<ID3D11Device> @ 14ea96bf0

void __thiscall
TRefCountPtr<ID3D11Device>::~TRefCountPtr<ID3D11Device>(TRefCountPtr<ID3D11Device> *this)

{
  if (this->Reference != (ID3D11Device *)0x0) {
    (**(code **)((longlong)*this->Reference + 0x10))();
  }
  return;
}

// ~TRefCountPtr<IDXGIAdapter> @ 14ea96c10

void __thiscall
TRefCountPtr<IDXGIAdapter>::~TRefCountPtr<IDXGIAdapter>(TRefCountPtr<IDXGIAdapter> *this)

{
  if (this->Reference != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*this->Reference + 0x10))();
  }
  return;
}

// ~TRefCountPtr<FRHIBlendState> @ 14ea96c30

void __thiscall
TRefCountPtr<FRHIBlendState>::~TRefCountPtr<FRHIBlendState>(TRefCountPtr<FRHIBlendState> *this)

{
  if ((FRHIResource *)this->Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->Reference);
  }
  return;
}

// ~TRefCountPtr<FRHIDepthStencilState> @ 14ea96c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRefCountPtr<FRHIDepthStencilState>::~TRefCountPtr<FRHIDepthStencilState>
          (TRefCountPtr<FRHIDepthStencilState> *this)

{
  if (this->Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release((FRHIResource *)this->Reference);
  }
  return;
}

// ~TRefCountPtr<FRHIRasterizerState> @ 14ea96c70

void __thiscall
TRefCountPtr<FRHIRasterizerState>::~TRefCountPtr<FRHIRasterizerState>
          (TRefCountPtr<FRHIRasterizerState> *this)

{
  if ((FRHIResource *)this->Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->Reference);
  }
  return;
}

// ~TRefCountPtr<FRHISamplerState> @ 14ea96c90

void __thiscall
TRefCountPtr<FRHISamplerState>::~TRefCountPtr<FRHISamplerState>
          (TRefCountPtr<FRHISamplerState> *this)

{
  if ((FRHIResource *)this->Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->Reference);
  }
  return;
}

