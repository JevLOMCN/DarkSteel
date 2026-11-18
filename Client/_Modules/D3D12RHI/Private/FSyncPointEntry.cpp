// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// operator= @ 1459ad250

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FSyncPointEntry * __thiscall
FD3D12LocalOnlineHeap::FSyncPointEntry::operator=(FSyncPointEntry *this,FSyncPointEntry *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FD3D12SyncPoint *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->SyncPoint).Reference;
    (this->SyncPoint).Reference = (param_1->SyncPoint).Reference;
    (param_1->SyncPoint).Reference = (FD3D12SyncPoint *)0x0;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar3 = (FD3D12SyncPoint *)0x0;
        }
        if (pFVar3 != (FD3D12SyncPoint *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  this->LastSlotInUse = param_1->LastSlotInUse;
  return this;
}

