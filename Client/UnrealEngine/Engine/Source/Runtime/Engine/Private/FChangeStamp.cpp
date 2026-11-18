// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetValue @ 147a5b5c0

uint __thiscall FNewSpline::FChangeStamp::GetValue(FChangeStamp *this)

{
  atomic<unsigned_char> aVar1;
  uint uVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  uVar2 = this->Value;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return uVar2;
}

