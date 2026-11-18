// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FOutputDevicesPrimaryScopeLock @ 1418bce70

FOutputDevicesPrimaryScopeLock * __thiscall
UE::Private::FOutputDevicesPrimaryScopeLock::FOutputDevicesPrimaryScopeLock
          (FOutputDevicesPrimaryScopeLock *this,FOutputDeviceRedirectorState *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  
  this->State = param_1;
  this->bNeedsUnlock = false;
  this->bLocked = false;
  aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((aVar2 != this->State->LockedThreadId) &&
     ((aVar1 = this->State->PanicThreadId, aVar1 == (atomic<unsigned_int>)0xffffffff ||
      (aVar1 == aVar2)))) {
    if (aVar2 == this->State->PanicThreadId) {
      this->bLocked = true;
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)this->State);
      if ((aVar2 == this->State->LockedThreadId) ||
         ((aVar1 = this->State->PanicThreadId, aVar1 != (atomic<unsigned_int>)0xffffffff &&
          (aVar1 != aVar2)))) {
        ReleaseSRWLockExclusive((PSRWLOCK)this->State);
      }
      else {
        this->bNeedsUnlock = true;
        this->bLocked = true;
      }
    }
    if (this->bLocked != false) {
      this->State->LockedThreadId = aVar2;
    }
  }
  return this;
}

