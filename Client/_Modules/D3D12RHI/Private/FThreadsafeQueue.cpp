// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> @ 1459a7400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> * __thiscall
FThreadsafeQueue<FD3D12BlockAllocatorPrivateData>::FThreadsafeQueue<FD3D12BlockAllocatorPrivateData>
          (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *this)

{
  TNode *pTVar1;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).FrameFence = 0;
    (pTVar1->Item).BucketIndex = 0;
    (pTVar1->Item).Offset = 0;
    (pTVar1->Item).ResourceHeap = (FD3D12Resource *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
  }
  (this->Items).Tail = pTVar1;
  (this->Items).Head = pTVar1;
  this->Size = 0;
  return this;
}

// ~FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> @ 1459aaee0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FThreadsafeQueue<FD3D12BlockAllocatorPrivateData>::
~FThreadsafeQueue<FD3D12BlockAllocatorPrivateData>
          (FThreadsafeQueue<FD3D12BlockAllocatorPrivateData> *this)

{
  TNode *pTVar1;
  
  pTVar1 = (this->Items).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->Items).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x20);
    pTVar1 = (this->Items).Tail;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459aaf25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

