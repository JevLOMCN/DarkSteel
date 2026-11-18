// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FPoolEntry @ 1459acdc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12LocalOnlineHeap::FPoolEntry::~FPoolEntry(FPoolEntry *this)

{
  longlong *plVar1;
  FD3D12SyncPoint *pFVar2;
  FD3D12DescriptorHeap *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->SyncPoint).Reference;
  if (pFVar2 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->Heap).Reference;
  if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// operator= @ 1459ad190

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FPoolEntry * __thiscall
FD3D12LocalOnlineHeap::FPoolEntry::operator=(FPoolEntry *this,FPoolEntry *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FD3D12SyncPoint> *pTVar2;
  longlong lVar3;
  FD3D12DescriptorHeap *pFVar4;
  TRefCountPtr<FD3D12SyncPoint> *pTVar5;
  
  if (this != param_1) {
    pFVar4 = (this->Heap).Reference;
    (this->Heap).Reference = (param_1->Heap).Reference;
    (param_1->Heap).Reference = (FD3D12DescriptorHeap *)0x0;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar4 = (FD3D12DescriptorHeap *)0x0;
        }
        if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  pTVar5 = &param_1->SyncPoint;
  pTVar2 = &this->SyncPoint;
  if (pTVar2 != pTVar5) {
    pFVar4 = (FD3D12DescriptorHeap *)pTVar2->Reference;
    pTVar2->Reference = pTVar5->Reference;
    pTVar5->Reference = (FD3D12SyncPoint *)0x0;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar4 = (FD3D12DescriptorHeap *)0x0;
        }
        if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  return this;
}

