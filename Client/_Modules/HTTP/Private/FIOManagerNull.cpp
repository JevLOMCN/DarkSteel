// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 5

// ~FIOManagerNull @ 143150bd0

void __thiscall UE::EventLoop::FIOManagerNull::~FIOManagerNull(FIOManagerNull *this)

{
  return;
}

// Init @ 14316af70

bool __thiscall UE::EventLoop::FIOManagerNull::Init(FIOManagerNull *this)

{
  return true;
}

// Notify @ 1431705f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::EventLoop::FIOManagerNull::Notify(FIOManagerNull *this)

{
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar1;
  atomic<unsigned_char> aVar2;
  FBucket *this_00;
  TRefCountPtr<UE::ParkingLot::Private::FThread> TVar3;
  atomic<UE::ParkingLot::Private::FTable_*> aVar4;
  int iVar5;
  ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_> FVar6;
  FManualResetEvent *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [8];
  <lambda_1> <Stack_450;
  TArray<TRefCountPtr<UE::ParkingLot::Private::FThread>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  TStack_438;
  ulonglong uStack_28;
  
  pFVar7 = &this->Event;
  LOCK();
  aVar2 = pFVar7->State;
  pFVar7->State = (atomic<unsigned_char>)0x1;
  UNLOCK();
  if (((byte)aVar2 & 3) != 2) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_478;
  TStack_438.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0;
  TStack_438.ArrayNum = 0;
  TStack_438.ArrayMax = 0x80;
  aVar4 = ParkingLot::Private::FTable::GlobalTable;
  while( true ) {
    ParkingLot::Private::FTable::GlobalTable = aVar4;
    if ((aVar4 == (atomic<UE::ParkingLot::Private::FTable_*>)0x0) ||
       (this_00 = *(FBucket **)
                   ((uint *)((longlong)aVar4 + 8) +
                   ((((ulonglong)pFVar7 & 0xffffffff) * -0x34efebe6d34d3a04 + 0x5b12db9242bd7ce7 +
                     ((ulonglong)pFVar7 >> 0x20) * -0x23d4e82362d043d7 >> 0x20) %
                   (ulonglong)*(uint *)aVar4) * 2), this_00 == (FBucket *)0x0)) goto LAB_1414b96fa;
    FWordMutex::Lock(&this_00->Mutex);
    if (aVar4 == ParkingLot::Private::FTable::GlobalTable) break;
    FWordMutex::Unlock(&this_00->Mutex);
    aVar4 = ParkingLot::Private::FTable::GlobalTable;
  }
  <Stack_450.WakeThreads = &TStack_438;
  <Stack_450.WakeCount = 0xffffffff;
  <Stack_450.Address = pFVar7;
  ParkingLot::Private::FBucket::DequeueIf<_UE::ParkingLot::WakeMultiple_::__l5::<lambda_1>_>
            (this_00,&<Stack_450);
  FWordMutex::Unlock(&this_00->Mutex);
LAB_1414b96fa:
  iVar5 = TStack_438.ArrayNum;
  uVar9 = (ulonglong)TStack_438.ArrayNum;
  FVar6 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FVar6 = TStack_438.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)
          ((longlong)FVar6 + uVar9 * 8);
  while( true ) {
    uVar8 = (uint)uVar9;
    if ((uint)uVar9 != iVar5) {
      `TCheckedPointerIterator<TRefCountPtr<UE::ParkingLot::Private::FThread>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStack_458);
      uVar8 = TStack_438.ArrayNum;
    }
    if (FVar6 == FVar1) break;
    TVar3.Reference = *(FThread **)FVar6;
    (TVar3.Reference)->WaitAddress = (atomic<void_const_*>)0x0;
    HAL::Private::FMicrosoftManualResetEvent::Notify(&(TVar3.Reference)->Event);
    uVar9 = (ulonglong)(uint)TStack_438.ArrayNum;
    FVar6 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)((longlong)FVar6 + 8);
  }
  FVar6 = (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)&TStack_438;
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FVar6 = TStack_438.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<UE::ParkingLot::Private::FThread>,int>
            ((TRefCountPtr<UE::ParkingLot::Private::FThread> *)FVar6,uVar8);
  if (TStack_438.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<UE::ParkingLot::Private::FThread>_>)0x0) {
    FMemory::Free((void *)TStack_438.AllocatorInstance.SecondaryData);
  }
  return;
}

// Poll @ 143172900

void __thiscall UE::EventLoop::FIOManagerNull::Poll(FIOManagerNull *this,FTimespan param_1)

{
  FManualResetEvent *pFVar1;
  double dVar2;
  double dVar3;
  FMonotonicTimePoint FVar4;
  FMonotonicTimePoint FVar5;
  atomic<unsigned_char> aVar6;
  bool bVar7;
  atomic<unsigned_char> *local_res8 [3];
  FWaitState local_48 [3];
  
  pFVar1 = &this->Event;
  dVar2 = (double)param_1.Ticks * __real_3e7ad7f29abcaf48;
  if (dVar2 == 0.0) {
    LOCK();
    pFVar1->State = (atomic<unsigned_char>)((byte)pFVar1->State & 0xfe);
    UNLOCK();
    return;
  }
  FVar4 = FMonotonicTimePoint::Now();
  dVar3 = __real_7ff0000000000000;
  aVar6 = pFVar1->State;
                    /* WARNING: Load size is inaccurate */
  FVar4.Time = dVar2 + *FVar4.Time;
  if (((byte)aVar6 & 1) != 0) {
    LOCK();
    pFVar1->State = (atomic<unsigned_char>)((byte)pFVar1->State & 0xfe);
    UNLOCK();
    return;
  }
  do {
                    /* WARNING: Load size is inaccurate */
    if ((FVar4.Time != dVar3) &&
       (FVar5 = FMonotonicTimePoint::Now(), FVar4.Time < *FVar5.Time || FVar4.Time == *FVar5.Time))
    break;
    if (((byte)aVar6 & 2) == 0) {
      LOCK();
      bVar7 = aVar6 == pFVar1->State;
      if (bVar7) {
        pFVar1->State = (atomic<unsigned_char>)0x2;
      }
      UNLOCK();
      if (bVar7) goto LAB_1431729af;
    }
    else {
LAB_1431729af:
      local_res8[0] = &pFVar1->State;
      ParkingLot::Private::WaitUntil
                (local_48,pFVar1,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,local_res8,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar4);
    }
    aVar6 = pFVar1->State;
  } while (((byte)aVar6 & 1) == 0);
  LOCK();
  pFVar1->State = (atomic<unsigned_char>)((byte)pFVar1->State & 0xfe);
  UNLOCK();
  return;
}

// Shutdown @ 143182a70

void __thiscall UE::EventLoop::FIOManagerNull::Shutdown(FIOManagerNull *this)

{
  return;
}

