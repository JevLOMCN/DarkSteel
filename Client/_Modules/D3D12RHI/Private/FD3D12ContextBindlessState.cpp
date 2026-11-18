// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// ~FD3D12ContextBindlessState @ 1459ac550

void __thiscall
FD3D12ContextBindlessState::~FD3D12ContextBindlessState(FD3D12ContextBindlessState *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  
  if (this->bRefreshHeap != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRefreshHeap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.h"
                       ,0x7d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->CurrentGpuHeap).Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459ac5b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

