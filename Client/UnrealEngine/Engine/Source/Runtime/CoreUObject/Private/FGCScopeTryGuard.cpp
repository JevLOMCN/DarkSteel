// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FGCScopeTryGuard @ 142011020

FGCScopeTryGuard * __thiscall FGCScopeTryGuard::FGCScopeTryGuard(FGCScopeTryGuard *this)

{
  FSharedMutex *pFVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  FGCCSyncObject *pFVar4;
  bool bVar5;
  FGCScopeTryGuard *pFVar6;
  
  this->bLockSuccessful = false;
  pFVar4 = GGCSingleton;
  if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xbc,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGCScopeTryGuard *)(*pcVar3)();
    return pFVar6;
  }
  bVar5 = IsInGameThread();
  if (bVar5) {
    this->bLockSuccessful = true;
    return this;
  }
  if ((pFVar4->GCCounter).Counter != 0) {
    this->bLockSuccessful = false;
    return this;
  }
  aVar2 = (pFVar4->SharedMutex).State;
  if (((uint)aVar2 & 3) == 0) {
    LOCK();
    bVar5 = aVar2 == (pFVar4->SharedMutex).State;
    if (bVar5) {
      (pFVar4->SharedMutex).State = (atomic<unsigned_int>)((int)aVar2 + 8);
    }
    UNLOCK();
    if (bVar5) goto LAB_14201109e;
  }
  UE::FSharedMutex::LockSharedSlow(&pFVar4->SharedMutex);
LAB_14201109e:
  bVar5 = (pFVar4->GCCounter).Counter == 0;
  if (bVar5) {
    LOCK();
    (pFVar4->AsyncCounter).Counter = (pFVar4->AsyncCounter).Counter + 1;
    UNLOCK();
  }
  LOCK();
  pFVar1 = &pFVar4->SharedMutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_int>)((int)pFVar1->State + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    UE::FSharedMutex::WakeWaitingThread(&pFVar4->SharedMutex);
  }
  this->bLockSuccessful = bVar5;
  return this;
}

// ~FGCScopeTryGuard @ 1420132a0

void __thiscall FGCScopeTryGuard::~FGCScopeTryGuard(FGCScopeTryGuard *this)

{
  code *pcVar1;
  FGCCSyncObject *pFVar2;
  bool bVar3;
  
  pFVar2 = GGCSingleton;
  if (this->bLockSuccessful != false) {
    if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xbc,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = IsInGameThread();
    if (!bVar3) {
      LOCK();
      (pFVar2->AsyncCounter).Counter = (pFVar2->AsyncCounter).Counter + -1;
      UNLOCK();
    }
  }
  return;
}

