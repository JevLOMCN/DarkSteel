// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FD3D12FastAllocatorPage @ 1459ac8b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12FastAllocatorPage::~FD3D12FastAllocatorPage(FD3D12FastAllocatorPage *this)

{
  longlong *plVar1;
  FD3D12Resource *pFVar2;
  longlong lVar3;
  
  MemoryTrace_Free(((this->FastAllocBuffer).Reference)->GPUVirtualAddress,1,0);
  pFVar2 = (this->FastAllocBuffer).Reference;
  if (pFVar2 != (FD3D12Resource *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459ac8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// UpdateFence @ 1459de040

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12FastAllocatorPage::UpdateFence(FD3D12FastAllocatorPage *this)

{
  FD3D12Resource *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  pFVar1 = (this->FastAllocBuffer).Reference;
  if (pFVar1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = pFVar1->_padding_;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(lVar2 + 0x548) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameFence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0xff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (ulonglong)(*(int *)(*(longlong *)(lVar2 + 0x548) + 0x58) + 1);
  if (uVar5 < this->FrameFence) {
    uVar5 = this->FrameFence;
  }
  this->FrameFence = uVar5;
  return;
}

