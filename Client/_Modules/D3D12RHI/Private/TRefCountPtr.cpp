// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// TRefCountPtr<FD3D12SyncPoint> @ 1459a7460

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12SyncPoint> * __thiscall
TRefCountPtr<FD3D12SyncPoint>::TRefCountPtr<FD3D12SyncPoint>
          (TRefCountPtr<FD3D12SyncPoint> *this,TRefCountPtr<FD3D12SyncPoint> *param_1)

{
  this->Reference = (FD3D12SyncPoint *)0x0;
  this->Reference = param_1->Reference;
  param_1->Reference = (FD3D12SyncPoint *)0x0;
  return this;
}

// TRefCountPtr<FD3D12SyncPoint> @ 1459a7480

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TRefCountPtr<FD3D12SyncPoint> * __thiscall
TRefCountPtr<FD3D12SyncPoint>::TRefCountPtr<FD3D12SyncPoint>(TRefCountPtr<FD3D12SyncPoint> *this)

{
  this->Reference = (FD3D12SyncPoint *)0x0;
  return this;
}

// ~TRefCountPtr<FD3D12SyncPoint> @ 1459ab0b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TRefCountPtr<FD3D12SyncPoint>::~TRefCountPtr<FD3D12SyncPoint>(TRefCountPtr<FD3D12SyncPoint> *this)

{
  longlong *plVar1;
  FD3D12SyncPoint *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459ab0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// TRefCountPtr<FD3D12DescriptorHeap> @ 1459ecf60

TRefCountPtr<FD3D12DescriptorHeap> * __thiscall
TRefCountPtr<FD3D12DescriptorHeap>::TRefCountPtr<FD3D12DescriptorHeap>
          (TRefCountPtr<FD3D12DescriptorHeap> *this)

{
  this->Reference = (FD3D12DescriptorHeap *)0x0;
  return this;
}

// TRefCountPtr<FD3D12Buffer> @ 1459ecf80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TRefCountPtr<FD3D12Buffer> * __thiscall
TRefCountPtr<FD3D12Buffer>::TRefCountPtr<FD3D12Buffer>(TRefCountPtr<FD3D12Buffer> *this)

{
  this->Reference = (FD3D12Buffer *)0x0;
  return this;
}

// ~TRefCountPtr<FD3D12DescriptorHeap> @ 1459f62f0

void __thiscall
TRefCountPtr<FD3D12DescriptorHeap>::~TRefCountPtr<FD3D12DescriptorHeap>
          (TRefCountPtr<FD3D12DescriptorHeap> *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459f6317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// ~TRefCountPtr<FD3D12Buffer> @ 1459f6330

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRefCountPtr<FD3D12Buffer>::~TRefCountPtr<FD3D12Buffer>(TRefCountPtr<FD3D12Buffer> *this)

{
  if (this->Reference != (FD3D12Buffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459f6342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->Reference->_padding_ + 0x10))();
    return;
  }
  return;
}

// ~TRefCountPtr<FD3D12QueryHeap> @ 1459f6350

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TRefCountPtr<FD3D12QueryHeap>::~TRefCountPtr<FD3D12QueryHeap>(TRefCountPtr<FD3D12QueryHeap> *this)

{
  int iVar1;
  atomic<void_*> aVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  FIndexedLockFreeLink *pFVar6;
  
  aVar2 = (atomic<void_*>)this->Reference;
  if (aVar2 != (atomic<void_*>)0x0) {
    LOCK();
    lVar3 = (longlong)aVar2 + 0x480;
    iVar1 = *(int *)lVar3;
    *(int *)lVar3 = *(int *)lVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar3 = *(longlong *)((longlong)aVar2 + 0x10);
      uVar4 = GetQueryHeapPoolIndex(*(D3D12_QUERY_HEAP_TYPE *)((longlong)aVar2 + 0x1c));
      uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar5 == 0) {
        pFVar6 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + (uVar5 & 0x3fff);
      }
      pFVar6->Payload = aVar2;
      FLockFreePointerListLIFORoot<64,1>::Push
                ((FLockFreePointerListLIFORoot<64,1> *)(lVar3 + 0xa40 + (ulonglong)uVar4 * 0x40),
                 uVar5);
    }
  }
  return;
}

