// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FThreadLocalData @ 14147f2c0

FThreadLocalData * __thiscall
UE::ParkingLot::Private::FThreadLocalData::FThreadLocalData(FThreadLocalData *this)

{
  uint uVar1;
  
  (this->Thread).Reference = (FThread *)0x0;
  this->bDestroyed = false;
  LOCK();
  UNLOCK();
  uVar1 = (int)ThreadCount + 1;
  ThreadCount = (atomic<unsigned_int>)((int)ThreadCount + 1);
  FTable::Reserve(uVar1);
  return this;
}

// ~FThreadLocalData @ 141481b90

void __thiscall UE::ParkingLot::Private::FThreadLocalData::~FThreadLocalData(FThreadLocalData *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FThread *pFVar3;
  
  LOCK();
  ThreadCount = (atomic<unsigned_int>)((int)ThreadCount + -1);
  UNLOCK();
  pFVar3 = (this->Thread).Reference;
  if (pFVar3 != (FThread *)0x0) {
    (this->Thread).Reference = (FThread *)0x0;
    LOCK();
    paVar1 = &pFVar3->ReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      ::operator_delete(pFVar3,0x40,0x40);
    }
  }
  this->bDestroyed = true;
  pFVar3 = (this->Thread).Reference;
  if (pFVar3 != (FThread *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      ::operator_delete(pFVar3,0x40,0x40);
    }
  }
  return;
}

// Get @ 141497360

TRefCountPtr<UE::ParkingLot::Private::FThread> __cdecl
UE::ParkingLot::Private::FThreadLocalData::Get(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FThread *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  FThread *in_RCX;
  longlong *plVar8;
  
  puVar6 = (undefined8 *)0x0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar8 = (longlong *)(lVar3 + 0xa0);
  if ((*(uint *)(lVar3 + 0xb0) & 1) == 0) {
    *plVar8 = 0;
    *(uint *)(lVar3 + 0xb0) = *(uint *)(lVar3 + 0xb0) | 1;
    *(undefined1 *)(lVar3 + 0xa8) = 0;
    LOCK();
    UNLOCK();
    uVar7 = (int)ThreadCount + 1;
    ThreadCount = (atomic<unsigned_int>)((int)ThreadCount + 1);
    FTable::Reserve(uVar7);
    __tlregdtor(`UE::ParkingLot::Private::FThreadLocalData::Get'::__l2::
                _dynamic_atexit_destructor_for__ThreadLocalData__);
  }
  pFVar4 = (FThread *)*plVar8;
  if (pFVar4 == (FThread *)0x0) {
    if (*(char *)(lVar3 + 0xa8) == '\0') {
      puVar5 = ::operator_new(0x40,0x40);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 1;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
        puVar6 = puVar5;
      }
      puVar5 = (undefined8 *)*plVar8;
      if (puVar5 != puVar6) {
        *plVar8 = (longlong)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          *(int *)((longlong)puVar6 + 0x1c) = *(int *)((longlong)puVar6 + 0x1c) + 1;
          UNLOCK();
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)puVar5 + 0x1c);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            ::operator_delete(puVar5,0x40,0x40);
          }
        }
      }
      pFVar4 = (FThread *)*plVar8;
      in_RCX->Next = pFVar4;
      if (pFVar4 == (FThread *)0x0) {
        return (TRefCountPtr<UE::ParkingLot::Private::FThread>)in_RCX;
      }
      goto LAB_141497477;
    }
    pFVar4 = ::operator_new(0x40,0x40);
    if (pFVar4 == (FThread *)0x0) {
      in_RCX->Next = (FThread *)0x0;
      return (TRefCountPtr<UE::ParkingLot::Private::FThread>)in_RCX;
    }
    pFVar4->Next = (FThread *)0x0;
    pFVar4->WaitAddress = (atomic<void_const_*>)0x0;
    pFVar4->WakeToken = 0;
    (pFVar4->Event).bWait = (atomic<bool>)0x1;
    pFVar4->ReferenceCount = (atomic<unsigned_int>)0x0;
  }
  in_RCX->Next = pFVar4;
LAB_141497477:
  LOCK();
  pFVar4->ReferenceCount = (atomic<unsigned_int>)((int)pFVar4->ReferenceCount + 1);
  UNLOCK();
  return (TRefCountPtr<UE::ParkingLot::Private::FThread>)in_RCX;
}

