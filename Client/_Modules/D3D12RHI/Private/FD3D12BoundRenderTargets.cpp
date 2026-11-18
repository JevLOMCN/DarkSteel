// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12BoundRenderTargets @ 145a8ea80

FD3D12BoundRenderTargets * __thiscall
FD3D12BoundRenderTargets::FD3D12BoundRenderTargets
          (FD3D12BoundRenderTargets *this,FD3D12RenderTargetView **param_1,uint param_2,
          FD3D12DepthStencilView *param_3)

{
  FD3D12RenderTargetView *pFVar1;
  
  pFVar1 = param_1[1];
  this->RenderTargetViews[0] = *param_1;
  this->RenderTargetViews[1] = pFVar1;
  pFVar1 = param_1[3];
  this->RenderTargetViews[2] = param_1[2];
  this->RenderTargetViews[3] = pFVar1;
  pFVar1 = param_1[5];
  this->RenderTargetViews[4] = param_1[4];
  this->RenderTargetViews[5] = pFVar1;
  pFVar1 = param_1[7];
  this->RenderTargetViews[6] = param_1[6];
  this->RenderTargetViews[7] = pFVar1;
  this->DepthStencilView = param_3;
  this->NumActiveTargets = param_2;
  return this;
}

// ~FD3D12BoundRenderTargets @ 145a94980

void __thiscall FD3D12BoundRenderTargets::~FD3D12BoundRenderTargets(FD3D12BoundRenderTargets *this)

{
  return;
}

