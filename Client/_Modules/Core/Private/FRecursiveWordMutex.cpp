// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Lock @ 1414a27c0

void __thiscall UE::FRecursiveWordMutex::Lock(FRecursiveWordMutex *this)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (this->ThreadId == aVar1) {
    this->RecursionCount = this->RecursionCount + 1;
    return;
  }
  FWordMutex::Lock(&this->Mutex);
  this->ThreadId = aVar1;
  return;
}

// TryLock @ 1414b6fd0

bool __thiscall UE::FRecursiveWordMutex::TryLock(FRecursiveWordMutex *this)

{
  atomic<unsigned_int> aVar1;
  bool bVar2;
  
  aVar1 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (this->ThreadId == aVar1) {
    this->RecursionCount = this->RecursionCount + 1;
    return true;
  }
  LOCK();
  bVar2 = (this->Mutex).State == (atomic<unsigned___int64>)0x0;
  if (bVar2) {
    (this->Mutex).State = (atomic<unsigned___int64>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    return false;
  }
  this->ThreadId = aVar1;
  return true;
}

// Unlock @ 1414b8490

void __thiscall UE::FRecursiveWordMutex::Unlock(FRecursiveWordMutex *this)

{
  if (this->RecursionCount != 0) {
    this->RecursionCount = this->RecursionCount - 1;
    return;
  }
  this->ThreadId = (atomic<unsigned_int>)0x0;
  FWordMutex::Unlock(&this->Mutex);
  return;
}

