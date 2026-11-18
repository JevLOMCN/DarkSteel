// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~TD3D12ObjectPool<FD3D12QueryHeap> @ 1459f6100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TD3D12ObjectPool<FD3D12QueryHeap>::~TD3D12ObjectPool<FD3D12QueryHeap>
          (TD3D12ObjectPool<FD3D12QueryHeap> *this)

{
  atomic<void_*> this_00;
  uint uVar1;
  
  while( true ) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar1 == 0) break;
    this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    if (this_00 == (atomic<void_*>)0x0) break;
    FD3D12QueryHeap::~FD3D12QueryHeap((FD3D12QueryHeap *)this_00);
    ::operator_delete((void *)this_00,0x488);
  }
  FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>::
  ~FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>
            ((FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1> *)this);
  return;
}

// CleanupResources @ 145a06990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TD3D12ObjectPool<FD3D12CommandAllocator>::CleanupResources
          (TD3D12ObjectPool<FD3D12CommandAllocator> *this)

{
  atomic<void_*> this_00;
  uint uVar1;
  
  while( true ) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar1 == 0) {
      return;
    }
    this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    if (this_00 == (atomic<void_*>)0x0) break;
    FD3D12CommandAllocator::~FD3D12CommandAllocator((FD3D12CommandAllocator *)this_00);
    ::operator_delete((void *)this_00,0x18);
  }
  return;
}

// CleanupResources @ 145a06a10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TD3D12ObjectPool<FD3D12CommandList>::CleanupResources(TD3D12ObjectPool<FD3D12CommandList> *this)

{
  atomic<void_*> this_00;
  uint uVar1;
  
  while( true ) {
    uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar1 == 0) {
      return;
    }
    this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
    if (this_00 == (atomic<void_*>)0x0) break;
    FD3D12CommandList::~FD3D12CommandList((FD3D12CommandList *)this_00);
    ::operator_delete((void *)this_00,0x1d8);
  }
  return;
}

// CleanupResources @ 145a06a90

void __thiscall
TD3D12ObjectPool<FD3D12ContextCommon>::CleanupResources(TD3D12ObjectPool<FD3D12ContextCommon> *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  return;
}

