// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 2

// FD3D11BoundRenderTargets @ 14596b290

FD3D11BoundRenderTargets * __thiscall
FD3D11BoundRenderTargets::FD3D11BoundRenderTargets
          (FD3D11BoundRenderTargets *this,ID3D11DeviceContext *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  this->RenderTargetViews[0] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[1] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[2] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[3] = (ID3D11RenderTargetView *)0x0;
  uVar2 = 8;
  this->RenderTargetViews[4] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[5] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[6] = (ID3D11RenderTargetView *)0x0;
  this->RenderTargetViews[7] = (ID3D11RenderTargetView *)0x0;
  this->DepthStencilView = (ID3D11DepthStencilView *)0x0;
  (**(code **)((longlong)*param_1 + 0x2c8))(param_1,8,this);
  this->NumActiveTargets = 8;
  do {
    if (this->RenderTargetViews[uVar2 - 1] != (ID3D11RenderTargetView *)0x0) {
      return this;
    }
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    this->NumActiveTargets = uVar1;
  } while (0 < (int)uVar1);
  return this;
}

// ~FD3D11BoundRenderTargets @ 14596e980

void __thiscall FD3D11BoundRenderTargets::~FD3D11BoundRenderTargets(FD3D11BoundRenderTargets *this)

{
  FD3D11BoundRenderTargets *pFVar1;
  int iVar2;
  
  iVar2 = 0;
  pFVar1 = this;
  if (0 < this->NumActiveTargets) {
    do {
      if (pFVar1->RenderTargetViews[0] != (ID3D11RenderTargetView *)0x0) {
        (**(code **)((longlong)*pFVar1->RenderTargetViews[0] + 0x10))();
      }
      iVar2 = iVar2 + 1;
      pFVar1 = (FD3D11BoundRenderTargets *)(pFVar1->RenderTargetViews + 1);
    } while (iVar2 < this->NumActiveTargets);
  }
  if (this->DepthStencilView == (ID3D11DepthStencilView *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014596e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->DepthStencilView + 0x10))();
  return;
}

