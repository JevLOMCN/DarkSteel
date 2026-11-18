// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// ~FInterfaces @ 1459accd0

void __thiscall FD3D12CommandList::FInterfaces::~FInterfaces(FInterfaces *this)

{
  ID3D12DebugCommandList *pIVar1;
  ID3D12GraphicsCommandList10 *pIVar2;
  ID3D12GraphicsCommandList9 *pIVar3;
  ID3D12GraphicsCommandList8 *pIVar4;
  ID3D12GraphicsCommandList7 *pIVar5;
  ID3D12GraphicsCommandList6 *pIVar6;
  ID3D12GraphicsCommandList5 *pIVar7;
  ID3D12GraphicsCommandList4 *pIVar8;
  ID3D12GraphicsCommandList3 *pIVar9;
  ID3D12GraphicsCommandList2 *pIVar10;
  ID3D12GraphicsCommandList1 *pIVar11;
  ID3D12GraphicsCommandList *pIVar12;
  ID3D12CommandList *pIVar13;
  
  pIVar1 = (this->DebugCommandList).Reference;
  if (pIVar1 != (ID3D12DebugCommandList *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar2 = (this->GraphicsCommandList10).Reference;
  if (pIVar2 != (ID3D12GraphicsCommandList10 *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar3 = (this->GraphicsCommandList9).Reference;
  if (pIVar3 != (ID3D12GraphicsCommandList9 *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar4 = (this->GraphicsCommandList8).Reference;
  if (pIVar4 != (ID3D12GraphicsCommandList8 *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar5 = (this->GraphicsCommandList7).Reference;
  if (pIVar5 != (ID3D12GraphicsCommandList7 *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar6 = (this->GraphicsCommandList6).Reference;
  if (pIVar6 != (ID3D12GraphicsCommandList6 *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pIVar7 = (this->GraphicsCommandList5).Reference;
  if (pIVar7 != (ID3D12GraphicsCommandList5 *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pIVar8 = (this->GraphicsCommandList4).Reference;
  if (pIVar8 != (ID3D12GraphicsCommandList4 *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar9 = (this->GraphicsCommandList3).Reference;
  if (pIVar9 != (ID3D12GraphicsCommandList3 *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar10 = (this->GraphicsCommandList2).Reference;
  if (pIVar10 != (ID3D12GraphicsCommandList2 *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  pIVar11 = (this->GraphicsCommandList1).Reference;
  if (pIVar11 != (ID3D12GraphicsCommandList1 *)0x0) {
    (**(code **)((longlong)*pIVar11 + 0x10))();
  }
  pIVar12 = (this->GraphicsCommandList).Reference;
  if (pIVar12 != (ID3D12GraphicsCommandList *)0x0) {
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
  pIVar12 = (this->CopyCommandList).Reference;
  if (pIVar12 != (ID3D12GraphicsCommandList *)0x0) {
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
  pIVar13 = (this->CommandList).Reference;
  if (pIVar13 != (ID3D12CommandList *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459acdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar13 + 0x10))();
    return;
  }
  return;
}

