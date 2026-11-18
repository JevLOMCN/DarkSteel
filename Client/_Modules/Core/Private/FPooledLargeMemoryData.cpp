// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FPooledLargeMemoryData @ 1419ce720

FPooledLargeMemoryData * __thiscall
FPooledLargeMemoryData::FPooledLargeMemoryData(FPooledLargeMemoryData *this)

{
  FPooledLargeMemoryData *local_res8 [4];
  
  local_res8[0] = this;
  `FPooledLargeMemoryData::FPooledLargeMemoryData'::__l2::<lambda_1>::operator()(local_res8);
  return this;
}

// ~FPooledLargeMemoryData @ 1419d2bc0

void __thiscall FPooledLargeMemoryData::~FPooledLargeMemoryData(FPooledLargeMemoryData *this)

{
  FLargeMemoryData *local_res8 [4];
  
  local_res8[0] = this->Data;
  `FPooledLargeMemoryData::~FPooledLargeMemoryData'::__l2::<lambda_1>::operator()(local_res8);
  return;
}

// operator() @ 1419d5e50

void __thiscall
`FPooledLargeMemoryData::FPooledLargeMemoryData'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  void *pvVar4;
  atomic<void_*> aVar5;
  
  uVar1 = FLockFreePointerListLIFORoot<0,1>::Pop
                    ((FLockFreePointerListLIFORoot<0,1> *)&FPooledLargeMemoryData::FreeList);
  aVar5 = (atomic<void_*>)0x0;
  if (uVar1 != 0) {
    aVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
  }
  **(atomic<void_*> **)this = aVar5;
  if (**(longlong **)this != 0) {
    LOCK();
    FPooledLargeMemoryData::FreeListLength =
         (atomic<int>)((int)FPooledLargeMemoryData::FreeListLength + -1);
    UNLOCK();
    return;
  }
  puVar2 = ::operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    **(undefined8 **)this = 0;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar3 = FMemory::QuantizeSize(0x10,0);
  if ((longlong)uVar3 < 0x10000) {
    uVar3 = 0x10000;
  }
  puVar2[2] = uVar3;
  if ((void *)*puVar2 != (void *)0x0) {
    pvVar4 = FMemory::Realloc((void *)*puVar2,uVar3,0);
    *puVar2 = pvVar4;
    **(undefined8 **)this = puVar2;
    return;
  }
  pvVar4 = FMemory::Malloc(uVar3,0);
  *puVar2 = pvVar4;
  **(undefined8 **)this = puVar2;
  return;
}

// operator() @ 1419d5f60

void __thiscall
`FPooledLargeMemoryData::~FPooledLargeMemoryData'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<void_*> aVar1;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  
  aVar1 = *(atomic<void_*> *)this;
  if (*(longlong *)((longlong)aVar1 + 8) < 0x20001) {
    LOCK();
    UNLOCK();
    if ((int)FPooledLargeMemoryData::FreeListLength < GPooledLargeMemoryData_MaxPoolLength) {
      FPooledLargeMemoryData::FreeListLength =
           (atomic<int>)((int)FPooledLargeMemoryData::FreeListLength + 1);
      uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar2 == 0) {
        pFVar3 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
      }
      pFVar3->Payload = aVar1;
      FLockFreePointerListLIFORoot<0,1>::Push
                ((FLockFreePointerListLIFORoot<0,1> *)&FPooledLargeMemoryData::FreeList,uVar2);
      return;
    }
    LOCK();
    UNLOCK();
  }
  if (aVar1 != (atomic<void_*>)0x0) {
    if (*(void **)aVar1 != (void *)0x0) {
      FMemory::Free(*(void **)aVar1);
    }
    ::operator_delete((void *)aVar1,0x18);
    return;
  }
  return;
}

// Free @ 1419fb750

void __cdecl FPooledLargeMemoryData::Free(FLargeMemoryData *param_1)

{
  uint uVar1;
  FIndexedLockFreeLink *pFVar2;
  
  if (param_1->NumBytes < 0x20001) {
    LOCK();
    UNLOCK();
    if ((int)FreeListLength < GPooledLargeMemoryData_MaxPoolLength) {
      FreeListLength = (atomic<int>)((int)FreeListLength + 1);
      uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar1 == 0) {
        pFVar2 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe] + (uVar1 & 0x3fff);
      }
      pFVar2->Payload = (atomic<void_*>)param_1;
      FLockFreePointerListLIFORoot<0,1>::Push((FLockFreePointerListLIFORoot<0,1> *)&FreeList,uVar1);
      return;
    }
    LOCK();
    UNLOCK();
  }
  if (param_1->Data != (uchar *)0x0) {
    FMemory::Free(param_1->Data);
  }
  ::operator_delete(param_1,0x18);
  return;
}

