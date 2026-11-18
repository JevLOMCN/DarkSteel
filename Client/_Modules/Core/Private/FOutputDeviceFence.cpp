// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Poll @ 1418f08e0

bool __thiscall FOutputDeviceFence::Poll(FOutputDeviceFence *this)

{
  return this->Index <= (ulonglong)this->State->FenceCompleteIndex;
}

// Wait @ 141900050

void __thiscall FOutputDeviceFence::Wait(FOutputDeviceFence *this)

{
  TEventCount<unsigned_int> *pTVar1;
  atomic<unsigned_int> aVar2;
  FOutputDeviceRedirectorState *this_00;
  atomic<unsigned___int64> aVar3;
  uint uVar4;
  atomic<unsigned_int> *local_28;
  uint local_20;
  FWaitState local_18;
  
  this_00 = this->State;
  aVar3 = (atomic<unsigned___int64>)this->Index;
  if ((ulonglong)this_00->FenceCompleteIndex < (ulonglong)aVar3) {
    pTVar1 = &this_00->FenceCompleteEvent;
    do {
      UE::Private::FOutputDeviceRedirectorState::ConditionalFlushBufferedItems(this_00,Async);
      aVar2 = pTVar1->Count;
      LOCK();
      pTVar1->Count = (atomic<unsigned_int>)((uint)pTVar1->Count | 1);
      UNLOCK();
      if ((ulonglong)aVar3 <= (ulonglong)this_00->FenceCompleteIndex) {
        return;
      }
      uVar4 = (uint)aVar2 & 0xfffffffe;
      if (((uint)pTVar1->Count & 0xfffffffe) == uVar4) {
        local_28 = &pTVar1->Count;
        local_20 = uVar4;
        UE::ParkingLot::Private::Wait
                  (&local_18,pTVar1,
                   UE::TFunctionWithContext<bool___cdecl(void)>::
                   Call<_UE::TEventCount<unsigned_int>::Wait_::__l5::<lambda_1>_>,&local_28,
                   (_func___cdecl_void_void_ptr *)0x0,(void *)0x0);
      }
    } while ((ulonglong)this_00->FenceCompleteIndex < (ulonglong)aVar3);
  }
  return;
}

