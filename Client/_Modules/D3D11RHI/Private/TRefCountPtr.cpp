// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 8

// TRefCountPtr<ID3D11DepthStencilView> @ 14596b060

TRefCountPtr<ID3D11DepthStencilView> * __thiscall
TRefCountPtr<ID3D11DepthStencilView>::TRefCountPtr<ID3D11DepthStencilView>
          (TRefCountPtr<ID3D11DepthStencilView> *this)

{
  this->Reference = (ID3D11DepthStencilView *)0x0;
  return this;
}

// TRefCountPtr<ID3D11RenderTargetView> @ 14596b080

TRefCountPtr<ID3D11RenderTargetView> * __thiscall
TRefCountPtr<ID3D11RenderTargetView>::TRefCountPtr<ID3D11RenderTargetView>
          (TRefCountPtr<ID3D11RenderTargetView> *this)

{
  this->Reference = (ID3D11RenderTargetView *)0x0;
  return this;
}

// TRefCountPtr<FD3D11UnorderedAccessView> @ 14596b0a0

TRefCountPtr<FD3D11UnorderedAccessView> * __thiscall
TRefCountPtr<FD3D11UnorderedAccessView>::TRefCountPtr<FD3D11UnorderedAccessView>
          (TRefCountPtr<FD3D11UnorderedAccessView> *this)

{
  this->Reference = (FD3D11UnorderedAccessView *)0x0;
  return this;
}

// TRefCountPtr<FRHIBoundShaderState> @ 14596b0c0

TRefCountPtr<FRHIBoundShaderState> * __thiscall
TRefCountPtr<FRHIBoundShaderState>::TRefCountPtr<FRHIBoundShaderState>
          (TRefCountPtr<FRHIBoundShaderState> *this)

{
  this->Reference = (FRHIBoundShaderState *)0x0;
  return this;
}

// ~TRefCountPtr<ID3D11DepthStencilView> @ 14596e720

void __thiscall
TRefCountPtr<ID3D11DepthStencilView>::~TRefCountPtr<ID3D11DepthStencilView>
          (TRefCountPtr<ID3D11DepthStencilView> *this)

{
  if (this->Reference != (ID3D11DepthStencilView *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014596e72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Reference + 0x10))();
    return;
  }
  return;
}

// ~TRefCountPtr<ID3D11RenderTargetView> @ 14596e740

void __thiscall
TRefCountPtr<ID3D11RenderTargetView>::~TRefCountPtr<ID3D11RenderTargetView>
          (TRefCountPtr<ID3D11RenderTargetView> *this)

{
  if (this->Reference != (ID3D11RenderTargetView *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014596e74b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Reference + 0x10))();
    return;
  }
  return;
}

// ~TRefCountPtr<FD3D11UnorderedAccessView> @ 14596e760

void __thiscall
TRefCountPtr<FD3D11UnorderedAccessView>::~TRefCountPtr<FD3D11UnorderedAccessView>
          (TRefCountPtr<FD3D11UnorderedAccessView> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FD3D11UnorderedAccessView *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FD3D11UnorderedAccessView *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// ~TRefCountPtr<FRHIBoundShaderState> @ 14596e780

void __thiscall
TRefCountPtr<FRHIBoundShaderState>::~TRefCountPtr<FRHIBoundShaderState>
          (TRefCountPtr<FRHIBoundShaderState> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = (FRHIResource *)this->Reference;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

