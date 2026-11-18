// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// operator= @ 14596fac0

FD3D11Adapter * __thiscall FD3D11Adapter::operator=(FD3D11Adapter *this,FD3D11Adapter *param_1)

{
  IDXGIAdapter *pIVar1;
  IDXGIAdapter *pIVar2;
  undefined8 uVar3;
  DXGI_ADAPTER_DESC *pDVar4;
  DXGI_ADAPTER_DESC *pDVar5;
  DXGI_ADAPTER_DESC *pDVar6;
  DXGI_ADAPTER_DESC *pDVar7;
  longlong lVar8;
  
  pIVar1 = (param_1->DXGIAdapter).Reference;
  pIVar2 = (this->DXGIAdapter).Reference;
  if (pIVar2 != pIVar1) {
    (this->DXGIAdapter).Reference = pIVar1;
    if (pIVar1 != (IDXGIAdapter *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))();
    }
    if (pIVar2 != (IDXGIAdapter *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  lVar8 = 2;
  pDVar4 = &param_1->DXGIAdapterDesc;
  pDVar5 = &this->DXGIAdapterDesc;
  do {
    pDVar7 = pDVar5;
    pDVar6 = pDVar4;
    uVar3 = *(undefined8 *)(pDVar6->Description + 4);
    *(undefined8 *)pDVar7->Description = *(undefined8 *)pDVar6->Description;
    *(undefined8 *)(pDVar7->Description + 4) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0xc);
    *(undefined8 *)(pDVar7->Description + 8) = *(undefined8 *)(pDVar6->Description + 8);
    *(undefined8 *)(pDVar7->Description + 0xc) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x14);
    *(undefined8 *)(pDVar7->Description + 0x10) = *(undefined8 *)(pDVar6->Description + 0x10);
    *(undefined8 *)(pDVar7->Description + 0x14) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x1c);
    *(undefined8 *)(pDVar7->Description + 0x18) = *(undefined8 *)(pDVar6->Description + 0x18);
    *(undefined8 *)(pDVar7->Description + 0x1c) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x24);
    *(undefined8 *)(pDVar7->Description + 0x20) = *(undefined8 *)(pDVar6->Description + 0x20);
    *(undefined8 *)(pDVar7->Description + 0x24) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x2c);
    *(undefined8 *)(pDVar7->Description + 0x28) = *(undefined8 *)(pDVar6->Description + 0x28);
    *(undefined8 *)(pDVar7->Description + 0x2c) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x34);
    *(undefined8 *)(pDVar7->Description + 0x30) = *(undefined8 *)(pDVar6->Description + 0x30);
    *(undefined8 *)(pDVar7->Description + 0x34) = uVar3;
    uVar3 = *(undefined8 *)(pDVar6->Description + 0x3c);
    *(undefined8 *)(pDVar7->Description + 0x38) = *(undefined8 *)(pDVar6->Description + 0x38);
    *(undefined8 *)(pDVar7->Description + 0x3c) = uVar3;
    lVar8 = lVar8 + -1;
    pDVar4 = (DXGI_ADAPTER_DESC *)(pDVar6->Description + 0x40);
    pDVar5 = (DXGI_ADAPTER_DESC *)(pDVar7->Description + 0x40);
  } while (lVar8 != 0);
  uVar3 = *(undefined8 *)(pDVar6->Description + 0x44);
  *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar7->Description + 0x40))->Description =
       *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar6->Description + 0x40))->Description;
  *(undefined8 *)(pDVar7->Description + 0x44) = uVar3;
  uVar3 = *(undefined8 *)(pDVar6->Description + 0x4c);
  *(undefined8 *)(pDVar7->Description + 0x48) = *(undefined8 *)(pDVar6->Description + 0x48);
  *(undefined8 *)(pDVar7->Description + 0x4c) = uVar3;
  uVar3 = *(undefined8 *)(pDVar6->Description + 0x54);
  *(undefined8 *)(pDVar7->Description + 0x50) = *(undefined8 *)(pDVar6->Description + 0x50);
  *(undefined8 *)(pDVar7->Description + 0x54) = uVar3;
  this->MaxSupportedFeatureLevel = param_1->MaxSupportedFeatureLevel;
  this->bSoftwareAdapter = param_1->bSoftwareAdapter;
  this->bUMA = param_1->bUMA;
  return this;
}

