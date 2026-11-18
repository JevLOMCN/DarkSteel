// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// Lock @ 147192a20

void __thiscall UE::FSpinLock::Lock(FSpinLock *this)

{
  atomic<bool> aVar1;
  
  LOCK();
  aVar1 = this->bFlag;
  this->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar1 != (atomic<bool>)0x0) {
    aVar1 = this->bFlag;
    while (aVar1 != (atomic<bool>)0x0) {
      aVar1 = this->bFlag;
    }
    LOCK();
    aVar1 = this->bFlag;
    this->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  return;
}

// Unlock @ 1471b0b00

void __thiscall UE::FSpinLock::Unlock(FSpinLock *this)

{
  this->bFlag = (atomic<bool>)0x0;
  return;
}

