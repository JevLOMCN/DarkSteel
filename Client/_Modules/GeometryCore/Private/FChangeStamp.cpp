// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GetValue @ 1434c93d0

uint __thiscall UE::Geometry::FDynamicMesh3::FChangeStamp::GetValue(FChangeStamp *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  uint uVar2;
  bool bVar3;
  
  if (this->bIsEnabled == false) {
    return 1;
  }
  this_00 = &this->Mutex;
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(this_00);
  }
  uVar2 = this->Value;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return uVar2;
}

// IncrementIfEnabled @ 1435b5c20

void __thiscall UE::Geometry::FDynamicMesh3::FChangeStamp::IncrementIfEnabled(FChangeStamp *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (this->bIsEnabled != false) {
    LOCK();
    bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&this->Mutex);
    }
    this->Value = this->Value + 1;
    LOCK();
    pFVar1 = &this->Mutex;
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(&this->Mutex);
    }
  }
  return;
}

