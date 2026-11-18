// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~TUniqueLock<UE::FMutex> @ 142669f30

void __thiscall UE::TUniqueLock<UE::FMutex>::~TUniqueLock<UE::FMutex>(TUniqueLock<UE::FMutex> *this)

{
  atomic<unsigned_char> aVar1;
  FMutex *this_00;
  
  this_00 = this->Mutex;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

