// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// WaitUntil @ 1414b9110

bool __thiscall
UE::FManualResetEvent::WaitUntil(FManualResetEvent *this,FMonotonicTimePoint param_1)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  FMonotonicTimePoint FVar6;
  bool bVar7;
  double local_res8 [2];
  FManualResetEvent *local_res18 [2];
  FWaitState local_58 [3];
  
  dVar3 = __real_7ff0000000000000;
  aVar1 = this->State;
  do {
    if (((byte)aVar1 & 1) != 0) {
      return true;
    }
                    /* WARNING: Load size is inaccurate */
    if ((param_1.Time != dVar3) &&
       (FVar6 = FMonotonicTimePoint::Now(),
       param_1.Time < *FVar6.Time || param_1.Time == *FVar6.Time)) {
      return false;
    }
    if (((byte)aVar1 & 2) == 0) {
      LOCK();
      bVar7 = aVar1 == this->State;
      if (bVar7) {
        this->State = (atomic<unsigned_char>)0x2;
      }
      UNLOCK();
      if (bVar7) goto LAB_1414b9180;
    }
    else {
LAB_1414b9180:
      local_res8[0] = param_1.Time;
      local_res18[0] = this;
      iVar5 = _isnan(param_1.Time);
      if ((iVar5 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!WaitTime.IsNaN()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\ParkingLot.cpp"
                             ,0x286,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      ParkingLot::Private::TimedWait
                (local_58,this,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,local_res18,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,ParkingLot::Private::WaitUntilTime,
                 local_res8);
    }
    aVar1 = this->State;
  } while( true );
}

// FManualResetEvent @ 141b21fe0

FManualResetEvent * __thiscall UE::FManualResetEvent::FManualResetEvent(FManualResetEvent *this)

{
  this->State = (atomic<unsigned_char>)0x0;
  return this;
}

// Wait @ 141bbde40

void __thiscall UE::FManualResetEvent::Wait(FManualResetEvent *this)

{
  atomic<unsigned_char> aVar1;
  FMonotonicTimePoint FVar2;
  bool bVar3;
  FManualResetEvent *local_res8;
  FWaitState local_28 [2];
  
  FVar2.Time = __real_7ff0000000000000.Time;
  aVar1 = this->State;
  do {
    if (((byte)aVar1 & 1) != 0) {
      return;
    }
    if (((byte)aVar1 & 2) == 0) {
      LOCK();
      bVar3 = aVar1 == this->State;
      if (bVar3) {
        this->State = (atomic<unsigned_char>)0x2;
      }
      UNLOCK();
      if (bVar3) goto LAB_141bbde7e;
    }
    else {
LAB_141bbde7e:
      local_res8 = this;
      ParkingLot::Private::WaitUntil
                (local_28,this,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_res8,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar2);
    }
    aVar1 = this->State;
  } while( true );
}

